#include <bits/stdc++.h>
using namespace std;

int find(vector <int> &parent, int i)
{
    if(parent[i]==-1)
    return i;
    return find(parent,parent[i]);
}

void add_edge(vector <int> &parent, int x, int y)
{
    int xset = find(parent,x);
    int yset = find(parent,y);
    parent[xset] = yset;
}

int main() 
{
    int n, m, u, v, w, cost=0;
    cin>>n>>m;
    pair <int, pair<int,int>> p[m+1];
    for(int i=0; i<m; i++)
    {
        cin>>u>>v>> w;
        p[i] = make_pair(w, make_pair(u,v));
    }
    sort(p, p+m);
    vector <int> parent(n+1, -1);
    for(int i=0; i<m; i++)
    {
    int x = p[i].second.first, y = p[i].second.second;
    if(find(parent,x) != find(parent,y))
    {
        add_edge(parent, x, y);
        cost += p[i].first;
    }
    }
    cout << cost;
    return 0;
}
