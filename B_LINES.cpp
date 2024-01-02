#include <iostream>
#include <algorithm>
using namespace std;
long long m,n,k;
long long b[90001];
long long j=1;
void DEM(long long a[], long long t){
    long long dem=1;
    for(int i=1;i<=t;i++){
        if(a[i]!=a[i+1] || i==t){
            b[j]=dem;
            j++;
            dem=1;
        }
        else{
            dem++;
        }
    }
}
int main()
{
    freopen("B_LINES.INP", "r", stdin);
    freopen("B_LINES.OUT", "w", stdout);
    cin>>m>>n>>k;
    long long t=m*n;
    long long Sum=0;
    long long a[90001];
    for(int i=1;i<=t;i++){
        cin>>a[i];
    }
    sort(a+1, a+t+1);
    DEM(a, t);
    sort(b+1,b+j);
    for(int i=1;i<=k;i++){
        Sum=Sum+b[j-i];
    }
    cout<<Sum;
    return 0;
}
