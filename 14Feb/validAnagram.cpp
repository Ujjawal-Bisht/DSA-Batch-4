// february 14, 2026
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    
    unordered_map <char, int> m2;
    unordered_map <char, int> m1;

    for(int i=0; i<s.size() ; i++){
        m1[s[i]]++ ;
    }
    for(int j=0; j<t.size() ; j++){
        m2[t[j]]++ ;
    }

    return m1==m2;
    }

int main(){
    string s = "anagram", t = "nagaram";
    s = "rat", t = "car";
    cout << isAnagram(s, t) ;
}