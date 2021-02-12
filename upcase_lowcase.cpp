#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    string str = "aBcD";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        str[i]+=32;
    }
    cout<<str;
      for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        str[i]-=32;
    }
    cout<<endl<<str;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<endl<<str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<endl<<str;
    return 0;
}
