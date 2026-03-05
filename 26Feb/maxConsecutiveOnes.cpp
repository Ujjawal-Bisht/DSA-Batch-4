#include<bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int n = nums.size(), i=0, j=0 ;
    int cS=0, mS=0;
    for(int x: nums) cS+=x;
    if(n-cS < k) return n;

    cS = 0;
    while(j<n){
        cS += nums[j] ;
        if(j-i+1 - cS == k) mS = max(mS, j-i+1) ;
        else if(j-i+1 - cS > k){
           cS -= nums[i] ;
            i++ ;
        }
        j++ ;
    }
    return mS ;
}

int main(){
    // nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0} ;
    int k1 = 2;

    cout << "Maximum One's possible - " << longestOnes(nums, k1) ;
}