#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    freopen("SEQLEN.INP", "r", stdin);
    freopen("SEQLEN.OUT", "w", stdout);
    long long n;
    cin>>n;
    long long a=n;
    int k=0;
    int q=1;
    while(a>0){
        k++;
        q=q*10;
        a=a/10;
    }
    q=q/10;
    long long s=(long long)(n-q+1)*k;
    while(q>1){
        q=q/10;
        k--;
        s=s+(long long)9*q*k;
    }
    cout<<s;
    return 0;
}
