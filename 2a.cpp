#include <iostream>
#include <cmath>
using namespace std;
int khoa(int n){
    int s =0;
    int t=1;
    for(int i=1;i<=n;i++){
        t=t*i;
        s=s+t;

        }
    return s;
}
int main()
{   int n,a;
    cin>>n>>a;
    cout<<khoa(n) % a;
    return 0;
}
