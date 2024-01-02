#include <iostream>
#include <cmath>
using namespace std;
double khoa(int n){
    double S =0;
    int t=1;

    for(int i=1;i<=n;i++){
        t=t*i;
        S=S+pow(-1,i+1)/t;

    }
    return S;
}
int main()
{   int n;
    cin>>n;
    cout<<khoa(n);
    return 0;
}
