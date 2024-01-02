
#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TASK16.INP","r",stdin);
    freopen("TASK16.OUT","w",stdout);
    int n;
    cin>>n;
    int a=n;
    int x=0;
    if(a%10==0){
        a=a/10;
        while(a>0){
        x=a%10;
        cout<<x;
        a=a/10;
    }
    }
    else{
    a=n;
    while(a>0){
        x=a%10;
        cout<<x;
        a=a/10;
    }
    }
    return 0;
}
