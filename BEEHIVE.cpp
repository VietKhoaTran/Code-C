#include <iostream>

using namespace std;

int main()
{
    freopen("BEEHIVE.INP", "r", stdin);
    freopen("BEEHIVE.OUT", "w", stdout);
    int n;
    cin>>n;
    int s=1;
    for(int i=1;i<=n-1;i++){
        s=s+i*6;
    }
    cout<<s;
    return 0;
}
