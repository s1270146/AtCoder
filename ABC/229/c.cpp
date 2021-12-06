#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct cheese
{
    /* data */
    long long a;
    long long b;
    bool operator<( const cheese& right ) const {
        return a == right.a ? b < right.b : a < right.a;
    }
};

int main()
{
    long long n,w,d=0;
    cin >> n >> w;
    vector<pair<long long, long long> > v;
    for(int i=0;i<n;i++)
    {
        cin >> v.first >> v.second;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(), v.end());
    while(w!=0 && !v.empty())
    {
        if(w>=v[0].b)
        {
            d += v[0].a * v[0].b;
            w -= v[0].b;
        }
        else
        {
            d += v[0].a * w;
            w=0;
        }
        v.erase(v.begin());
    }

    cout << d << endl;
    return 0;
}