#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int khoa[n];
    for(int i =0;i<n;i++){
        cin>>khoa[i];
    }
    int k=0;
    int gtln=0;
    for(int i=0;i<n-1;i++){
        if(khoa[i]<=khoa[i+1]){
            k=k+(khoa[i+1]-khoa[i]);
            if(gtln<k){
                gtln=k;
            }
        }
        else{
            k=0;
        }

    }
    cout<<gtln;
    return 0;
}
