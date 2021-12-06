#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int nt = 1;
    if(s1[0]=='#')
    {
        if(s1[0]==s1[1]|| s1[0]==s2[0]); 
        else nt = 0;
    }
    if(s2[0]=='#')
    {
        if(s2[0]==s2[1]|| s1[0]==s2[0]); 
        else nt = 0;
    }
    if(s1[1]=='#')
    {
        if(s1[0]==s1[1]|| s1[1]==s2[1]); 
        else nt = 0;
    }
    if(s2[1]=='#')
    {
        if(s2[0]==s2[1]|| s1[1]==s2[1]);
        else nt = 0;
    }
    if(nt==0)cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}