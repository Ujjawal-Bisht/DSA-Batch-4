#include<bits/stdc++.h>
using namespace std;

int SearchKey(unordered_map<char, int> mp, char key){
    return mp[key] ;
}

int main(){
    // To count letters in a string
    string s = "Ujjawal_Bisht";
    vector<char> name(s.begin(), s.end());

    unordered_map<char, int> mp ;
    for(int c:name){
        mp[c]++ ;
    }

    // cout << "map consist of:- " ;
    // for(auto it: mp){
    //     cout << it.first << " " << it.second << endl ;
    // }

    cout << SearchKey(mp, 'a') ;
}