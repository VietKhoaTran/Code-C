#include <iostream>
#include <cmath>
using namespace std;
double khoa(int a, int b ,int n){
    int x=1;
    int y=1;
    for(int i=1;i<=n;i++){
        x=1;
        if((n-a*x)%b==0){
            y=(n-a*x)/b;
        }
        else{
            x++;
        }
        }
    return x,y;
}
int main()
{   int a,b,n;
    cin>>a>>b>>n;
    cout<<khoa(a,b,n) ;
    return 0;
}
