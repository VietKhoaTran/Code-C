#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("PTS.INP", "r", stdin);
    freopen("PTS.OUT", "w", stdout);
    long long n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int i=m;
    long long dem=0;
    while(n>=1){
        if(a[n]<b[i] && i>=1){
            i--;
        }
        else{
            dem=dem+n*(m-i);
            n--;
            m=i;
        }
    }
    cout<<dem;
    return 0;
}
