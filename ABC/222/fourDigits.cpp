#include <iostream>
#define N 4

using namespace std;

int main()
{
    int n,m;
    int t = 1000;
    char* cstr;
    cstr = new char[N];
    cin >> n;

    for(int i=0;i<N;i++)
    {
        m = n/t;
        n = n%t;
        cstr[i] = m + '0';
        t /= 10;
    }
    cout << cstr << endl;

    return 0;
}