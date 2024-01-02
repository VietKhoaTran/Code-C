#include <iostream>
#include <cstdio>

using namespace std;

int Solve (int p, int t, int n)
{
    int a = n / 60;
    int b = n % 60;
    b = b / 6;
    if (n - a*60 - b*6 != 0)
        ++b;
    int s = p*a + t*b;
    return s;
}

int main()
{
    freopen("MOBILE.INP","r",stdin);
    freopen("MOBILE.OUT","w",stdout);
    int p,t,n;
    cin>>p>>t>>n;
    cout <<Solve(p,t,n);
    return 0;
}
