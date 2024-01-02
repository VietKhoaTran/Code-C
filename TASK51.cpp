#include <iostream>

using namespace std;

int main()
{   freopen("TASK51.INP","r",stdin);
    freopen("TASK51.OUT","w",stdout);
    int n;
    cin >>n;
    for(int i =1; i<=n; i++){
        for( int k=1;k<=i;k++){
        cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
