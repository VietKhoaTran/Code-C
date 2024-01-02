#include <iostream>

using namespace std;
long long gtln=0;
int p=0;

long long GTLN(long long k, int j){
    if(gtln<k){
        gtln=k;
        p=j;
    }
    return p;
}

int main()
{
    freopen("ELECTION.INP", "r", stdin);
    freopen("ELECTION.OUT", "w", stdout);
    int n,m;
    cin>>n>>m;
    long long a[n];
    int b[n];
    for(int i=1;i<=n;i++){
        b[i]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[j];
            GTLN(a[j],j);
        }
        b[p]++;
        gtln=0;
        p=0;
    }
    for(int i=1;i<=n;i++){
        GTLN(b[i],i);
    }
    cout<<p;
    return 0;
}
