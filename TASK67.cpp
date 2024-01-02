#include <iostream>

using namespace std;

int main()
{
    freopen("TASK67.INP", "r", stdin);
    freopen("TASK67.OUT", "w", stdout);
    int khoa[3];
    int n=0;
    int x=0;
    int dem=0;
    for(int i=1; i<=2;i++){
        cin >>khoa[i];

    }
    n=khoa[1];
    x=khoa[2];
    int k=0;
    int viet[n];
    for(int i=1;i<=n;i++){
        cin>>viet[i];
        k=viet[i];
        if(x%k==0){
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
