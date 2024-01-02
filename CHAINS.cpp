#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==(n-2)){
            cout<<n-2;
            return 0;
        }
    }
    cout<<n-1;
    return 0;
}
