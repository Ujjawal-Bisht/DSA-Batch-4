// February 13, 2026 - Friday
#include<bits/stdc++.h>
using namespace std;


vector<int> twosum(vector<int> nums, int target){
    //  nums = [2,7,11,15], target = 9
    unordered_map<int, int> mp ;
    vector<int> ans(2);
    for(int i=0 ; i<nums.size() ; i++){
        if((mp.find(target - nums[i])) == mp.end()){
            mp[nums[i]] = i ;
        }else{
            ans[0] = i;
            ans[1] = mp[target - nums[i]];
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