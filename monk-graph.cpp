#include<bits/stdc++.h>
using namespace std;
vector<int>v[100005];
bool vis[100005];
int siz,edges;

void dfs(int i)
{
	vis[i]=1;
	//siz++;
	for(int j=0;j<v[i].size();j++)
	{		
		edges++;
        cout << i << " " << edges << " - " ;
		if(!vis[v[i][j]])
			dfs(v[i][j]);
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int maxedges=0;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			dfs(i);
			//cout<<edges/2<<"\n";
			maxedges=max(maxedges,edges/2);
			siz=0;edges=0;
		}
	}
	cout<<maxedges<<"\n";
	return 0;
}