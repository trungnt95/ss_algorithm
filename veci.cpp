/* VECI - SS08*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char number_string[6];
    string number, res;
    getline(cin, number);
    int index = number.length()-1;
    strcpy(number_string, number.c_str());
    for (int i=number.length()-2; i>=0; --i)
        if(number[i]<number[index]){
            index=i;
            break;
        }
    for (int i=index+1; i<number.length()-1; ++i)
        for (int j=number.length()-1; j>i; --j)
            if(number[j]<number[j-1])swap(number_string[j], number_string[j-1]);

    for (int i=index+1; i<number.length(); ++i)
        if(number_string[i]>number_string[index]){
            swap(number_string[i], number_string[index]);
            break;
        }
    res=string(number_string);
    if(!res.compare(number)) cout<< 0<< endl;
    else cout<< res<< endl;
    return 0;
}
