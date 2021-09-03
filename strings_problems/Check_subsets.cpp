#include<iostream>
#include<string>
using namespace std ;
bool issubset(string s1,string s2){
    
    int i = s1.size()-1 ;
    int j = s2.size()-1 ;

    while(j>=0 && i>=0){
        if(s2[j]==s1[i]){
            j-- ; i-- ;
        }
        else{
            i-- ;
        }
    }
    if(j==-1){
        return true ;
    }
    else{
        return false ;
    }
}
int main()
{
    // O(M+N) time complextiy
    string s1, s2 ;
    cin >> s1 >> s2 ;

    cout << issubset(s1,s2) << endl ;
return 0;
}