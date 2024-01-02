#include <iostream>

using namespace std;

int main()
{   freopen("TASK54.INP","r",stdin);
    freopen("TASK54.OUT","w",stdout);
    int n;
    cin >>n;
    for(int i =n; i>=1; i--){
        for( int k=1;k<=i;k++){
        cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
