#include <iostream>

using namespace std;

int main()
{
    freopen("TASK63.INP","r",stdin);
    freopen("TASK63.OUT","w",stdout);
    int khoa[3];
    int n=0;
    int x=0;
    int dem=0;
    for(int i=1; i<=2;i++){
        cin >>khoa[i];

    }
    n=khoa[1];
    x=khoa[2];
    int viet[n];
    for(int i=1;i<=n;i++){
        cin>>viet[i];
        if(viet[i]==x){
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
