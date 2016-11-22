/* Spoj: CTNBULLS */
#include <iostream>
#define base 2111992
using namespace std;
int main() {
    int n, k, f[100001];
    cin>> n>> k;
    for (int i=1; i<k+2; ++i)
        f[i]=(i+1)%base;
    for (int i=k+2; i<=n; ++i)
        f[i]=(f[i-k-1]%base + f[i-1]%base)%base;
    cout<< f[n];
    return 0;
}
