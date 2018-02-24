#include<bits/stdc++.h>
using namespace std;

struct vertices{
	string color;
	int d;
	int p;
};

vertices * bfs(vector<vector<int> > g,int n,int s){

    vertices *vertex = new vertices[n];

	for (int i = 0; i < n; ++i)
	{
		vertex[i].color="WHITE";
		vertex[i].d = -1;
		vertex[i].p = -1;
	}

	vertex[s].color="GRAY";
	vertex[s].d = 0;
	vertex[s].p = -1;

	queue<int>q;
	q.push(s);
	
	while(!q.empty()){

		int u = q.front();
		q.pop();
		
		for(int v=0;v<g[u].size();v++){
			
			if(vertex[g[u][v]].color=="WHITE"){
				vertex[g[u][v]].color="GRAY";
				vertex[g[u][v]].d = vertex[u].d+6;
				vertex[g[u][v]].p=u;
				q.push(g[u][v]);
			}
		}
		vertex[u].color="BLACK";
	}
    return vertex;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<vector<int> > g;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        g.assign(n,vector<int>());
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            v--;
            u--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int s;
        cin>>s;
        s--;
        vertices *v;
        v=bfs(g,n,s);
        for(int i=0;i<n;i++){
            if(i!=s)
                cout<<v[i].d<<" ";
        }
        cout<<endl;
    }
    return 0;
}

