#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
    freopen("tajna.inp", "r", stdin);
    freopen("tajna.out", "w", stdout);
    string msg;
    while(getline(cin, msg), msg!=""){
        int lengthMsg = msg.length();
        int col = lengthMsg;
        int row = 1;
        for (int i=2; i<=sqrt(lengthMsg); ++i)
            if(!(lengthMsg%i)&&(i<=lengthMsg/i)){
                row = i; col=lengthMsg/i;
            }
        for (int i=0; i<row; ++i){
            int pos=i;
            while(pos<lengthMsg){
                cout<< msg[pos];
                pos+=row;
            }
        }
        cout<< endl;
    }
    return 0;
}
