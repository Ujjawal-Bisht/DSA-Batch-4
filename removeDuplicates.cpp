// February 11, 2026 - Wednesday
// Homework question 1

#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>nums);

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

    int k = removeDuplicate(nums);
    
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