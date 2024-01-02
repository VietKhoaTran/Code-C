#include <iostream>
#include <algorithm>
using namespace std;

struct MangSapxep {
    long long x;
    long long y;
}a[100];

bool compare (MangSapxep a, MangSapxep b){
    return(a.x<b.x || (a.x==b.x && a.y< b.y));
}

int main()
{
    freopen("BOXES.INP", "r", stdin);
    freopen("BOXES.OUT", "w", stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i].y>>a[i].x;
    }
    sort(a, a+n+1, compare);
    int i =1;
    long long tong=0;
    while(i<=n){
        if(a[i].x!=a[i+1].x){
            tong=tong + a[i].y;
        }
        i++;
    }
    cout<<tong;
    return 0;
}
