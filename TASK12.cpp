#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK12.INP","r",stdin);
    freopen("TASK12.OUT","w",stdout);
    long long n;
    cin>>n;
    long long a=n;
    long long x=0;
    long long dem1=0;
    while(a!=0){
        x=a%10;
        if(x!=0){
            dem1++;
        }
        a=a/10;
    }
    cout<<dem1;
    return 0;
}
