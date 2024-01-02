#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int x=0;
    int y=n%10;
    int s=0;
    int a =n/10;
    for(int i=10; i <=n;i=i*10){
        while(a!=0){
            x=a%i;
            a=a/i;
            s=s+abs(x-y);
            y=x;
        }

    }
    cout<<s;
    return 0;
}
