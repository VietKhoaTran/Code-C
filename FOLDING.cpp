#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("FOLDING.INP", "r", stdin);
    freopen("FOLDING.OUT", "w", stdout);
    int a[2];
    int b[2];
    int dem=0;
    for(int i =0;i<=1;i++){
        cin>>a[i];
    }
    for(int i=0;i<=1;i++){
        cin>>b[i];
    }
    sort(a,a+2);
    sort(b,b+2);
    if(b[0]>a[0]&&b[0]>a[1]){
        dem=-1;
    }
    else if(b[1]>a[1]&&b[1]>a[0]){
        dem=-1;
    }
    else{
        a[0]=a[0]/b[0];
        if(a[0]==1){
            dem=dem+1;
        }else{
        while(a[0]>0){
            dem++;
            a[0]=a[0]/2;
        }
        }
        a[1]=a[1]/b[1];
        if(a[0]==1){
            dem=dem+1;
        }else{
        while(a[1]>0){
            dem++;
            a[1]=a[1]/2;
        }
        }
    }
    cout<<dem;
    return 0;
}
