#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Ways to Declare String_1
    string str;
    cin>>str;
    cout<<str;
    
    // Ways to Declare String_2
    string str1(5, 'n');
    //str1 (5,'n');
    cout<<endl<<str1;

    //Ways to Declare String_3
    string str2("Shakti");
    cout<<endl<<str2;

    //To accept String with Spaces
    string str3;
    getline(cin, str3);
    cout<<endl<<str3;

    //To append two string

    string S1 = "Fam";
    string S2 ="ily";
    cout<<endl<<S1+S2; //Without changing any string 
    S1.append(S2);    // While changing S1;
    cout<<endl<<S1;

    //Access any one alphabet in the String

    string S4 = "I love You";
    cout<<endl<<S4[2];

    //compare two strings

    string s4 = "abc";
    string s5 = "abc";
    cout<<endl<<s5.compare(s4);

    // Erase inbetween character

    string S5 ="nimcompoop";
    S5.erase(3,3);
    cout<<endl<<S5;

    // Find a character

    string S6 ="nincompoop";
    S6.insert(3,"lol");
    cout<<endl<<S6;

    //length of string

    cout<< endl<<S6.size();

    //Print every single character
    cout<<endl;
    for(int i=0;i<S6.length();i++)
    {
        cout<<S6[i]<<endl;
    }

    //Print Substring of given string

    string S7 = S6.substr(9,13);
    cout<<S7;

    //string to integer

    string S8 = "786";
    int x= stoi(S8);
    cout<<endl<<x+2<<endl;

    //integer to string

    int y = 786;
    cout<<to_string(y)+"2";

    //sort string

    sort(S6.begin(), S6.end());
    cout<<endl<<S6;

    return 0;

}