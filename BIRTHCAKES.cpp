#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    freopen("BIRTHCAKES.INP", "r", stdin);
    freopen("BIRTHCAKES.OUT", "w", stdout);
    long long n;
    cin>>n;
    long long a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    long long dem=n;
    long long i=1;
    long long j=n/2+1;
    while(j<=n && i<n/2 +1){
        if(a[j]>=a[i]*2){
            dem--;
            i++;
        }
        j++;
    }
    cout<<dem;
    return 0;
}
