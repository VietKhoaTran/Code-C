#include <iostream>
#include <algorithm>
using namespace std;

struct Mang {
    long long x;
    long long y;
}e[1000000],f[1000000];

long long Search(long long h, long long L){
    int lo=1, h1=h;
    while(lo<=h1){
        long long m=(lo+h1)/2;
        if(L==f[m].x){
            return f[m].y;
        }
        else if(L<f[m].x){
            h1=m-1;
        }
        else{
            lo=m+1;
        }
    }
    return 0;
}
int main()
{
    freopen("TERA.INP", "r", stdin);
    freopen("TERA.OUT", "w", stdout);
    int n;
    long long L;
    long long dem=0;
    cin>>n>>L;
    long long a[n],b[n],c[n],d[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    for(int i=1;i<=n;i++){
        cin>>d[i];
    }
    long long x[n*n],y[n*n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            x[j+n*(i-1)]=a[i]+b[j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            y[j+n*(i-1)]=c[i]+d[j];
        }
    }
    sort(x+1,x+n*n+1);
    sort(y+1,y+n*n+1);
    x[0]=0;
    y[0]=0;
    long long g=1;
    long long h=1;
    for(int i=1;i<=n*n;i++){
        if(y[i]!=y[i-1]&&i!=1){
            h++;
        }
        if(x[i]!=x[i-1]&&i!=1){
            g++;
        }
        e[g].x=x[i];
        e[g].y++;
        f[h].x=y[i];
        f[h].y++;
    }
    for(int i=1;i<=g;i++){
       dem=dem+(Search(h, L-e[i].x))*e[i].y;
    }
    cout<<dem;
    return 0;
}
