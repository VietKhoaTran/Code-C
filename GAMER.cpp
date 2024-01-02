 #include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("GAMER.INP","r",stdin);
    freopen("GAMER.OUT","w",stdout);
    int n;
    cin>>n;
    int k=0;
    int S=0;

    while (S<n){
        k++;
        S=S+k;
    }

    cout<<k;
    return 0;
}
