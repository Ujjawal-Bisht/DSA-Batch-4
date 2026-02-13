// February 11, 2026 - Wednesday
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>prices) {
    // prices = [7,1,5,3,6,4]
    int cP = prices[0], mP = 0;
    for(int i=0 ; i<prices.size() ; i++){
        cP = min(cP, prices[i]) ;
        mP = max(mP, prices[i]-cP) ;
    }
    return mP ;
}

int main(){
    vector<int> prices;
    int size, elm;
    cout << "Enter size:- ";
    cin >> size;

    cout<< "Enter elements:- " ;
    for(int i=0 ; i<size ; i++){
        cin >> elm;
        prices.push_back(elm) ;
    }

    int profit = maxProfit(prices);
    cout << "Max profit we can generate is: - " << profit ;

    // cout << "Main array is - " ; 
    // for(int i: prices){
    //     cout << i << " " ;
    // }

    return 0;
}