#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    freopen("TASK28.INP","r",stdin);
    freopen("TASK28.OUT","w",stdout);
    long long n;
    cin >>n;
    for(int i =1;i<=n;i++){
        int m=sqrt(i);
        if(m*m==i){
            cout<<i<<endl;
        }
    }
    return 0;
}
