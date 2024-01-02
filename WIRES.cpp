#include <iostream>

using namespace std;
long long l[100001], n, k;
long long check(long long L){
    long long cnt=0;
    for(int i=1;i<=n;i++){
        cnt=cnt+l[i]/L;
    }
    return cnt;
}
long long Solve (long long S){
    long long lo=1, ans=0;
    long long hi=S/k;
    while(lo<=hi){
        long long L=(lo+hi)/2;
        if(check(L)>=k){
            lo=L+1;
            ans=L;
        }
        else{
            hi=L-1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("WIRES.INP", "r", stdin);
    freopen("WIRES.OUT", "w", stdout);
    while(cin>>n>>k){
        long long S=0;
        for(int i=1;i<=n;i++){
        cin>>l[i];
        S=S+l[i];
        }
        cout<<Solve(S)<<"\n";
    }
}
