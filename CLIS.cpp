#include <iostream>

using namespace std;
long long q=0;
int max_s=0;
void SOLVE(long long a[], int n){
    int p=1;
    int s=1;
    for(int i=1;i<=2*n-1;i++){
        if(a[i]<=a[i+1]){
            s++;
        }
        else{
            if(max_s<s){
                max_s=s;
                q=p+max_s-1;
            }
            p=i+1;
            s=1;
        }
    }
    if(max_s==0){
        max_s=n;
        q=n;
    }
}
int main()
{

    freopen("CLIS.INP", "r", stdin);
    freopen("CLIS.OUT", "w", stdout);
    int n;
    cin>>n;
    long long a[2*n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n+1;i<=2*n;i++){
        a[i]=a[i-n];
    }
    SOLVE(a, n);
    cout<<q-max_s+1<<" "<<(q-1)%n +1;
    return 0;
}
