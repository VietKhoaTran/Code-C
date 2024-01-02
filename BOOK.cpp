#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("BOOK.INP", "r", stdin);
    freopen("BOOK.OUT", "w", stdout);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long s=0;
    int t=0;
    for(int i=n-1;i>=0;i--){
        t++;
        s=s+a[i];
        if(t%3==0){
        s=s-a[i];
        }
    }
    cout<<s;
    return 0;
}
