#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    freopen("ARITHMETIC.INP", "r", stdin);
    freopen("ARITHMETIC.OUT", "w", stdout);
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t=0;
    long long g=pow(10,9);
    while(n>0){
    if(t%2==0){
        for(int i=0;i<n-1;i++){
        a[i]=(a[i]+a[i+1])%(g+7);
        }
    }
    else{
        for(int i=0;i<n-1;i++){
        a[i]=(a[i]*a[i+1])%(g+7);
        }
    }
    t++;
    n--;
    }
    cout<<a[n];
    return 0;
}
