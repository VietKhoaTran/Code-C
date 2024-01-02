#include <iostream>

using namespace std;
long long DAOSO(long long n){
    long long t=0;
    while(n>0){
        t=t*10+n%10;
        n=n/10;
    }
    return t;
}
int main()
{
    freopen("PALNUM.INP", "r", stdin);
    freopen("PALNUM.OUT", "w", stdout);
    long long n;
    cin>>n;
    long long t=0;
    while(n!=DAOSO(n)){
        n=n+DAOSO(n);
    }
    cout<<n;
    return 0;
}
