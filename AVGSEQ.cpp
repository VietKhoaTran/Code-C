#include <iostream>

using namespace std;
long long s=0;
long long solve(long long t, long long i){
    t=t*(i+1)-s;
    s=s+t;
    return t;
}
int main()
{
    freopen("AVGSEQ.INP", "r", stdin);
    freopen("AVGSEQ.OUT", "w", stdout);
    int n;
    cin>>n;
    long long b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cout<<solve(b[i], i)<<" ";
    }
    return 0;
}
