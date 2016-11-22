/* VAUVAU - SS08 */
#include <iostream>
#include <string>
using namespace std;

int main(){
    int dogTime[4]; // Time dog attack and not attack correspond to first dog and second dog respectively
    int pmg[3]; // Time Arrived: Postman, Milkman, Garbageman
    string res[]={"None", "One", "Both"};

    for(int i=0; i<4; ++i)
        cin>> dogTime[i];
    for(int i=0; i<3; ++i)
        cin>> pmg[i];
    for(int i=0; i<3; ++i){
        int index=0;
        for(int j=0; j<4; j+=2){
            int time = pmg[i]%(dogTime[j]+dogTime[j+1]);
            index+=(time>0&&time<=dogTime[j])?1:0;
        }
        cout<< res[index]<< endl;
    }
    return 0;
}
