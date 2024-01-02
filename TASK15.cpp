#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TASK15.INP","r",stdin);
    freopen("TASK15.OUT","w",stdout);
    int n;
    cin>>n;
    int a=n;
    int x=0;
    int k=1;
    int dem=0;
    while(a!=0){
        x=a%10;
        if(x%2!=0){
            k=k*x;
            dem++;
        }
        a=a/10;
    }
    if(dem=0){
        cout<<0;
    }
    else{
    if(k>0){
        cout<<k;
    }
    else{
        cout<<-k;
    }
    }
    return 0;
}
