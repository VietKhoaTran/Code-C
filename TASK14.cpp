#include <iostream>

using namespace std;

int main()
{
    freopen("TASK14.INP","r",stdin);
    freopen("TASK14.OUT","w",stdout);
    int n;
    cin>>n;
    int a=n;
    int k=0;
    int x=0;
    while(a!=0){
        x=a%10;
        k=k+x;
        a=a/100;
    }
    if(k>0){
        cout<<k;
    }
    else{
        cout<<-k;
    }
    return 0;
}
