// February 10, 2026 - Tuesday
#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s){
    for(int i=0 ; i<s.size()/2 ; i++){
        char temp = s[i] ;
        s[i] = s[s.size()-i-1] ;
        s[s.size()-i-1] = temp ;
    }
}

int main(){
    vector<char> st;

    int n;
    char c;
    cout << "Enter size:- ";
    cin >> n;

    cout << "Enter string:- ";
    for(int i=0 ; i<n ; i++){
        cin >> c;
        st.push_back(c);
    }

    cout << "string before reversing is: - ";
    for(char ch:st){
        cout << ch  << " ";
    }cout << endl ;

    reverseString(st);

    cout << "string after reversing is: - ";
    for(char ch2:st){
        cout << ch2  << " ";
    }

    return 0;

}