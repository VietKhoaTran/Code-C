#include <iostream>

using namespace std;

int main()
{
    freopen("TASK32.INP","r",stdin);
    freopen("TASK32.OUT","w",stdout);
    int n;
    cin>>n;
    int gtnn=9;
    int dem=0;
    while(n>0){
        int x=n%10;
        if(gtnn>x && x%2==1){
            gtnn=x;
            dem++;
        }
        n=n/10;
    }
    if(dem==0){
        cout<<-1;
    }
    else{
        cout<<gtnn;
    }
    return 0;
}
