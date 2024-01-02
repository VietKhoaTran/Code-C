#include <iostream>

using namespace std;

int main()
{
    freopen("TASK30.INP","r",stdin);
    freopen("TASK30.OUT","w",stdout);
    int n;
    cin >>n;
    int a=n;
    int GTLN=a%10;
    int x=0;
    while(a>0){
        x=a%10;
        a=a/10;
        if(GTLN<x){
            GTLN=x;
        }

    }
    cout<<GTLN;
    return 0;
}
