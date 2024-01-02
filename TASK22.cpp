#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK22.INP","r",stdin);
    freopen("TASK22.OUT","w",stdout);
    long long n ;
    cin>>n;
    long long m =0;
    long long a=n;
    long long dem=0;
    while(a>0){
        dem++;
        a=a/10;
    }
    a=n;
    for(int i=dem-1;i>=0;i--){
        m=m+((a%10)*(pow(10,i)));
        a=a/10;
    }
    if(n>0){
    cout<<m+n;}
    else{
    cout<<-(m+n);
    }
    return 0;
}
