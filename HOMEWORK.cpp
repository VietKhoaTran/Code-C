#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[m];
    int c[m];
    for(int i=0;i<2*m;i++){
        if(i%2==0){
            cin>>c[i/2];
        }
        else{
            cin>>b[(i-1)/2];
        }
    }
    sort(c,c+m);
    sort(b,b+m);
    int t=0;
    for(int i=0;i<m;i++){

    }
    return 0;
}
