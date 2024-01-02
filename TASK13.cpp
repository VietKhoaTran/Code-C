#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK13.INP","r",stdin);
    freopen("TASK13.OUT","w",stdout);

    long long n;
    cin>>n;
    long long x=0;
    long long k=0;
    long long a=n;
    while(a!=0){
        x=a%10;
        if(x%2!=0){
            k=k+x;
        }
        a=a/10;
    }
    if(k<0){
        cout<<-k;
    }
    else{
    cout<<k;
    }
    return 0;
}
