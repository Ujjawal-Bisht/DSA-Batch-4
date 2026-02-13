// February 11, 2026 - Wednesday
// Homework question 1

#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>&nums){
    // nums = [0,0,1,1,1,2,2,3,3,4]
    int n = nums.size();
    int i=0; int j=i+1 ;
    int count = 1 ;
    while(i<j && j<n){
        if(nums[i] == nums[j]) j++ ;
        else{
            // swap(nums[j], nums[i+1]) 
            int temp = nums[j];
            nums[j] = nums[i+1];
            nums[i+1] = temp ;

            i++ ; j++ ; count++ ;
        }
    }
    return count ;
}

int main(){
    vector<int> nums;
    int size, elm;
    cout << "Enter size of array:- ";
    cin >> size ;

    cout << "Enter elements:- ";
    for(int i=0 ; i<size ; i++){
        cin >> elm;
        nums.push_back(elm) ;
    }

    vector<int> expectedNums = {1,2} ;

    int k = removeDuplicate(nums);  //nums = [1,1,2] 
    // k should be 2.

    assert(k == expectedNums.size());
    for (int i = 0; i < k; i++) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;


}