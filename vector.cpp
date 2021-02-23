#include<bits/stdc++.h>
#include<vector>
using namespace  std;

int main ()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Print Rule 1
    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // Print Rule 2
    vector<int> :: iterator it;
    for(it = v.begin(); it!= v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // Print Rule 3
    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    // To eliminate the last element 
    v.pop_back();

    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    // To enter the same element
    vector <int> v2 (3,50);
    
    for(auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    // To Swap any to vector
    swap (v, v2);

    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    // To Sort any vector
    vector <int> v3;
    v3.push_back(1);
    v3.push_back(4);
    v3.push_back(2);

    for(auto element:v3)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    sort(v3.begin(), v3.end());
    
    for(auto element:v3)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;

}