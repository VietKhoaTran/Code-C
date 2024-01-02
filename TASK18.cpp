#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int dem =0;
    int m=sqrt(n);
    for(int i =2;i<=m;i++){
        if(n%i==0){
            dem=dem+2;
        }
    }
    if(m*m==n){
        dem=dem-1;
    }
    cout<<dem;
    return 0;
}
