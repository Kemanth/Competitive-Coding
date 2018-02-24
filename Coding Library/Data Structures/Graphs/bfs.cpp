#include<bits/stdc++.h>
using namespace std;

struct vertices{
	string color;
	int d;
	int p;
};

void bfs(vector<vector<int> > g,int n,int s){

	vertices vertex[n];

	for (int i = 0; i < n; ++i)
	{
		vertex[i].color="WHITE";
		vertex[i].d = INT_MAX;
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
		cout<<u<<" ";
		for(int v=0;v<g[u].size();v++){
			
			if(vertex[g[u][v]].color == "WHITE"){
				vertex[g[u][v]].color = "GRAY";
				vertex[g[u][v]].d = vertex[u].d + 1; //unweighted graph all vertices at distance 1
				vertex[g[u][v]].p = u;
				q.push(g[u][v]);
			}
		}
		vertex[u].color="BLACK";
	}

}
int main(int argc, char const *argv[])
{
	vector<vector<int> > g;
	int n,e;
    cin>>n>>e;
    g.assign(n, vector<int>());
    for(int i=0;i<e;i++){
    	int a,b;
    	cin>>a>>b;
    	g[a].push_back(b);
    	g[b].push_back(a);
    }
    int s=0;
   	bfs(g,n,s);
	return 0;
}