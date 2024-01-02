#include <algorithm>
#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    freopen("APARTMENTS.INP", "r", stdin);
    freopen("APARTMENTS.OUT", "w", stdout);
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n+1],b[m+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int dem=0;
    while(n>=1 && m>=1){
        if(abs(a[n]-b[m])<=k){
            dem++;
            n--;
            m--;
        }
        else if(a[n]-b[m]>k){
            n--;
        }
        else{
            m--;
        }
    }
    cout<<dem;
    return 0;
}
