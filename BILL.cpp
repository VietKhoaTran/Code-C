 #include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BILL.INP","r",stdin);
    freopen("BILL.OUT","w",stdout);
    long long n ;
    cin>>n;
    if(n<=50){
        cout<<n*14;
    }
    if(n>=51 && n<=100){
        cout<<50*14+(n-50)*15;
    }
    if(n>=101 && n<=200){
        cout<<50*14+50*15+(n-100)*16;
    }
    if(n>=201 && n<=300){
        cout<<50*14+50*15+100*16+(n-200)*17;
    }
    if(n>=301 && n<=400){
        cout<<50*14+50*15+100*16+100*17+(n-300)*18;
    }
    if(n>=401){
        cout<<50*14+50*15+100*16+100*17+100*18+(n-400)*20;
    }
    return 0;
}
