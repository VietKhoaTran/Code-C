#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("LARES.INP", "r", stdin);
    freopen("LARES.OUT", "w", stdout);
    int a[3];
    for(int i =1;i<=3;i++){
        cin>>a[i];
    }
    int min=a[1];
    int k=0;
    int khoa=0;
    for(int i=0;i<=a[3];i++){
        if(abs((a[1]-i)-2*(a[2]-a[3]+i))<min){
            min=abs((a[1]-i)-(a[2]-a[3]+i));
            k=i;
        }
    }
    a[1]=a[1]-k;
    a[2]=a[1]-a[3]+k;
    for(int i=1;i<=a[1]/2;i++){
        if(i<=a[2]){
            khoa++;
        }
    }
    cout<<khoa;
    return 0;
}
