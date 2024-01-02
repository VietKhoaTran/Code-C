#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int a=n;
    int dem=0;
    for(int i=1;i<=n;i++){
        if(a%i==0){
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
