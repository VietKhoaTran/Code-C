#include <iostream>

using namespace std;
int main()
{
    freopen("COLORING.INP", "r", stdin);
    freopen("COLORING.OUT", "w", stdout);
    int m;
    int n;
    cin>>m;
    cin>>n;
    int s5=0;
    int s3=0;
    int s2=0;
    int t=1;
    int i=1;
    while(i<=m){
        if((t*i)%5==0){
            s5++;
        }
        else if((t*i)%3==0){
            s3++;
        }
        else if((t*i)%2==0){
            s2++;
        }
        if(i==m&&t<n){
            i=1;
            t++;
        }
        else{
            i++;
        }
    }
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s5<<endl;
    cout<<m*n-s2-s3-s5<<endl;
    return 0;
}
