#include <iostream>

using namespace std;
long long solve (long long n){
    long long k=(n-1)%81+1;
    int F1=0;
    int F2=10;
    int t=0;
    int a=0;
    for(int i=0;i<k;i++){
        a=F2;
        t=a;
        while(a>0){
            F1=F1*10+a%10;
            a=a/10;
        }
        F2=F1+2;
        F1=0;
    }
    return t;
}
int main()
{
    freopen("SEQUENCE.INP", "r", stdin);
    freopen("SEQUENCE.OUT", "w", stdout);
    long long n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    cout<<solve(n);
    return 0;
}
