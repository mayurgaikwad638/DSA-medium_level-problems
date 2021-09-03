#include<iostream>
using namespace std ;

void housing(int arr[],int k,int n){

    int i=0, j=0 ;
    int cs = 0;
    while(j<n){

        cs += arr[j] ;
        j++ ;

        while(cs>k and i<j){
            cs = cs - arr[i] ;
            i++ ;
        }

        if(cs==k){
            cout << i << "-" << j-1 << endl ;
        }


    }
}
int main()
{
    int n, k ; cin >> n >> k ;
    int plots[n] ;
    for(int i=0;i<n;i++) cin >> plots[i] ;

    housing(plots,k,n) ;
return 0;
}