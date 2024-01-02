#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    freopen("TASK48.INP","r",stdin);
    freopen("TASK48.OUT","w",stdout);
    int n;
    cin >>n;
    int dem=0;
    int a=0;
    int khoa=1;
    int dem1=0;

    for(int i =2;i<=n;i++){
        dem=0;
        for(int k=2;k<=sqrt(i);k++){
            if(i%k==0){
                dem++;
            }
        }
        if(dem==0 && a <i){
            a=i;
        }
    }
    cout<<a<<"\n";
    while(khoa>0){
        dem1=0;
        n++;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                dem1++;
            }
        }
        if(dem1==0){
            cout<<n;
            khoa--;
        }
    }

    return 0;
}
