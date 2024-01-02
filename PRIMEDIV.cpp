#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    freopen("PRIMEDIV.INP", "r", stdin);
    freopen("PRIMEDIV.OUT", "w", stdout);
    long long n;
    cin>>n;
    long long t=sqrt(n);
    long long i=2;
    long long a=0;
    while(i<=t){
        if(n%i==0){
            n=n/i;
            if(a!=i){
            cout<<i<<" ";
            }
            a=i;
        }
        else{
            i++;
        }
        if(n<=1){
            return 0;
        }
    }
    if(n>1){
        cout<<n;
    }
}

