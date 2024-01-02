#include <iostream>
#include <cmath>
using namespace std;
double khoa(int n){
    int dem=1;
    for(int i =10;i<=n;i=i*10){
        if(n%10>=0){
            dem++;
        }
    }
    return dem;
}
int main()
{   int n;
    cin>>n;
    cout<<khoa(n) ;
    return 0;
}
