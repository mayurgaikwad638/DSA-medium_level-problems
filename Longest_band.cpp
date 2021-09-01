#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std ;
int longest_band(vector<int> v){
    int ct = 1 ;
    int ans = INT_MIN ;
    sort(v.begin(),v.end()) ;// O(NlogN) + O(N) = O(NlogN)
    for(int i=1;i<v.size();i++){
        if(abs(v[i]-v[i-1])==1){
            ct++ ;
        }else{
            ans = max(ans,ct) ;
            ct = 1 ;
        }
    }
    return ans ;
}
int main()
{
    // brute force approach
    // sorting takes extra time 
    // we can do it in O(N) 
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i=0;i<n;i++) cin >> v[i] ;
    cout << longest_band(v) << endl ;
return 0;
}