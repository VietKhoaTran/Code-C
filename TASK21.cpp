#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK21.INP","r",stdin);
    freopen("TASK21.OUT","w",stdout);

    long long n;
    cin >>n;
    long long s=0;
    long long m =sqrt(n);
    for(int i=1;i<=m;i++){
        if(n%i==0){
            s=s+i+(n/i);
        }
    }
    if(m*m==n){
        s=s-m;
    }
    cout <<s;
    return 0;
}
