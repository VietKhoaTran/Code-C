#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TASK36.INP","r",stdin);
    freopen("TASK36.OUT","w",stdout);
    int n;
    cin>>n;

    int s=0;
    int dem=0;
    double k;
    int p;
    while(n!=0){
        p=n%10;
        if(p!=0){
            s=s+p;
            dem++;
        }
        n=n/10;
    }
    k=(s*100)/dem;
    k=k/100;
    cout<<setprecision(2)<<fixed<<k;

    return 0;
}
