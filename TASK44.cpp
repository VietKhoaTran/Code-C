#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK44.INP","r",stdin);
    freopen("TASK44.OUT","w",stdout);
    int n;
    cin >>n;
    int i=2;
    int dem=0;
    while(n>0){
        dem=0;
        for(int k=2;k<=sqrt(i);k++){
            if(i%k==0){
                dem++;
            }

        }
        if(dem==0){
             cout<<i<<"\n";
             n--;
        }
            i++;

    }
    return 0;
}
