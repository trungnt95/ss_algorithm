/*UVA - 11567*/
#include <iostream>
#include <cstdio>
using namespace std;

int calcNumberOfSteps(unsigned int n) {
    int number=0;
    while(n!=0){
        if(n%2!=0)
            n=(((n-1)/2)%2==0||n-1==2)?n-1:n+1;
        else n/=2;
        ++number;
    }
    return number;
}
int main() {
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    unsigned int n;
    while(scanf("%d", &n)==1){
        cout<< calcNumberOfSteps(n)<< endl;
    }
    return 0;
}
