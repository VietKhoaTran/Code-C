#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int khoa[n+12];
    int dem=0;
    for(int i=1;i <=n;i++){
        cin>>khoa[i];
    }
    int tg;
    for(int i =0;i<= n-1;i++){
        for(int j =i+1;j<=n;j++){
            if(khoa[i]>khoa[j]){
                tg=khoa[i];
                khoa[i]=khoa[j];
                khoa[j]=tg;
            }
        }
    }
    for(int i =0;i<=n;i++){
        cout<<khoa[i]<<" ";
    }
    return 0;
}
