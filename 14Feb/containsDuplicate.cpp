// February 14, 2026 - Saturday

#include<bits/stdc++.h>
using namespace std;

//using unordered_map
bool containsDuplicate1(vector<int>& nums) {
    unordered_map<int, int> mp ;
    for(int i=0 ; i<nums.size() ; i++){
        if(mp.find(nums[i]) == mp.end()){
            mp[nums[i]] ++ ;
        }else{
            return true ;
        }
    }
    return false ;
    }

// using unordered_set
bool containsDuplicate2(vector<int>& nums) {
    int n = nums.size() ;
    unordered_set<int> st (nums.begin(), nums.end()) ;
    int n2 = st.size() ;
    return !(n == n2) ;
}


int main(){
    vector<int> nums = {1,2,3,1} ;
    cout << containsDuplicate1(nums) ;
    cout << containsDuplicate2(nums) ;
}