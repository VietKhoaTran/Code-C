#include <iostream>

using namespace std;

long long Tong (long long sum, long long a, long long b, long long c, long long d){
    long long S=0;
    if(b==c){
        S=sum-a-b-d + a*b*d;
    }
    else{
        S=sum-a-b-c-d + a*b +c*d;
    }
    return S;
}
int main()
{
    freopen("MAEXP.INP", "r", stdin);
    freopen("MAEXP.OUT", "w", stdout);
    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    long long ans=0;
    for(int i=1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ans=max(Tong(sum, a[i-1], a[i], a[j-1], a[j]),ans);
        }
    }
    cout<<ans;
    return 0;
}
