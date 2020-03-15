#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define vec vector<int> 
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 

int main(){
    fastio ;
    string s ;
    cin >> s ;
    int len = s.length() , a=0, b=0 ;
    int arr[len] ;

    loop(0,len,i){
        a = (int)s[len-1-i] - '0' ;
        if(a%2){
            arr[len-1-i] = b ;
        }
        else{
            arr[len-1-i] = ++b ;
        }
    }
    
    loop(0,len,i) cout << arr[i] << " " ;

}