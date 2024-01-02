#include <iostream>

using namespace std;

int main()
{
    freopen("TASK64.INP","r",stdin);
    freopen("TASK64.OUT","w",stdout);
    int n;
    cin>>n;
    int khoa[n+1];
    int x=0;
    for(int i=1;i<=n;i++){
        cin>>khoa[i];
    }
    x=khoa[1];
    for(int i =2;i<=n;i++){
        if(x<khoa[i]){
            x=khoa[i];
        }
    }
    cout<<x;
    return 0;
}
