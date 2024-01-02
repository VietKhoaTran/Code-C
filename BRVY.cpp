#include <iostream>

using namespace std;
int main()
{
    int x,dx,d,dd,t,dt,v,dv;
    cin>>x>>dx>>d>>dd>>t>>dt>>v>>dv;
    int BCNN=0;
    int i=1;
    while(i<=dt){
        if((dx*i)%dt==0){
            BCNN=dx*i;
            i=dt+1;
        }
        i++;
    }
    cout<<BCNN;
    int x1=x*dx/BCNN;
    int t1=t*dt/BCNN;
    BCNN=0;
    i=1;
    while(i<=dv){
        if((dd*i)%dv==0){
            BCNN=dd*i;
            i=dv+1;
        }
        i++;
    }
    int d1=d*dd/BCNN;
    int v1=v*dv/BCNN;
    cout<<x1<<" "<<d1<<" "<<t1<<" "<<v1;
    return 0;
}
