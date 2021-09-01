#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
bool outoforder(vector<int> v,int i){
    int x = v[i] ;

    if(i==0){
        return x>v[i+1] ;
    }

    else if(i==v.size()-1){
        return x<v[i-1] ;
    }

    else{
        return x>v[i+1] or x<v[i-1] ;
    }
}

pair<int,int> subarraysort(vector<int> v){
    int n = v.size() ;

    int smallest = INT_MAX ;
    int largest = INT_MIN ;

    for(int i=0;i<n;i++){

        if(outoforder(v,i)){

            smallest = min(smallest,v[i]) ;
            largest = max(largest,v[i]) ;

        }

    }
    if(smallest==INT_MAX){
        return {-1,-1} ;
    }

    int left = 0 ;
    while(smallest>v[left]){
        left++ ;
    }

    int right = n-1 ;
    while(largest<v[right]){
        right-- ;
    }

    return {left,right} ;
}

int main()
{
    // o(N) time 
    int n ; cin >> n ;
    vector<int> v(n) ;
    
    for(int i=0;i<n;i++) cin >> v[i] ;

    auto p = subarraysort(v) ;

    cout << p.first << " " << p.second << endl ;

return 0;
}