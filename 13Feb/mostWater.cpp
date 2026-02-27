// February 13, 2026 - Friday
#include<bits/stdc++.h>
using namespace std;

int maxWater(vector<int>& height){
    int n = height.size();
    int i=0, j=n-1 ;
    int mArea = 0;
    while(i<j){
        int ar = 0;
        ar = (j-i) * (min(height[j], height[i])) ;
        mArea = max(mArea, ar) ;
        if(height[i] > height[j]) j--;
        else i++ ;
    }
    return mArea ;
}

int main(){
    // vector<int> arr = {1,8,6,2,5,4,8,3,7};
    vector<int> arr = {1,1};
    cout << "Maximum water stored between the walls " << maxWater(arr) ;
}