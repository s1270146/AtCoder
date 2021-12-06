#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long a,b;
    long long _a,_b;
    long long  n,flag=1;
    cin >> a >> b;
    for(int i=18 ;i>=0;i--)
    {
        n = pow(10,i);
        _a = a / n;
        _b = b / n;
        cout << _a << " " << _b << endl;
        if((_a + _b) > 9)
        {
            flag = 0;
            break;
        }
        a = a - _a * n;
        b = b - _b * n;
    }
    if(flag==1)cout << "Easy" << endl;
    else cout << "Hard" << endl;

    return 0;
}