// February 14, 2026 - Saturday
// Homework Question 1

#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;
    set<int> s(nums.begin(), nums.end());
    int cct = 1, mct = 1;
    for (auto it = s.begin(); it != s.end(); ++it) {
    int val = *it;
        if (s.find(val + 1) != s.end()) {
            cct++ ; mct = max(mct, cct) ;
        }else{
            cct = 1;
        }
    }
    return mct ;
}

int main(){
    vector<int> num;
    int size, elm;

    cout << "Enter size:- ";
    cin >> size;

    cout << "Enter elements:- ";
    for(int i=0 ; i<size ; i++){
        cin >> elm ;
        num.push_back(elm) ;
    }

    cout << "Longest Consecutive Sequence is:- " << longestConsecutive(num);
}