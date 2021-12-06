#include <iostream>

using namespace std;

int main()
{
    int n, p, a;
    int cnt = 0;
    cin >> n >> p;

    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a<p)cnt++;
    }
    cout << cnt << endl;
    return 0;
}