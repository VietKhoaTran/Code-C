#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    freopen("TASK17.INP","r",stdin);
    freopen("TASK17.OUT","w",stdout);
    int n ;
    cin >>n;
    int a=0;
    int khoa=0;
    while (n >0){
        a=n%10;
        if(a==2||a==3||a==5||a==7){
            khoa++;
        }
        n=n/10;
    }
    cout<<khoa;
    return 0;
}
