#include <iostream>
#include <cstdio>

using namespace std;

int task31 (int n) {
    int sochanlonnhat(-1);
    int a;
    for (int i = 1; i <= n; i++) {
        a = n%10;
        if(a%2==0 && a > sochanlonnhat) {
            sochanlonnhat = a;
        }
        n = n / 10;
    }return sochanlonnhat;
}
int main()
{
    freopen("TASK31.INP", "r", stdin);
    freopen("TASK31.OUT", "w", stdout);
    int n;
    cin >> n;
    cout << task31(n);
    return 0;
}
