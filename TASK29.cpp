#include <iostream>

using namespace std;

int main()
{
    freopen("TASK29.INP","r",stdin);
    freopen("TASK29.OUT","w",stdout);
    long long n;
    cin>>n;
    long long GTNN=n%10;
    long long x=0;
    while(n>0){
        x=n%10;
        n=n/10;
        if(GTNN>n && n !=0){
            GTNN=n;
        }
    }
    cout<<GTNN;
    return 0;
}
