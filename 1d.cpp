#include <iostream>
#include <cmath>
using namespace std;
double khoa(int n){
    double S =2;
    double t =0;
    for(int i=1;i<=n;i++){
        S=2+sqrt(S);
        t=S-2;
    }
    return S,t;
}
int main()
{   int n;
    cin>>n;
    cout<<khoa(n);
    return 0;
}
