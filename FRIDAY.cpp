#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    freopen("FRIDAY.INP", "r", stdin);
    freopen("FRIDAY.OUT", "w", stdout);
    int n;
    cin>>n;
    int k;
    cin>>k;
    int t=k+5;
    int g=0;
    int i=0;
    if(t>7){
        t=t-7;
    }
    while(i<n){
        t=t+2;
        if(t>7){
            t=t-7;
        }
        i++;
        if(t==5){
            g++;
        }
    }
    cout<<g;
    return 0;
}
