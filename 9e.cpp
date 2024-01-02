#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int x=0;
    int a=n;
    int GTLN=-1;
    for(int i=10; i <=n;i=i*10){
        while(a!=0){
            x=a%i;
            a=a/i;
            if(x%2==0){
                if(GTLN<x){
                    GTLN=x;
                }

            }
        }
    }
    cout<<GTLN;
    return 0;
}
