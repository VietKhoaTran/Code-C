#include <iostream>

using namespace std;

int main()
{
    freopen("TASK39.INP","r",stdin);
    freopen("TASK39.OUT","w",stdout);
    int n;
    cin>>n;
    int s=0;
    for(int i =2;i<=n;i=i+2){
        if(n%i==0){
            s=s+i;
        }
    }
    cout<<s;
    return 0;
}
