#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    freopen("PRODIG.INP", "r", stdin);
    freopen("PRODIG.OUT", "w", stdout);
    long long n;
    cin>>n;
    int i=9;
    long long s=0;
    long long t=1;
    if(n==0){
        cout<<10;
    }else if(n==1){
        cout<<n;
    }else{
        while(i>=2){
            if(n%i==0){
                s=s+(long long)i*t;
                n=n/i;
                t=t*10;
            }
            else{
            i--;
            }
        }
        if(n>10){
            cout<<-1;
        }
        else{
            cout<<s;
        }
    }

}
