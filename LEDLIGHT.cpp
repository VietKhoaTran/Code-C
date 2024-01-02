#include <iostream>

using namespace std;

int main()
{
    freopen("LEDLIGHT.INP", "r", stdin);
    freopen("LEDLIGHT.OUT", "w", stdout);
    long long n;
    cin>>n;
    long long a=n/3;
    long long b=n-a*3;
    long long s=a*7;
    if(b==1){
        s=s-3;
    }
    if(b==2){
        s=s+1;
    }
    cout<<s;
    return 0;
}
