#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK43.INP","r",stdin);
    freopen("TASK43.OUT","w",stdout);
    int n;
    cin>>n;
    int dem=0;
    for(int i =2; i<=n;i++){
        dem=0;
        for(int k=2;k<= sqrt(i);k++){
            if(i%k==0){
                dem++;
            }
        }
        if(dem==0){
            cout<<i<<"\n";
        }
    }

    return 0;
}
