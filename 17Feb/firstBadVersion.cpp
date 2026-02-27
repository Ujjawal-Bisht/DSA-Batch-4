// February 17, 2026 - Tuesday
// Homework Question 1

#include<bits/stdc++.h>
using namespace std;

bool isBadVersion(int version){
    if(version >= 4) return true;
}

int firstBadVersion(int n){
    int st = 1, end = n;
    int mid = n;
    while(st <= end){
        mid = st + (end-st)/2 ;
        if(!isBadVersion(mid)) {
            st = mid+1 ;
            mid = st;
        }else end = mid-1;
    }
    return mid;
}

int main(){
    int n = 5, bad = 4;
    cout << "First Bad version is:- " << firstBadVersion(n) ;

}