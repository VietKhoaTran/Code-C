#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    freopen("MAXFREQ.INP", "r", stdin);
    freopen("MAXFREQ.OUT", "w", stdout);
    int n;
    cin >>n;
    int khoa[n];
    int dem=1;
    int gtln=0;
    int k=0;
    for(int i=0;i<n;i++){
        cin>>khoa[i];
    }
    sort(khoa,khoa+n);
    for(int i=0;i<n;i++){
        if(khoa[i]==khoa[i+1]){
            dem++;
            if(dem>gtln){
                k=khoa[i];
                gtln=dem;
            }
            if(dem==gtln){
                if(k>khoa[i]){
                k=khoa[i];
                }
            }
        }

        else{
            dem=1;
        }
    }
    cout<<k;
    return 0;
}
