#include <iostream>

using namespace std;
int sovach[10]={6,2,5,5,4,5,6,3,7,6};
void max_num(long long n, long long k, long long maxnumb[]){
    long long max_k=k;
    for(int i=1;i<=n;i++){
        for(int j=9;j>=0;j--){
            if((max_k-sovach[j])>=2*(n-i) && (max_k-sovach[j])<=7*(n-i)){
                max_k=max_k-sovach[j];
                maxnumb[i]=j;
                j=-1;
            }
        }
    }
}

void min_num(long long n, long long k, long long minnumb[]){
    long long min_k=k;
    for(int i=1;i<=n;i++){
        for(int j=(i==1);j<=9;j++){
            if((min_k-sovach[j])>=2*(n-i) && (min_k-sovach[j])<=7*(n-i)){
                min_k=min_k-sovach[j];
                minnumb[i]=j;
                j=10;
            }
        }
    }
}

int main()
{
    freopen("LED.INP", "r", stdin);
    freopen("LED.OUT", "w", stdout);
    long long n, k;
    cin>>n>>k;
    if(k<2*n || k>7*n){
        cout<<"NO SOLUTION";
    }
    else{
        long long maxnumb[n+1];
        long long minnumb[n+1];
        max_num(n, k, maxnumb);
        min_num(n, k, minnumb);
        for(int i=1;i<=n;i++){
            cout<<minnumb[i];
        }
        cout<<endl;
        for(int i=1;i<=n;i++){
            cout<<maxnumb[i];
        }
    }
    return 0;
}
