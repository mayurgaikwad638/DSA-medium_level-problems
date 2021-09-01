#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int minimum_swaps(vector<int> v ){
    int n = v.size(), ans = 0 ;
    pair<int,int> ap[n] ;

    for(int i=0;i<n;i++){

        ap[i].first = v[i] ;   // pair stores element with its index 
        ap[i].second = i ;

    }

    sort(ap,ap+n) ;

    vector<bool> visited(n,false) ;

    for(int i=0;i<n;i++){
        int old_pos = ap[i].second ;
        if(visited[i]==true or i==old_pos){
            continue ;
        }

        int node = i ;
        int cycle = 0 ;
        while(!visited[node]){

        visited[i] = true ;
        int next_node = ap[node].second ;
        node = next_node ;
        cycle++ ;

        }
        ans += (cycle - 1) ;
    }

    return ans ;
}
int main()
{
    //  somthing like cyclic sort
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i=0;i<n;i++) cin >> v[i] ;

    cout << minimum_swaps(v) << endl ;
return 0;
}