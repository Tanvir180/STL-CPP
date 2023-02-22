// Map ar multimap er modde partokko map e duplicate value cut kore dey multimap e dey na
#include<bits/stdc++.h>
using namespace std;
int main()
{
   multimap<int,int>m;            // it can be string also
    for(int i=0;i<5;i++)
    {
        int x,y;
        cin>>x>>y;
        m.insert({x,y});
    }
    for(auto it=m.begin();it!=m.end();it++)   //iterator
    {
        cout<<it->first<<it->second;
    }

}

