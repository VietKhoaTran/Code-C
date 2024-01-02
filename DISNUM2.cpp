#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("DISNUM.INP","r",stdin);
    freopen("DISNUM.OUT","w",stdout);
    int n;
    cin>>n;
    int khoa[n];
    int dem=1;
    for(int i=0;i <n;i++){
        cin>>khoa[i];
    }
    sort(khoa,khoa+n);
    int k=khoa[0];
    for(int i=1;i<n;i++){
        if(k<khoa[i]){
            k=khoa[i];
            dem++;
        }

    }
    cout<<dem;
    return 0;
}
