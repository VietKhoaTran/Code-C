#include <iostream>
#include <cmath>
using namespace std;
int khoa(int n){
    int f1=1;
    int fn=1;
    int s=f1;
    if( n==1){
        return f1;
    }
    for(int i =2;i<=n;i++){
        fn=i*s;
        s=s+fn;
    }
    return fn;
}
int main()
{   int n;
    cin>>n;
    cout<<khoa(n) ;
    return 0;
}
