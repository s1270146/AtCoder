#include <iostream>

using namespace std;

int main()
{
    int n,n2,m;
    char** a;
    cin >> n >> m;
    n2 = n;
    a = new char*[n2];
    for(int i=0;i<n2;i++)a[i] = new char[m];

    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m;j++)cin >> a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        
    }
    return 0;
}