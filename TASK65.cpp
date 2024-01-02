#include <iostream>

using namespace std;

int main()
{
    freopen("TASK65.INP","r",stdin);
    freopen("TASK65.OUT","w",stdout);
    int n;
    cin>>n;
    int khoa[n+1];
    int x=0;
    int dem=0;
    int k=0;
    for(int i=1;i<=n;i++){
        cin>>khoa[i];
        int k=khoa[i];
        if(k%2==0){
            x=k;
            dem++;
        }
    }
    if(dem>0){
    for(int i =1;i<=n;i++){
        int k=khoa[i];
        if(x<k &&k%2==0){
            x=k;
        }
    }

    cout<<x;
    }
    else{
        cout<<-1;
    }
    return 0;
}
