#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main() {
    string arr[] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    string binaryString;

    freopen("oktalni.inp", "r", stdin);
    freopen("oktalni.out", "w", stdout);
    while(getline(cin, binaryString), binaryString!=""){
        int length = binaryString.length();
        while(length%3!=0){
            binaryString.insert(0, "0");
            ++length;
        }
        for (int i=0; i<=length-3; i+=3){
            string substring = binaryString.substr(i, 3);
            for (int j=0; j<8; ++j)
                if (!substring.compare(arr[j])){
                    cout<< j; break;
                }
        }
        cout<< endl;
    }
    return 0;
}
