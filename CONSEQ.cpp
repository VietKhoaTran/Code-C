#include <iostream>

using namespace std;

int main()
{
    freopen("CONSEQ.INP", "r", stdin);
    freopen("CONSEQ.OUT", "w", stdout);
    long long w,m,k;
    cin>>w>>m>>k;
    w=w/k;
    long long a=m;
    int dem=0;
    long long p=1;
    while(a>0){
        a=a/10;
        dem++;
        p=p*10;
    }
    a=m;
    long long cost=0;
    long long len=0;
    long long ans=0;
    while(w>0){
        len=p-m;
        cost=len*dem;
        if(cost>w){
            break;
        }
        ans=ans+len;
        w=w-cost;
        dem++;
        m=p;
        p=p*10;
    }
    ans=ans+w/dem;
    cout<<ans;
}
