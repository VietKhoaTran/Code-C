#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    freopen("KTHDIV.INP", "r", stdin);
    freopen("KTHDIV.OUT", "w", stdout);
    long long n;
    long long k;
    cin>>n>>k;
    long long m=sqrt(n);
    long long dem=0;
    if(m*m==n){
        dem--;
    }
    long long t=0;
    long long a[n];
    for(int i =1;i<=m;i++){
        if(n%i==0){
            dem=dem+2;
        }
    }
    if(dem<k){
        cout<<-1;
        return 0;
    }
    for(int i=1;i<=m;i++){
        if(n%i==0){
            t++;
            if(t==k){
                cout<<i;
                return 0;
            }
            if(dem-t+1==k){
                cout<<n/i;
                return 0;
            }
        }
    }
    return 0;
}
