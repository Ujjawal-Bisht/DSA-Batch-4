#include<bits/stdc++.h>
using namespace std;

int agram(string s){
    if(s.size()%2 != 0) return -1;
    unordered_map <char, int> s1;
    unordered_map <char, int> s2;

    for(int i=0 ; i<s.size()/2 ; i++){
        s1[s[i]]++;
    }
    for(int i=s.size()/2 ; i<s.size() ; i++){
        s2[s[i]]++;
    }

    int diff = 0;
    for(auto& x:s1, y:s2){

        if(s2.find(x.first) != s2.end()){
            diff = 
        }else{
            diff = x.second ;
        }
    }
}
int main(){

}