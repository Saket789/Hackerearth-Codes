/**
**********************************************************************************************************************************************************************************************************************************
* @file:	dislikes_and_party.cpp
* @author:	Saket
* @date:	2020年03月22日 16:42:36 Sunday
* @brief:	hacker-earth
**********************************************************************************************************************************************************************************************************************************
**/
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 

int main(){
    fastio ;
    ll n ;
    cin >> n;
    vector<pair<ll,ll> > vec ;
    vector<pair<ll,ll> >::iterator itr, itr1 ;
    ll a , b, c , cnt=0 ;
    loop(0,10,i){
        cin >> a ;
        loop(0,9,j){
            cin >> b ;
            if(a < b){
                itr = find(vec.begin(), vec.end(), mk(a,b)) ;
                if(itr == vec.end()){
                    vec.pb(mk(a,b));
                    cnt++;
                }
            }
            else{
                itr = find(vec.begin(), vec.end(), mk(b,a)) ;
                if(itr == vec.end()){
                    vec.pb(mk(b,a));
                    cnt++;
                }
            }
        }
    }
    cout << (n*(n-1))/2 - cnt ;
}