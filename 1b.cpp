#include <iostream>
#include <cmath>
using namespace std;
double khoa(int n){
    double S =0;
    for(int i=1;i<=n;i++){
        S+=(double) (i-1)/i;

    }
    return S;
}
int main()
{   int n;
    cin>>n;
    cout<<khoa(n);
    return 0;
}
