#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
vector<vector<int>> triplets(vector<int> v,int sum){
    vector<vector<int>> result ;
    sort(v.begin(),v.end()) ;// O(NlogN) + O(N^2) = O(N^2)

    for(int i=0;i<v.size()-2;i++){
        int j = i + 1;
        int k = v.size()-1 ;

        while(j<k){
            int current_sum = v[i] ;
            current_sum += v[j] ;
            current_sum += v[k] ;
            if(current_sum==sum){
                result.push_back({v[i],v[j],v[k]}) ;
                j++ ;
                k-- ;
            }
            else if(current_sum>sum) k-- ;

            else j++ ;
        }
    }
    return result ;
} 
int main()
{
   // first sort given vector 
   // two pointer approach
   //int n ; cin >> n ;
  vector<int> v{-1,0,1,2,-1,-4} ;
    int sum = 0 ;;
    //vector<int> v ;
    //for(int i=0;i<n;i++) cin >> v[i] ;
    auto result = triplets(v,sum) ;

    for(auto v:result){
        for(auto no:v){
            cout << no << "," ;
        }cout << endl ;
    }

return 0;
}