#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    freopen("FLOWERS.INP", "r", stdin);
    freopen("FLOWERS.OUT", "w", stdout);
    int a[3];
    for(int i =1;i<=3;i++){
        cin>>a[i];
    }
    int t=a[3];
    int m=a[2];
    int k=a[1];
    int g=0;
    int khoa=t;
    int s=0;
    for(int i=0;i<=t/k;i++){
        s=t-i*k;
        if(s%m<khoa){
            khoa=s%m;
            }
    }
    g=t-khoa;
    cout<<g;

    return 0;
}
