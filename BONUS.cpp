#include <iostream>
#include <algorithm>
using namespace std;
bool compare(long long a, long long b){
    return(a!=b);
}
int main()
{
    freopen("BONUS.INP", "r", stdin);
    freopen("BONUS.OUT", "w", stdout);
    int n;
    cin>>n;
    long long c[n];
    long long tong=0;
    int dem=0;
    for(int i=0;i<n;i++){
        cin>>c[i];
        tong=tong+c[i];
    }
    sort(c,c+n);
    for(int i=1;i<n;i++){
        if(compare(c[i-1],c[i])){
            dem++;
            c[dem]=c[i];
        }
        else{
            c[dem]=c[dem]+c[i-1];
        }
    }
    sort(c, c+dem+1);
    cout<<tong-c[0];
    return 0;
}

