#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll t,x=1;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,u,v,a,b,c;
        scanf("%lld",&n);
        ll vis[n+1]= {0};
        vector<vector<ll> >adj(n+1);
        ll chk[n]={0};
        for(ll i=0; i<n-1; i++)
        {
            scanf("%lld",&u);
            scanf("%lld",&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        ll y,mx=0;
        for(ll i=0;i<n;i++)
            chk[i]=(adj[i+1].size());
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<adj[i+1].size(); j++)
            {
                chk[i]=chk[i]+adj[adj[i+1][j]].size();
            }
        }
        printf("Case %lld:\n",x);
        for(ll i=0; i<n; i++)
        {
            for(ll j=0;j<adj[i+1].size();j++)
            {
                if(vis[adj[i+1][j]])
                    continue;
                if(chk[i]>=chk[adj[i+1][j]-1])
                    printf("%lld %lld\n",i+1,adj[i+1][j]);
                else
                     printf("%lld %lld\n",adj[i+1][j],i+1);
            }
            vis[i+1]=1;
        }
        x++;
    }
}
