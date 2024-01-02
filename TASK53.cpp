#include <iostream>

using namespace std;

int main(){

    freopen("TASK53.INP","r",stdin);
    freopen("TASK53.OUT","w",stdout);
    int n;
    cin>>n;
    int dem =0;
    for(int i =n; i>=1; i--){
        dem++;
        for( int k=1;k<=i;k++){
        cout<<"* ";
        }
        cout<<"\n";
        for(int i=1;i<=dem;i++){
        cout<<"  ";
        }
    }
    return 0;
}
