#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str_s = "AGC0";
    if(n<10)cout << str_s << "0" << n << endl;
    else 
    {
        if(n>41)n++;
        cout << str_s << n << endl;
    }

    return 0;
}