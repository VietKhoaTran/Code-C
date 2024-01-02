#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("PROMOTION.INP","r",stdin);
    freopen("PROMOTION.OUT","w",stdout);
    long long n;
    long long k;
    cin >>n;
    cin >>k;
    long long x=n/k;
    long long s=0;
    long long a=x+n%k;
    while(a>=k){
        s=s+a/k;
        a=a/k;
    }
    x=n/k;
    cout<<s+x;
    return 0;
}
