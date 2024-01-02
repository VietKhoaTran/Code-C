#include <iostream>
#include <algorithm>
using namespace std;

struct MangSapxep {
    long long x;
    long long y;
}a[100000];

bool compare (MangSapxep a, MangSapxep b){
    return(a.x<b.x || (a.x==b.x && a.y< b.y));
}
int main()
{
    freopen("OLYMPIC.INP", "r", stdin);
    freopen("OLYMPIC.OUT", "w", stdout);
    long long c,n;
    cin>>n>>c;
    int dem=0;
    for(int i=1;i<=n;i++){
        cin>>a[i].x>>a[i].y;
    }
    sort(a, a+n+1, compare);
    int i=1;
    while(i<=n && c>=a[i].x){
        dem++;
        c=c+a[i].y;
        i++;
    }
    cout<<dem;
    return 0;
}
