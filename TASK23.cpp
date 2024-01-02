#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK23.INP","r",stdin);
    freopen("TASK23.OUT","w",stdout);
    long long n;
    cin>>n;
    long long dem=0;
    while(n>0){
        if(n%10==4 ||n%10==9 ||n%10==1){
            dem++;
        }
        n=n/10;
    }

    cout<<dem;
    return 0;
}
