#include <iostream>
#include <algorithm>
using namespace std;

struct MangSapxep {
    long long x;
    long long y;
}d[100000],p[100000];

bool compare (MangSapxep a, MangSapxep b){
    return(a.x>b.x || (a.x==b.x && a.y> b.y));
}

long long t=0;
long long q=0;
void Tinh(long long k, long long b, long long n, long long m){
    long long s1[n];
    long long s2[m];
    s1[0]=0;
    s2[0]=0;
    int j=0;
    long long S=0;
    long long Ans=0;
    for(int i=1;i<=n;i++){
        s1[i]=s1[i-1]+d[i].x;
    }
    for(int i=1;i<=m;i++){
        s2[i]=s2[i-1]+p[i].x;
    }
    for(int i=0;i<=min(n,k);i++){
        j=min(m,k-i);
        S=(b+s1[i])*(100+s2[j]);
        if(Ans<S){
            Ans=S;
            t=i;
            q=j;
        }
    }
}

int main()
{
    freopen("VLTK.INP", "r", stdin);
    freopen("VLTK.OUT", "w", stdout);
    long long b,k,n,m;
    cin>>b>>k>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>d[i].x;
        d[i].y=i;
    }
    for(int i=1;i<=m;i++){
        cin>>p[i].x;
        p[i].y=i;
    }
    sort(d+1,d+n+1,compare);
    sort(p+1,p+m+1,compare);
    Tinh(k,b,n,m);
    cout<<t<<" "<<k-t<<endl;;
    for(int i=1;i<=t;i++){
        cout<<d[i].y<<" ";
    }
    cout<<endl;
    for(int i=1;i<=q;i++){
        cout<<p[i].y<<" ";
    }
}
