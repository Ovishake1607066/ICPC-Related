#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll t,x=1;
    cin>>t;
    while(t--)
    {
        string s1;
        ll s=1,a=0,b,c=0,d,siz;
        cin>>s1;
        siz=s1.size();
        for(ll i=0;i<siz;i++)
        {
            if(c==1 && s1[i]=='W')
            {
                if(i+1>=siz)
                    s=s*3;
                else if(s1[i+1]!='W' && i+1<siz)
                {
                    c=0;
                    s=s+1;
                }
                else
                {
                    c=1;
                    s=s*2;
                }
            }
            else if(s1[i]=='W' && i-1<0)
            {
                cout<<s1[i]<<endl;
                if(s1[i+1]!='W' && i+1<siz)
                {
                    s=s*2;
                    c=0;
                }
                else
                {
                    s=s*3;
                    c=1;
                }
            }
            else if(s1[i]=='W' && i-1>=0)
            {
                if(i+1>=siz)
                    s=s*3;
                else if(s1[i+1]=='W')
                {
                    s=s*2;
                    c=1;
                }
                else if(s1[i-1]==s1[i+1])
                    {
                        s=s*2;
                        c=0;
                    }
                else
                {
                    s=s;
                    c=0;
                }
            }
            cout<<s<<endl;
        }
        //cout<<s<<endl;
    }
}
