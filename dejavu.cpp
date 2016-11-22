#include <iostream>
#include <cstdio>
#define SIZE 100000
using namespace std;

typedef struct coord{
    int x, y;
} coord;
int main() {
    int n, x, y;
    coord listPoint[SIZE+1];
    int coordX[SIZE+1], coordY[SIZE+1];
    freopen("dejavu.inp", "r", stdin);
    freopen("dejavu.out", "w", stdout);
    while(scanf("%d", &n)==1){
        for (int i=0; i<n; ++i){
            cin>> x>> y;
            listPoint[i].x=x;
            listPoint[i].y=y;
            ++coordX[x]; ++coordY[y];
        }
        int res=0;
        for (int i=0; i<n; ++i)
            res+=(coordX[listPoint[i].x]-1)*(coordY[listPoint[i].y]-1);
        cout<< res<< endl;
        for (int i=0; i<n; ++i){
            coordX[listPoint[i].x]=0;
            coordY[listPoint[i].y]=0;
        }
    }
    return 0;
}

