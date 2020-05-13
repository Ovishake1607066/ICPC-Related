#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        ll r,c,a=0,b;
        cin>>r>>c;
        if(r+1<=8 && c+2<=8)
            a++;
        if(r+1<=8 && c-2>=1)
            a++;
        if(r-1>=1 && c+2<=8)
            a++;
        if(r-1>=1 && c-2>=1)
            a++;
        if(r+2<=8 && c+1<=8)
            a++;
        if(r+2<=8 && c-1>=1)
            a++;
        if(r-2>=1 && c-1>=1)
            a++;
        if(r-2>=1 && c+1<=8)
            a++;
        cout<<"Case "<<i<<": "<<a<<endl;
    }
}
