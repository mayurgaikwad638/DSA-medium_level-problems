#include<iostream>
#include<climits>
using namespace std ;

string smallest_substring(string s, string p){

    int FS[256] = {0} ;
    int PS[256] = {0} ;

    for(int i=0;i<p.size();i++){
        PS[p[i]]++ ;
    }

    int cnt = 0, window_size = 0 , min_so_far= INT_MAX , start_idx = -1 , start = 0 ;

    for(int i=0;i<s.size();i++){
        char ch = s[i] ;
        FS[ch]++ ;

        // if element is present in PS then cnt++
        if(PS[ch]!=0 and FS[ch]<=PS[ch]){
            cnt++ ;
        }

        // if all characters are present then start contracting from left 
        if(cnt==p.size()){
            //start contracting from left to remove unwanted characters

            while(PS[s[start]]==0 or FS[s[start]]>PS[s[start]]){

                FS[s[start]]-- ;
                start++ ;

            }

            window_size = i-start+1 ;

            if(window_size<min_so_far){
                min_so_far = window_size ;
                start_idx = start ;
            }
        }
    }

    if(start_idx == -1){
        return "No window found" ;
    }
    return s.substr(start_idx,min_so_far) ;
}
int main()
{
    // check small string is present in big window or not 
    // return smallest substring which contains all character of small string

    string s ; cin >> s;
    string p ; cin >> p ;

     cout << smallest_substring(s,p) ; 

    return 0;
}