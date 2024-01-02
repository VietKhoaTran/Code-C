#include <iostream>
#include <cmath>
using namespace std;
int khoa(int n){
    int f1=1;
    int f2=1;
    int f=0;
    if (n==1||n==2){
        return f2;
    }
    else{
    for(int i =3; i<=n;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return f;
    }
}
int main()
{   int n;
    cin>>n;
    cout<<khoa(n) ;
    return 0;
}
