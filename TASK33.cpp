#include <iostream>

using namespace std;

int main()
{
    freopen("TASK33.INP", "r", stdin);
    freopen("TASK33.OUT", "w", stdout);
    long long n;
    cin>>n;
    int dem=0;
    int dem1=-1;
    int gtnn=9;
    while(n>0){
        dem1++;
        int x=n%10;
        if(gtnn>x && x>0){
            gtnn=x;
            dem=dem1;
        }
        n=n/10;
    }
    cout<<dem;


    return 0;
}
