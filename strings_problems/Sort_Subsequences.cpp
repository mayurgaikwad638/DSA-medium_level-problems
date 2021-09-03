#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ;
void subsequence(string s,string o,vector<string> &v){

    // if string is empty insert output in vector
    // base conditon 
    if(s.size()==0){
        v.push_back(o) ;
        return ;
    }

    //store first character
    char ch = s[0] ;

    //remove stored characeter from string
    string reduced_input = s.substr(1) ;

    // include character
    subsequence(reduced_input,o+ch,v) ;

    // exclude character
    subsequence(reduced_input,o,v) ;
}

bool compare(string s1,string s2){
    if(s1.size()==s2.size()){
        return s1<s2 ;
    }
    else{
        return s1.size()<s2.size() ;
    }
}
int main()
{
    string s ;
    cin >> s ; 

    vector<string> v ;
    string output = "" ;
    subsequence(s,output,v) ;

    sort(v.begin(),v.end(),compare) ;

    for(int i=0;i<v.size();i++){
        cout << v[i] << " " ;
    }

return 0;
}