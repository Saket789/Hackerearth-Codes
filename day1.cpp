#include <bits/stdc++.h>
using namespace std;

int main() {
	long n, k ;	
	cin >> n >> k ;
	// deque<long> d ;
    vector<long> vec ;
	long arr[n] ;
	for(int i=0; i<n; i++){
	    long a ;
	    cin >> a ;
	    vec.push_back(a);
	}
    int i=0;
	while(vec[i] <= k){
        i++ ;
	    // vec.erase(vec.begin()) ;
        // cout << " aa " ;
	}
    long j = 0 ;
	while(vec[n-1-j] <= k){
	    // vec.erase(vec.end()) ;
        j++;
        // cout << " bb " ;
	}
    long ans = n-j-i ;
    cout << ans ;
}


