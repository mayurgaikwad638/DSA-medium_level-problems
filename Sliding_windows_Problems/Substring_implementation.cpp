#include<iostream>
#include<unordered_map>
using namespace std ;

string substring(string s){

    unordered_map<char,int> mp ;
    int i=0, j=0 ;
    int window_len = 0, max_len=0, startp = 0 ;

    while(j<s.size()){

        if(mp.count(s[j]) && mp[s[j]]>=i){

            i = mp[s[j]]+1 ;
            window_len = j-i ;

        }

        mp[s[j]] = j ;
        window_len++ ;
        j++ ;

        if(window_len>max_len){
            max_len = window_len ;
            startp = i ;
        }
    }

    return s.substr(startp,max_len) ;

}
int main()
{
    // find max len of substring from given string with no duplicates
    // sliding window tech 
    
    string s ; cin >> s ;
    unordered_map<char,int> mp ;

    cout << substring(s) ;



return 0;
}