/*FCTRL - spoj*/
#include <iostream>
#include <cstdio>

using namespace std;
int main() {
    freopen("input.txt", "r", stdin);
    int T, res=0, base=5;
    unsigned int N;
    cin>> T;
    while(--T>=0){
        cin>> N;
        while(base<=N){
            res+=N/base;
            base*=5;
        }
        cout<< res<< endl;
        res=0; base=5;
    }
    return 0;
}
