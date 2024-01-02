#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    freopen("CALENDAR.INP", "r", stdin);
    freopen("CALENDAR.OUT", "w", stdout);
    int n;
    cin>>n;
    int a=n;
    long long k[2];
    int q=0;
    int t=0;
    for(int i=1;i<=2;i++){
        cin>>k[i];
    }
    long long s=0;
    if((k[2]-1)%2==0){
        s=((k[2]-1)/2)*61;
    }
    else{
        s=((k[2]-1)/2)*61+31;
    }
    s=s+k[1]-1;
    t=s%7;
    q=t+a;
    if(q>7){
        q=q-7;
    }
    cout<<q;
    return 0;
}
