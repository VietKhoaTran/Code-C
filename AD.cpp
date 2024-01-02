#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
    freopen("AD.INP", "r", stdin);
    freopen("AD.OUT", "w", stdout);
    char a[1000000];
    cin>>a;
    char b[1000000];
    cin>>b;
    sort(a, a+strlen(a));
    sort(b, b+strlen(b));
    cout<<TIM(a, b);
    return 0;
}
