#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;            // it can be string also
    for(int i=0;i<5;i++)
    {
        string str;
        cin>>str;
        int y;
        cin>>y;

        m[str]=y;
    }
    for(auto it=m.begin();it!=m.end();it++)   //iterator
    {
        cout<<it->first<<it->second;
    }

}

