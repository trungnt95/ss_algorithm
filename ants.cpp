/*UVA - 10174*/
#include <iostream>
#include <vector>
#include <algorithm>
//#include <cstdio>
using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    size_t T;
    unsigned int lenOfStick, numberOfAnts, pos, minTime=0, maxTime=0, middleOfStick;
    vector<unsigned int> antsPos;

    cin>> T;
    while(T){
        --T;
        cin>> lenOfStick>> numberOfAnts;
        middleOfStick=lenOfStick/2;
        while(numberOfAnts){
            cin>> pos;
            antsPos.push_back(pos);
            --numberOfAnts;
        }

        sort(antsPos.begin(), antsPos.end());
        for(size_t i=0; i<antsPos.size(); ++i){
            if(antsPos[i]<=middleOfStick){
                minTime=max(antsPos[i],minTime);
                maxTime=max(lenOfStick-antsPos[i],maxTime);
            }else{
                minTime=max(lenOfStick-antsPos[i],minTime);
                maxTime=max(antsPos[i],maxTime);
            }
        }
        cout<< minTime<< " "<< maxTime<< endl;
        minTime=0; maxTime=0;
        antsPos.clear();
    }
    return 0;
}
