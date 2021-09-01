#include<iostream>
#include<vector>
using namespace std ;
int rains(vector<int> v){
    if(v.size()<=2){
        return 0 ;
    }
    int left[v.size()], right[v.size()] ;//arrays to save leftmax,rightmax heights
    left[0] = v[0] ;

    right[v.size()-1] = v[v.size()-1] ;

    for(int i=1;i<v.size();i++){

        left[i] = max(v[i],left[i-1]) ;
    }

    for(int i=v.size()-2;i>=0;i--){

        right[i] = max(v[i],right[i+1]) ;
    }
    int ans = 0;

    for(int i=0;i<v.size();i++){

        ans += min(left[i],right[i]) - v[i] ;
    }

    return ans ;
}
int main()
{
    //o(N) time complexity
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i=0;i<n;i++) cin >> v[i] ;
    cout << rains(v) << endl ;

return 0;
}