#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std ;
pair<int,int> minDifference(vector<int> a,vector<int> b){

    int n = a.size() ;
    int diff = 0;
    int mindiff = INT_MAX ;

    pair<int,int> p ;

    sort(a.begin(),a.end()) ;
    sort(b.begin(),b.end()) ;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            diff = abs(a[i]-b[j]) ;
            if(diff>mindiff) break ;

            mindiff = min(mindiff,diff) ;
            p.first = a[i] ;
            p.second = b[j] ;

        }
    }

    return p ;

}
int main()
{
    int n ; cin >> n ;
    vector<int> a(n) ;
    vector<int> b(n) ;
    for(int i=0;i<n;i++) cin >> a[i] ;
    for(int i=0;i<n;i++) cin >> b[i] ;

    auto p = minDifference(a,b) ;
    cout << p.first << " " << p.second << endl ;
return 0;
}