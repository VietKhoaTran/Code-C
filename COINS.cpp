#include <iostream>
#include <algorithm>
using namespace std;

struct MangSapxep {
    long long x;
    long long y;
}k[100000];

bool compare (MangSapxep a, MangSapxep b){
    return(a.x<b.x || (a.x==b.x && a.y< b.y));
}
int main()
{
    freopen("COINS.INP", "r", stdin);
    freopen("COINS.OUT", "w", stdout);
    long long n,m;
    cin>>n>>m;
    long long a[n];
    for(int i=1;i<=n;i++){
        cin>>k[i].y;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
        k[i].x=a[i]-k[i].y;
    }
    sort(k,k+n+1,compare);
    int i=1;
    while(i<=n && m>=k[i].x){
        m=m+k[i].y;
        i++;
    }
    cout<<m;
    return 0;
}
