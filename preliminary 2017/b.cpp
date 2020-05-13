#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
ll mark[5010];
string a[100000];
vector<pair<ll,ll> >v;
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
    if(a.first==b.first)
        return a.second<b.second;
    else
        return (a.first > b.first);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll n;
    cin>>n;
    while(n--)
    {
        ll r,m;
        string nm;
        cin>>r>>nm>>m;
        v.push_back(make_pair(m,r));
        a[r]=nm;
        //cout<<r<<nm<<m<<endl;
    }
    sort(v.begin(), v.end(), sortinrev);
    cout<<"Roll | Name       | Marks"<<endl;
    cout<<"-------------------------"<<endl;
    for(ll i=0;i<v.size();i++)
    {
        ll x=a[v[i].second].size();
        ll c1=0,c2=v[i].second;
        while(c2)
        {
            c1++;
            c2/=10;
        }
        ll h=4-c1;
        while(h--)
            cout<<" ";
        cout<<v[i].second;
        cout<<" | "<<a[v[i].second];
        ll y=11-x;
        while(y--)
                cout<<" ";
        cout<<"| "<<v[i].first<<endl;
    }
}

