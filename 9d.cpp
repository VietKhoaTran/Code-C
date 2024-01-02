#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int x=0;
    int y=n%10;
    int a =n/10;
    int GTLN=0;
    for(int i=10; i <=n;i=i*10){
        while(a!=0){
            x=a%i;
            a=a/i;
            if(GTLN<abs(x-y)){
                GTLN=abs(x-y);
            }
            y=x;
        }

    }
    cout<<GTLN;
    return 0;
}
