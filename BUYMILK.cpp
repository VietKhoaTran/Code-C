#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BUYMILK.INP","r",stdin);
    freopen("BUYMILK.OUT","w",stdout);
    int n;
    long long a;
    long long c;
    cin>>a>>n>>c;
    int x=c/a;
    cout<<x+x/n;
    return 0;
}
