#include <iostream>
#include <cmath>
using namespace std;

int main()
{   int n;
    cin>>n;
    int a =n;
    int b=0;
    for(int i=10; i <=n;i=i+10){
        while(a!=0){
            b=a%i;
            a=a/i;
            cout<<b;
        }

    }
    return 0;
}
