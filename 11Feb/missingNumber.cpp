// February 11, 2026 - Wednesday
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums){
    int sum = 0;
    for(int i=1 ; i<nums.size()+1 ; i++) sum += i ;

    int actualSum = 0;
    for(int x:nums) actualSum += x ;

    return sum-actualSum ;
}

int main(){
    vector<int> nums;
    int size, elm;
    cout << "Enter size:- ";
    cin >> size;

    cout<< "Enter elements:- " ;
    for(int i=0 ; i<size ; i++){
        cin >> elm;
        nums.push_back(elm) ;
    }

    cout << "Missing number in given array is:- " << missingNumber(nums) ;

    return 0;
}