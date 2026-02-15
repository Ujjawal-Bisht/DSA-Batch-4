// February 12, 2026 - Thursday
// Homework question 3

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        map<int, int> mp;
        for(int i=0 ; i<m ; i++){
            mp[nums1[i]]++ ;
        }
        for(int j=0 ; j<n ; j++){
            mp[nums2[j]]++ ;
        }
        int index = 0;
        for(auto& pair: mp){
            int num = pair.first ;
            int freq = pair.second ;
            for(int k=0 ; k<freq ; k++){
                nums1[index++] = num ;
            }
        }
}


int main(){
    vector<int> num1, num2 ;
    int size1, elm1 ;
    int size2, elm2 ;

    cout << "Enter size1:- "; 
    cin >> size1 ;
    cout << "Enter size2:- "; 
    cin >> size2 ;
    
    cout << "Enter elements for array 1:- ";
    for(int i=0 ; i<size1 ; i++){
        cin >> elm1;
        num1.push_back(elm1);
    }

    cout << "Enter elements for array 1:- ";
    for(int i=0 ; i<size2 ; i++){
        cin >> elm2;
        num2.push_back(elm2);
    }

    merge(num1, size1, num2, size2) ;

    cout << "After sorting array :- " ;
    for(int j=0 ; j<size1 ; j++){
        cout << num1[j] << " ";
    }
    return 0;
}