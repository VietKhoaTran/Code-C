#include <iostream>
#include <algorithm>
using namespace std;

bool compare (long long a, long long b, long long d){
    return((a+b)<=d);
}
int main()
{
    freopen("TRIP.INP", "r", stdin);
    freopen("TRIP.OUT", "w", stdout);
    int n,d;
    while(cin>>n>>d){
        int dem=0;
        long long m[n];
        for(int i=0;i<n;i++){
            cin>>m[i];
        }
        sort(m, m+n);
        int i=0;
        int j=n-1;
        while(i<=j){
            if(compare(m[i],m[j],d)){
                i++;
                j--;
            }
            else{
                j--;
            }
            dem++;
        }
        cout<<dem<<endl;
    }
    return 0;
}
