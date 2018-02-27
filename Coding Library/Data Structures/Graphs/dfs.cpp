#include<bits/stdc++.h>
using namespace std;

struct vertices{
	string color;
	int p;
	int start;
	int finish;
};

void DFS_VISIT(vector<vector<int> > g,vertices *vertex,int u,int time){

	time++;
	vertex[u].start = time;
	vertex[u].color = "GRAY";

	cout<<u<<" ";

	for(int v = 0;v < g[u].size();v++){

		if(vertex[g[u][v]].color == "WHITE"){
			vertex[g[u][v]].p = u;
			DFS_VISIT(g,vertex,g[u][v],time);
		}
	}

	vertex[u].color = "BLACK";
	time++;
	vertex[u].finish = time;
}


void dfs(vector<vector<int> > g,int n){

	vertices vertex[n];

	for (int i = 0; i < n; ++i)
	{
		vertex[i].color="WHITE";
		vertex[i].p = -1;
	}

	int time=0;

	for(int u=0;u<n;u++){
		if(vertex[u].color=="WHITE")
			DFS_VISIT(g,vertex,u,time);
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
   	dfs(g,n);
	return 0;
}