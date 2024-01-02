#include <iostream>
#include <cmath>
using namespace std;
long long FINDZ(long long x, long long y){
    long long ans=0;
    long long m= y*(y+1)/2;
    return ans= m+ (x-1)*(x+2*y-2)/2;
}
long long y2=0;
long long x2=0;
void FINDXY(long long z){
    long long t=sqrt(2*z);
    for(int i=0;i<t+2;i++){
        y2=z-i*(i+1)/2;
        if((i+2)>y2){
            x2=(i+2)-y2;
            break;
        }
    }
}
int main()
{
    freopen("MAPPING.INP", "r", stdin);
    freopen("MAPPING.OUT", "w", stdout);
    long long x,y,z;
    cin>>x>>y>>z;
    cout<<FINDZ(x, y)<<"\n";
    FINDXY(z);
    cout<<x2<<" "<<y2;
    return 0;
}
