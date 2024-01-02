#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK37.INP","r",stdin);
    freopen("TASK37.OUT","w",stdout);
    int n;
    cin>>n;
    int a=2;
    while(a<=sqrt(n)){
    while(n>1){
     if(n%a==0){
        cout<<a<<" ";
        n=n/a;
     }
     else{
        a=a+1;
     }
    }
    }
    return 0;
}
