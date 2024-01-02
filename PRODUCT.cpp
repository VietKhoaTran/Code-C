#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("PRODUCT.INP", "r", stdin);
    freopen("PRODUCT.OUT", "w", stdout);
    int a[3];
    for(int i =1;i<=2;i++){
        cin>>a[i];
    }
       int s=1;
    int k=0;
    int dem=0;
    for(int i=a[1];i<=a[2];i++){
        k=i;
        while(k>0){
            s=s*(k%10);
            k=k/10;
        }
        if(s!=0&&i%s==0){
            dem++;
        }
        s=1;
    }
    cout<<dem;

    return 0;
}
