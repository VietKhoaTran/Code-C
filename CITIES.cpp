#include <iostream>

using namespace std;
int solve(int a, int k, int max_y, int min_y, int i){
        if(a[i]<min_y){
            min_y=a[i];
        }
        if(a[i]>max_y){
            max_y=a[i];
        }
    return max_y-min_y;
}
int main()
{
    int t;
    cin>>t;
    int min_y=a[2];
    int max_y=0;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int k=2*n+1;
        int a[k];
        for(int j=2;j<=n;j=j+2){
            solve(n);
        }
        cout<<solve(a);
    }
    return 0;
}
