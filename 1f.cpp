#include <iostream>
#include <cmath>
using namespace std;
double khoa(int n){
    double s =n;
    for(int i=n;i>1;i--){
        s=i-1 +1/s;

    }
    return s;
}
int main()
{   int n;
    cin>>n;
    cout<<khoa(n);
    return 0;
}
