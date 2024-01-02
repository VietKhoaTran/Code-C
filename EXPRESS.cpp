#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("EXPRESS.INP", "r", stdin);
    freopen("EXPRESS.OUT", "w", stdout);
    int n;
    int k;
    cin >>n;
    cin >>k;
    int a=1;
    int khoa[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin >>khoa[i];
    }
    sort(khoa,khoa+n);
    for(int i=n-1;i>=0;i-- ){
        sum=sum +(a*khoa[i]);
        if(i<=n-1-k){
            a=-1;
        }
    }
    cout<<sum;
    return 0;
}
