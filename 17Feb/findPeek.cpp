// February 17, 2026 - Tuesday
// Homework Question 2

#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;
    int mid = end;

    if(nums.size() == 1) return 0;

    while(start<end){
        mid = start + (end - start)/2 ;
        if(nums[mid] < nums[mid+1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = end;
    }
    return mid;
}

int main(){
    vector<int> nums = {1,2,3,1}; 
    cout << findPeakElement(nums) ;
}