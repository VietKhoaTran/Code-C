#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("FNUM.INP","r",stdin);
    freopen("FNUM.OUT","w",stdout);
    int n ;
    cin>>n;
    int dem=0;
    for(int m=4;m<=n;++m){
            int S=0;
    int b=0;
    for(int i=2;i<m;++i){
        if(m%i==0){
        S=S+i;
        }
    }
    for(int j=2;j<S;++j){
        if(S%j==0){
            b=b+j;
        }
    }
    if(b==m && S<=n && m <=S){
        cout<<m<<" " <<S<<"\n";
        dem++;
    }

    }
    if(dem==0){
        cout<<-1;
    }
    return 0;
    }
