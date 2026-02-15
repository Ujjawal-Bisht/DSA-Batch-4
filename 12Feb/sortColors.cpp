// February 12, 2026 - Thursday
// Homework question 2

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums){
    // nums = [2,0,2,1,1,0]
    int n = nums.size();
    map<int, int> mp ;
    for(int i=0 ; i<n ; i++){
        mp[nums[i]] ++ ;
    }
    int index = 0;
    for (auto& pair : mp) {
        int num = pair.first;
        int count = pair.second;
        for (int i = 0; i < count; i++) {
            nums[index++] = num;
        }
    }
}


int main(){
    vector<int> nums ;
    int size, elm ;

    cout << "Enter size:- "; 
    cin >> size ;

    cout << "Enter elements:- ";
    for(int i=0 ; i<size ; i++){
        cin >> elm;
        nums.push_back(elm);
    }

    sortColors(nums) ;

    cout << "After sorting array :- " ;
    for(int j=0 ; j<size ; j++){
        cout << nums[j] << " ";
    }
    return 0;
}