#include <iostream>
#include <algorithm>

using namespace std;

long long dem=0;

long long Tinh(long long k, long long a, long long b){
    long long d=-1;
    if(a>=k){
        dem++;
    }
    else{
        if(b>0){
            d=(k-a-1)/b + 1;
        }
    }
    return d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("OLYMP.INP", "r", stdin);
    freopen("OLYMP.OUT", "w", stdout);
    long long n,c,k;
    cin>>n>>c>>k;
    long long a[n];
    long long b[n];
    long long d[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cin>>b[i];
        d[i]=Tinh(k, a[i], b[i]);
    }
    sort(d+1,d+n+1);
    int i=1;
    while(c>=d[i]&& i<=n){
        if(d[i]>-1){
        dem++;
        c=c-d[i];
        }
        i++;
    }
    cout<<dem;
    return 0;

}
