#include<iostream>
#include<vector>
using namespace std ;
vector<int> productArray(vector<int> arr){
    
    int n = arr.size() ;
    vector<int> output(n,0) ;
    int product = 1;
    int z = 0 , zindex ;
    for(int i=0;i<n;i++){

        if(arr[i]==0){
            z++ ;
            zindex = i ;
        }
        product = product * arr[i] ;
    }
    if(z==0)
    for(int i=0;i<n;i++){
        output[i] = product/arr[i]  ;
    }
   // cout << product ;
   if(z==1)
   output[zindex] = product ;
   
    return output ;

}
int main()
{
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i=0;i<n;i++) cin >> v[i] ;
    vector<int> result(n) ;
    result = productArray(v) ;

    for(int i=0;i<n;i++){
        cout << result[i] << " " ;
    }

return 0;
}