#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{   freopen("PAINTING.INP","r",stdin);
    freopen("PAINTING.OUT","w",stdout);
    long long n;
    cin>>n;
    long long m =sqrt(n);
    int dem=0;

    for(int i=1;i<=m;i++)
    {
        if(n%i==0){
        dem=dem+2;
        }
    }
    if(m*m==n){
        dem=dem-1;
    }
    cout<<n-dem<<" "<<dem;
    return 0;
}
