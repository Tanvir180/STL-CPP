#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;            // it can be string also
    for(int i=0;i<5;i++)
    {
        int x,y;
        cin>>x>>y;
        m[x]=y;
    }
    for(auto it=m.begin();it!=m.end();it++)   //iterator
    {
        cout<<it->first<<it->second;
    }

}
