#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    int s1=0;
    int s2=0;
    int dem=0;
    int khoa=0;
    if(n>10){
    for(int a=11;a<=n;a++){
        dem=0;
        khoa=a;
        s1=0;
        s2=0;
        while(khoa>0){
            dem++;
            khoa=khoa/10;
        }
        khoa=a;
        if(dem%2==0){
            for(int i=1;i<=dem;i++){
                if(i<=dem/2){
                    s1=s1+khoa%10;
                }else{
                    s2=s2+khoa%10;
                }
                khoa=khoa/10;
            }
            if(s1==s2){
                cout<<a<<"\n";
            }
        }
    }
    }else{
        cout<<-1;

        }

    return 0;
}
