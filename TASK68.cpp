#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK68.INP", "r", stdin);
    freopen("TASK68.OUT", "w", stdout);

    int n;
    cin>>n;
    int khoa[n];
    int dem=0;
    int dem1=0;
    for(int i =0;i<n;i++){
        cin>>khoa[i];
    }
    for(int i =0;i<n;i++){

        dem=0;
        for(int j =2;j<=sqrt(khoa[i]);j++){
            if(khoa[i]%j==0){
                dem++;
            }
        }
        if(dem==0){
            dem1++;
        }
        if(khoa[i]==1){
            dem1--;
        }
    }
    cout<<dem1;
    return 0;
}
