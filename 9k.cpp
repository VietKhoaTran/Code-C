#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int dem;
    int dem2=0;
    for(int i =2;i<n;i++){
        if(n%i==0){
            dem2++;
        }
    }
    if(dem2==0){
        cout<<1<<","<<n;
    }
    else{
    for(int i =2;i<=n;i++){
        dem=0;
        while(n%i==0){
            dem++;
            n=n/i;
        }
        cout<<i<<"^"<<dem<<",";
    }
    }
    return 0;
}
