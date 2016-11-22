/* uva 10954*/
#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>

using namespace std;

struct comp{
    bool operator()(int a, int b){
        return a>b;
    }
};
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    priority_queue <int, vector<int>, comp> myQueue;
    int T, n, minimalCost=0;
    while(cin>> T, T){
        while(T){
            cin>> n;
            myQueue.push(n);
            --T;
        }

        while(myQueue.size()>=2){
            int first=myQueue.top();
            myQueue.pop();
            int second=myQueue.top();
            myQueue.pop();
            minimalCost+=(first+second);
            myQueue.push(first+second);
        }
        cout<< minimalCost<< endl;
        minimalCost=0;
        while(!myQueue.empty())myQueue.pop();
    }
    return 0;
}
