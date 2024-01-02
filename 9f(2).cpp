#include <iostream>
#include <cmath>

using namespace std;
int doi_xung(int so)
{
    int sums = 0;
    while (so > 0)
    {
        int temp = so % 10;
        so /= 10;
        sums = (sums * 10) + temp;
    }
    return(sums);
}

int main()
{
    int n;
    cin >> n;
    if(doi_xung(n) == n) cout << "DOI XUNG!";
    else cout << "ko";
    return 0;
}
