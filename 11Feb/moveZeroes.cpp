// February 11, 2026 - Wednesday
#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
    int ctr = 0;
    for(int i=0 ; i<nums.size() ; i++){
        if(nums[i] != 0) nums[ctr++] = nums[i] ;
    }
    for(int j=ctr ; j<nums.size() ; j++){
        nums[j] = 0 ;
    }
}

int main(){
    int size, elm;
    cout << "enter size:- " ;
    cin >> size ;

    vector<int> nums ;
    cout << "Enter elements:- " ;
    for(int i=0 ; i<size ; i++){
        cin >> elm;
        nums.push_back(elm) ;
    }

    moveZeroes(nums);

    cout << "Array after moving weroes:- " ;
    for(int j:nums) {
        cout << j << " " ;
    }

    return 0;
}