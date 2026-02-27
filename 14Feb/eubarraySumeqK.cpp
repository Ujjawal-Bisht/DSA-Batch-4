// February 14, 2026 - Saturday
// Homework Question 4

#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k){
    int csum = 0;
    int c = 0;
    unordered_map <int, int> mp = {{0,1}};
    for (int i=0 ; i<nums.size() ; i++){
        csum += nums[i];
        if(mp.find(csum-k) != mp.end()){
            c += mp[csum-k] ;
        }
        mp[csum]++ ;
    }
    return c;
}

int main(){
    vector<int> num;
    int size, elm, target;

    cout << "Enter size:- ";
    cin >> size;

    cout << "Enter elements:- ";
    for(int i=0 ; i<size ; i++){
        cin >> elm ;
        num.push_back(elm) ;
    }

    cout << "Enter target:- ";
    cin >> target ;

    cout << "Ttl number is:- " << subarraySum(num, target);
    return 0;
}