#include <iostream>

using namespace std;

int main()
{
    freopen("BRACKETS.INP", "r", stdin);
    freopen("BRACKETS.OUT", "w", stdout);
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    a[0]=0;
    for(int i=1;i<=n;i++){
        if(a[i]>=a[i-1]){
            for(int j=1;j<=(a[i]+2)/2;j++){
                cout<<"(";
            }
            for(int j=1;j<=(a[i]+2)/2;j++){
                cout<<")";
            }
        }
    }
    return 0;
}
