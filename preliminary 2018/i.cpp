#include<bits/stdc++.h>

using namespace std;



bool isanagram(string a,string b)
{
    if (a.length()!=b.length())
        return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.length();i++)
        if (a[i]!=b[i])
            return false;
    return true;
}
int prefix(string a, string b)
{
    int q = 0;
    for(int i=0;i<a.length() && i<b.length();i++)
    {
        if(a[i]!=b[i])
            break;
        q++;
    }
    return q;
}

int main()
{

   // string b;
    //cin>>b;
    //sort(b.begin(),b.end());
    //cout<<b;

    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int smart[N+1];
        for(int i=0;i<N;i++)
            cin>>smart[i];
        vector<string> lst;
        for(int i=0;i<N;i++)
        {
            string s;
            cin>>s;
            lst.push_back(s);
        }
        for(int i=0;i<N;i++)
        {
            cout<<lst[i]<<endl;
        }
        int Q;
        cin>>Q;
        for(int i=0;i<Q;i++)
        {
            string s;
            cin>>s;
            int maxy = 0;
            for(int j=0;j<N;j++)
            {
                int yo = prefix(s,lst[j]) + (isanagram(s,lst[j]) * smart[j] );
                if(yo>maxy)
                    maxy = yo;

            }
            cout<<maxy<<endl;

        }


    }

    return 0;
}
