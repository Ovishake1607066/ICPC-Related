#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{

ll t,q;
cin>>t;
ll A[t];
for(ll i=0;i<t;i++)
   cin>>A[i];
   sort(A,A+t);
cin>>q;
ll x,cnt;
for(ll i=0;i<q;i++)
{
   cin>>x;
   cnt=0;
   for(ll k=0;k<t;k++)
   {
      if(A[k]%x==0)
         cnt++;
      if(cnt==2)
      {
         cout<<"Y"<<endl;
         goto A;
      }
   }
   cout<<"N"<<endl;
   A:;
}



}
