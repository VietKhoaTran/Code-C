#include <iostream>
#include <cmath>
using namespace std;
double khoa(int n, int x){
    double s =0;
    int t=1;
    for(int i=1;i<=n;i++){
        t=t*i;
        s=s+pow(x,n-1)/t;

        }
    return s;
}
int main()
{   int x,n;
    cin>>n>>x;
    cout<<khoa(n,x) ;
    return 0;
}
