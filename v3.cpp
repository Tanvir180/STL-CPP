#include<bits/stdc++.h>
using namespace std;

int display(vector<int> vec1)
{
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;
    vec1 = {1,2,3,4};
    display(vec1);
    vec1.push_back(5);
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vector<int> vec2=vec1;
    display(vec2);

    vec1.insert(vec1.begin()+2,5,10);  // data insert
    display(vec1);

    vec2[2]=99; //update
    display(vec2);

    vec1.erase(vec1.begin()+2,vec1.begin()+6);
    display(vec1);

    int *arry = vec1.data();  //Convert vector into array
}
