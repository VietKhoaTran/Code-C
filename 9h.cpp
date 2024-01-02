#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int a=n;
    int dem=0;
    if(n<2){
        cout<<"n ko la snt";
    }
    else{
    for(int i=2; i<=n-1;i++){
        if(a%i==0){
            dem++;
        }
    }

    if(dem==0){
        cout<<"n la so snt";
    }
    else{
        cout<<"n ko la snt";
    }
    }
    return 0;
}
