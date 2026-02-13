// February 12, 2026 - Thursday
// Homework question 1
#include<bits/stdc++.h>
using namespace std;

int maxAres(vector<int>heights) {
    int n =heights.size() ;
    int i=0 , j=n-1;
    int area = 0, mAr = 0;
    while(i<j){
        area = max(area, (j-i) * min(heights[i], heights[j])) ;
        mAr = max(mAr, area) ;
        if(heights[i] <= heights[j]) i++ ;
        else j-- ;
    }
    return mAr;
}

int main(){
    vector<int> heights = {8,7,2,1} ;
    cout << maxAres(heights) ;
}