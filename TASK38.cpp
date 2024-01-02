#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK38.INP","r",stdin);
    freopen("TASK38.OUT","w",stdout);
    int n;
    cin>>n;
    int a=2;
    int dem=0;
    while(a<=sqrt(n)){
    while(n>1){
     if(n%a==0){
        dem++;
        if(dem==1){
        cout<<a<<" ";
        }
        n=n/a;
     }
     else{
        a=a+1;
        dem=0;
     }
    }
    }
    return 0;
}
