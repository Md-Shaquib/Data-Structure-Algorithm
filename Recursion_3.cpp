#include<bits/stdc++.h>
using namespace std;

string keypadArr[]= {"","", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

//Reverse ofa String
void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

//Replacing in String
void replace(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p'&& s[1]=='i')
    {
        cout<<"3.14";
        replace(s.substr(2)); 
    }
    else
    {
    cout<<s[0];
    replace(s.substr(1));
    }
}

//Tower of Hanoi

void TowerofHanoi(int n, char src, char dest, char helper)
{
    if(n==0)
    {
        return;
    }
    TowerofHanoi(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    TowerofHanoi(n-1, helper, dest,src);
}

//Remove Duplicate
string removeDup(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));

    if(ch==ans[0])
    {
        return ans;
    }
    return(ch+ans);
}

//Move all x to the end of the String
string moveallx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));

    if(ch=='x')
    {
        return ans+ch;
    }
    return ch+ans;
}

//Generate all SubString
void subseq(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros=s.substr(1);
    subseq(ros, ans);
    subseq(ros, ans+ch);
}

//Generate all SubString along with ASCII code 
void subseqcode(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code =ch;
    string ros=s.substr(1);
    subseqcode(ros, ans);
    subseqcode(ros, ans+ch);
    subseqcode(ros, ans+to_string(code));
}

//Keypad problem
 void keypad(string s, string ans)
 {
     if(s.length()==0)
     {
         cout<<ans<<endl;
         return;
     }

     char ch = s[0];
     string code = keypadArr[ch-'0'];
     string ros= s.substr(1);

     for(int i=0; i<code.length(); i++)
     {
         keypad(ros, ans+code[i]);
     }
 }


int main()
{
    string s;
    getline(cin,s);
    reverse(s);
    cout<<endl;
    replace(s);
    cout<<endl;
    TowerofHanoi(3, 'A', 'C', 'B');
    cout<<endl;
    cout<<removeDup("aaabbbcccaa")<<endl;
    cout<<moveallx("aaxxbbssxxxcf");
    cout<<endl;
    subseq("ABC", "");
    cout<<endl;
    subseqcode("AB", "");
    cout<<endl;
    //string KeypadArr[]= {"","", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}
    keypad("23","");
    return 0;
}