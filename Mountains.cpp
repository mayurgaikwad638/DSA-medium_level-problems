#include<iostream>
#include<vector>
using namespace std ;
int largest_mountain(vector<int> v){
    int n = v.size() ;
    int largest = 0 ;

    for(int i=1;i<=n-2;){
        if(v[i]>v[i-1] and v[i]>v[i+1]){//it checks peak point
            int ct = 1 ;
            int j = i ;
            while(j>=1 and v[j]>v[j-1]){
                //it counts backward elements
                j-- ;
                ct++ ;
            }
            while(i<=n-2 and v[i]>v[i+1]){
                // it counts forward elements
                i++ ; ct++ ;
            }
            largest = max(largest,ct) ;// if count is greater than previous then it update 
        }else{
            i++ ;
        }
    }
        return largest ;
    
}
int main()
{
    int n ; cin >> n ;
    vector<int> v(n);//{1,2,3,4,5,4,3,2,1,6} ;
    for(int i=0;i<n;i++) cin >> v[i] ;
    cout << largest_mountain(v) << endl ;
return 0;
}