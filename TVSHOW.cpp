#include <iostream>
#include <algorithm>
using namespace std;

struct Mang{
    long long x;
    long long y;
}a[50000];

bool compare (Mang a, Mang b){
    return(a.x<b.x || (a.x==b.x && a.y<b.y));
}
int main()
{
    freopen("TVSHOW.INP", "r", stdin);
    freopen("TVSHOW.OUT", "w", stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1, a+n+1, compare);
    int i=1;
    int t=1;
    int dem=0;
    while(i<=n-1){
        if(a[i].y<=a[i+t].x || i+t==n+1){
            i++;
            t=1;
        }
        else{
            dem++;
            t++;
        }
    }
    cout<<dem;
    return 0;
}
