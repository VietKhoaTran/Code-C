#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("BUYGIFTS.INP", "r", stdin);
    freopen("BUYGIFTS.OUT", "w", stdout);
    int n ;
    int m ;
    cin >>n;
    cin >>m;
    int a;
    int khoa[n];
    for(int i =0;i<n;i++){
        cin >>khoa[i];
    }
    sort(khoa,khoa+n);
    int k=khoa[n-1];
    for(int i =0;i<=n-m;i++){
        a=khoa[i+m-1]-khoa[i];
        if(k>a){
            k=a;
        }
    }

    cout<<k;

    return 0;
}
