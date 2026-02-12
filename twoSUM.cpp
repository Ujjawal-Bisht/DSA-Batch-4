// February 10, 2026 - Tuesday
#include<bits/stdc++.h>
using namespace std;


vector<int> twosum(vector<int> nums, int target){
    //  nums = [2,7,11,15], target = 9
    int n = nums.size() ;
    vector<int> ans = {0,0};
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(nums[i] + nums[j] == target){
                ans[0] = i; ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums;
    int n, x, target ;
    cout << "How many elements you want to enter:- ";
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> x;
        nums.push_back(x);
    }

    cout << "Enter target :- ";
    cin >> target ;

    vector<int> ans = twosum(nums, target);
    cout << "Output is " << ans[0] << "," << ans[1] ;

    // cout << "Current array is: - " ;
    // for(int i: nums){
    //     cout << i << " " ;
    // }
    // cout << endl ;
}