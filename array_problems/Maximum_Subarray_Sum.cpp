#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int maxsum(vector<int> v){

    int n = v.size() ;
    int maxsum = INT_MIN ;
    int sum = 0 ;

    for(int i=0;i<n;i++){

        sum += v[i] ;
        if(sum<0){
            sum = 0 ;
        }
        maxsum = max(maxsum,sum) ;
    }
    return maxsum ;

}
int main()
{
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i=0;i<n;i++) cin >> v[i] ;
    cout << maxsum(v) << endl ;
return 0;
}