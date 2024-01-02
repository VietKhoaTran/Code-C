#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("MEDIANS.INP", "r", stdin);
    freopen("MEDIANS.OUT", "w", stdout);
    int n ;
    cin>>n;
    int khoa[n];
    for(int i=0;i<n;i++){
        cin>>khoa[i];
    }
    for(int i=1;i<=n;i++){
        sort(khoa,khoa+i);
        for(int j=0;j<i;j++){
            cout<<khoa[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
