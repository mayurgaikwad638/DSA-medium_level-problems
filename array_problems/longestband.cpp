#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std ;
int longest_band(vector<int> v){
    unordered_set<int> st ;
    // insert elements in set 
    for(auto x : v){
        st.insert(x) ;
    }
    int largestlen = 0 ;
    for(int i=0;i<v.size();i++){
        int parent = v[i]-1 ;

        if(st.find(parent)==st.end()){
            //we can start band from this element
            int next_no = v[i] + 1 ;
            int ct = 1 ;
            while(st.find(next_no)!=st.end()){
                next_no++ ;
                ct++ ;
            }

            if(ct>largestlen){
                largestlen = ct ;
            }
        }
    }
    return largestlen ;
}
int main()
{
    // o(N) time complexity
    //unordered_set takes o(1) time 
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i=0;i<n;i++) cin >> v[i] ;
    cout << longest_band(v) << endl ;
return 0;
}