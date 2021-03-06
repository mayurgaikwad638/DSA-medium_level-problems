#include<iostream>
#include<vector>
using namespace std ;
int merge(vector<int> &arr, int s,int e){
        int i = s;
        int m = (s+e)/2 ;
        int j = m+1 ;

        int cnt =  0;
        vector<int> temp ;
        while(i<=m and j<=e) {
            if(arr[i]<arr[j]){
                temp.push_back(arr[i]) ;
                i++ ;
            }else{
                cnt += m - i + 1 ;
                temp.push_back(arr[j]) ;
                j++ ;
            }
        }

        while(i<=m){
            temp.push_back(arr[i++]);
        }

        while(j<=e){
            temp.push_back(arr[j++]) ;
        }

        int k = 0 ;
        for(int i=s;i<=e;i++){
            arr[i] = temp[k++] ;
        }

        return cnt ;

}
int inversion_count(vector<int> &arr,int s,int e){
    if(s>=e){
        return 0 ;
    }
    int mid = (s+e)/2 ;

    int c1 = inversion_count(arr,s,mid) ;
    int c2 = inversion_count(arr,mid+1,e) ;

     int ci = merge(arr,s,e) ;

     return c1 + c2 + ci ;
}
int main()
{
    int n ; cin >> n ;
    vector<int> arr(n) ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    int s = 0 , e = n-1 ;
    cout << inversion_count(arr,s,e) ;

    
return 0;
}