#include <iostream>

using namespace std;

int main()
{
    char c;
    int flag = 1;
    int i = 0;
    int j = 0;
    while(scanf("%c",&c)&&c!='\n')
    {
        if(c=='o')
        {
            if(i==1)
            {
                flag = 0;
                break;
            }
            i = 1;
        }
        if(c=='x')
        {
            
        }
    }
    if(flag==1)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}