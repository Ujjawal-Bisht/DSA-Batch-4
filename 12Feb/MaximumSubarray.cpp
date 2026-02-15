// 12 February, 2026 - Thursday

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int Csum = 0, Lsum = INT_MIN;
    for(int i=0 ; i<nums.size() ; i++){
        Csum += nums[i] ;
        if(Csum > Lsum) Lsum = Csum ;
        if(Csum < 0) Csum = 0;
    } 
    return Lsum ;
}

int main(){
    vector<int> nums ;
    int size, elm;

    cout << "Enter size - ";
    cin >> size ;

    cout << "Enter elements: - ";
    for(int i=0 ; i<size ; i++){
        cin >> elm;
        nums.push_back(elm) ;
    }

    cout << "Sum of elements in maximum subarray is:- " << maxSubArray(nums) ;
}