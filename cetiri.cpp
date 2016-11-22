#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a[3];
    freopen("cetiri.inp", "r", stdin);
    freopen("cetiri.out", "w", stdout);

    for (int i=0; i<3; ++i)
        cin>> a[i];
    for (int i=0; i<3; ++i)
        for (int j=2; j>i; --j)
            if (a[j]<a[j-1]){
                int tmp = a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            }
    int subtract1 = a[1]-a[0];
    int subtract2 = a[2]-a[1];
    if (subtract1==subtract2) cout<< a[2]+subtract1;
    else if (subtract1>subtract2)cout<< a[1]-subtract2;
    else if (subtract2>subtract1) cout<< a[1]+subtract1;
    return 0;
}
