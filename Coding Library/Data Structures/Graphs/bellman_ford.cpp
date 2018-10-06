#include <bits/stdc++.h>
using namespace std;

int main() {
        int n,m,u,v,w;
        cin>>n>>m;
        vector <int> arr[m+1];
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            arr[i].push_back(u);
            arr[i].push_back(v);
            arr[i].push_back(w);
        }
        vector <int> dist(n+1);
        for(int i=2;i<=n;i++)
        dist[i]= 999;
        for(int i=1;i<n;i++)
        {
            int j =0;
            while(arr[j].size() != 0)
            {
                if(dist[arr[j][0]] + arr[j][2] < dist[arr[j][1]])
                dist[arr[j][1]] = dist[arr[j][0]] + arr[j][2];
                j++;
            }
        }
        cout<<endl;
        for(int i=1;i<=n;i++)
        cout<<dist[i]<<" ";
        return 0;
}
