#include<bits/stdc++.h>
using namespace std;
int main()
{

  /*
    map<string,int>marksMap;
    marksMap.insert({{"Hridoy",90},{"Hridoy2",80},{"Hridoy3",70},{"Hridoy4",70}});
    cout<<marksMap["Hridoy"]<<endl;
    cout<<marksMap.at("Hridoy2")<<endl;
*/

      map<int,int>Mp2;
    Mp2.insert({{1,90},{2,80},{3,70},{4,70}});
    Mp2[5]=60;       //so first will be index or key

    for(auto it:Mp2)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    ///Mp2.clear();   clear all map
    ///Mp2.empty();   Map empty kina check kora
}
