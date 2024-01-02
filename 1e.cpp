#include <iostream>
#include <cmath>
using namespace std;
int  khoa(int n){
    int S =1;
    for (int i=n ;i>=1;i=i-2){
        S=S*i;
    }
    return S;
}
int main()
{   int n;
    cin>>n;
    cout<<khoa(n);
    return 0;
}
