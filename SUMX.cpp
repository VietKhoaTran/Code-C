#include <iostream>
#include<algorithm>
using namespace std;
int i=0;
int t=0;
int dem=0;
void solve(long long a, long long b, long long c){
    if(a+b<c){
        i++;
    }
    else if(a+b>c){
        t++;
    }
    else{
        dem++;
        i++;
    }
}
int main()
{
    freopen("SUMX.INP", "r", stdin);
    freopen("SUMX.OUT", "w", stdout);
    int n;
    cin>>n;
    long long a[n];
    long long x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    sort(a,a+n);
    int j=n-1;
    while(i<j){
        j=j-t;
        t=0;
        solve(a[i], a[j], x);
    }
    cout<<dem;
    return 0;
}
