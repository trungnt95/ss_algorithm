/*AUCTION - spoj*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n, m;
    unsigned long price;
    vector<unsigned long> prices;
    cin>> n>> m;
    for(int i=0; i<m; ++i){
        cin>> price;
        prices.push_back(price);
    }
    sort(prices.begin(), prices.end());
    //m=(m<=n)?m:n;
    int numberWisk=0, index;
    price=0;
    int lowerBound;
    if(m<=n){
        lowerBound=m;
    }else lowerBound=n;
    for(int i=prices.size()-1; i>=prices.size()-lowerBound; --i){
        ++numberWisk;
        if(prices[i]*numberWisk>=price){
            price=prices[i]*numberWisk;
            index=i;
        }
    }
    cout<< prices[index]<< " "<< price<< endl;
    return 0;
}
