#include <bits/stdc++.h>
using namespace std;

int func(vector<int>arr){
    vector<int> ans;
    int n=arr.size() ;
    for(int i=0 ; i<n ; i++){
        int k=0 ;
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] < arr[j]) ans[k] = arr[j] ;
        }
        break ;
    }
}


int code(vector<int>&arr){
    int n=arr.size() ;
    vector<int>ans;
    stack<int>st;
    for(int i=n-1 ; i>=0 ; i--){
        if(){
            ans[i] = -1 ;
        }else if(st.empty() && st.top() > arr[i]){
            ans[i] = st.top() ;
        }else if(st.empty() && st.top() <= arr[i]){
            while(st.empty() && st.top() <= arr[i]){

            }
        }
    }
}
int main(){
    cout << "hello ub." << endl;

    stack<int> st;
    st.push(10) ;
    st.push(20) ;
    st.push(30) ;

    cout << "top - " << st.top() << endl ;
    st.pop() ;
    cout << "top - " << st.top() << endl ;


    // conditions for stack 

    // 1) 2 for loop  -> 40% stack 
    // 2) 2 for loop + j depends on i  -> 100% stack 
    // 3) string (in casse of sub sequence)
    
}