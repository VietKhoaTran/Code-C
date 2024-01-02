#include <iostream>

using namespace std;

int A,B,n;
int dem=0;
bool check(int x[], int m){
    if(x[]==A){
        dem++;
    }
    if(x==B&&dem=1){
        dem=0;
        return true;
    }
}
int main()
{
    int ans=0;
    cin>>A>>B>>n;
    for(int i=1;i<=n;i++){
        cin>>c>>m;
        int x[m+1];
        for(int j=1;j<=m;j++){
            cin>>x[j];
            if(check(x, m)==true){
                if(ans<c||ans==0){
                    ans=c;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}

