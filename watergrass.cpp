/*UVA10382*/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
//#include <cstdio>
#include <cmath>
using namespace std;

bool compare_pair(pair<int,int>firstPair, pair<int,int>secondPair){
    return (firstPair.first<secondPair.first);
}
int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    double n, l, w;
    double coord, radius;
    vector<pair<double,double> > nodeWaters;
    while(cin>> n>> l>> w){
        nodeWaters.clear();
        for(int i=0; i<n; ++i){
            cin>> coord>> radius;
            double range = sqrt(pow(radius,2)-pow(w/2.0, 2));
            nodeWaters.push_back(make_pair(coord-range,coord+range)); // cap nhat gia tri vung phu toi thieu cua moi voi nuoc len khu vuon
        }
        sort(nodeWaters.begin(), nodeWaters.end(), compare_pair);            // sap xep gia tri cua cac vung bao phu theo thu tu gia tri bat dau tang dan
        int index=0, res=0;
        double curStart=0;
        double finish=0;
        while(finish<l){
            double newStart=curStart;
            int tmpPos=0;
            for(; index<nodeWaters.size(); ++index){
                if(nodeWaters[index].first>curStart)        // Kiem tra xem voi nuoc tiep theo co bao phu len voi nuoc phia truoc hay khong
                    break;                                  // Neu khong bao phu thi khong the nao tuoi duoc het ca khu vuon, nen thoat vong lap luon
                if(nodeWaters[index].second>=newStart){     // Truong hop khi ma voi nuoc phia sau bao phu mot phan khu vuon cung giao voi voi nuoc phia truoc
                    newStart=nodeWaters[index].second;      // cap nhat gia tri diem bat dau tiep theo la diem ket thuc cua voi nuoc vua duoc chon, cap nhat gia tri lon nhat co the
                    tmpPos=index+1;
                }
            }
            if(!tmpPos)break;                               // Khi khong the chon them duoc voi nuoc nao chong lan cung voi nuoc hien tai thi thoat khoi vong lap
            ++res;                                          // cap nhat so luong voi nuoc sau moi vong lap
            curStart=newStart; finish=newStart;             // cap nhat lai gia tri moi cho do dai khu vuon da duoc tuoi, diem bat dau cua diem co voi nuoc duoc chon tiep theo
        }
        if(finish<l)cout<< -1<< endl;                       // truong hop chieu dai khu vuon da duoc tuoi finish < l (l la chieu dai khu vuon), thi in ra -1
        else cout<< res<< endl;                             // neu khong thi in ra so luong voi nuoc can thiet de tuoi toan bo khu vuon
    }

    return 0;
}
