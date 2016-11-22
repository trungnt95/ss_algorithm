/*BWPOINTS - spoj*/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdio>
using namespace std;
bool compare_pair(pair<int,int>firstPair, pair<int,int>secondPair){
    return (firstPair.first<secondPair.first);
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, point,k=0;
    vector<pair<int,int> > listPoints;
    cin>> n;
    for(int i=0; i<2; ++i)
        for(int j=0; j<n; ++j){
            cin>> point;
            listPoints.push_back(make_pair(point,i));
        }
    sort(listPoints.begin(), listPoints.end(), compare_pair);
    for(int i=0; i<listPoints.size()-1; ++i){
        if(listPoints[i].second!=listPoints[i+1].second){
            ++i;
            ++k;
        }
    }
    cout<< k<< endl;
    return 0;
}
