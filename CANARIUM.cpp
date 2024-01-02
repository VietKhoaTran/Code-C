#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("CANARIUM.INP", "r", stdin);
    freopen("CANARIUM.OUT", "w", stdout);
    long long k;
    cin>>k;
    long long m=1;
    long long n=0;
    long long p=0;
    long long q=0;
    long long t=sqrt(k);
    long long min_ans=k;
    while(m<t){
        p=2*k-m-1;
        q=2*m+1;
        if(p%q==0&&((p/q)-m)<min_ans){
            n=p/q;
            min_ans=n-m;
        }
        m++;
    }
    if(min_ans<k){
        cout<<n-min_ans<<" "<<n;
    }
    else{
        cout<<-1<<" "<<-1;
    }
    return 0;
}
