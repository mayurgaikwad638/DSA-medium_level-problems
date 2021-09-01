#include<iostream>
#include<unordered_set>
using namespace std ;
int main()
{
    /*time complexity = o(n) 
    using two pointer it takes o(nlogn) + o(n)
    brute force takes o(n^2) time */
    int n, s ; cin >> n >> s ;
    int arr[n] ;
    for(int i=0;i<n;i++) cin >> arr[i] ;
    unordered_set<int> st ;
    int i ;
    for(i=0;i<n;i++){
        int want = s - arr[i] ;
        if(st.find(want)==st.end()){
            st.insert(arr[i]) ;
        }
        else{
            cout << arr[i] << " " << want << endl ;
            break ;
        }
    }
    if(i==n) cout << "No such pairs" << endl;
    
return 0;
}