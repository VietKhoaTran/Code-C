 #include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("MOBILE.INP","r",stdin);
    freopen("MOBILE.OUT","w",stdout);
    int p,t,n;
    cin>>p>>t>>n;

    int a= n /60;
    int b= n-a*60;
    int c=0;
    if(b%6==0){
         c= b/6;
    }
    else{
         c=(b/6)+1;
    }
    int m= a*p +c*t;
    cout<<m;
    return 0;
}
