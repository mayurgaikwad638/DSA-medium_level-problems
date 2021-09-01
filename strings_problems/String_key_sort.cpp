#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std ;
int converttoint(string s){
    int ans = 0 ;
    int p = 1 ;
    for(int i=s.size()-1;i>=0;i--){
        ans += (s[i]-'0')*p ;
        p = p*10 ;
    }
    return ans ;
}

bool lexicocomp(pair<string,string> s1,pair<string,string> s2){
    string key1 , key2 ;
    key1 = s1.second ;
    key2 = s2.second ;

    return key1 < key2 ;
}
bool numriccomp(pair<string,string> s1,pair<string,string> s2){
    string key1, key2 ;
    key1 = s1.second ;
    key2 = s2.second ;

    return converttoint(key1) < converttoint(key2) ;
}
string extractkey(string str,int key){
    char *s = strtok((char *)str.c_str()," ") ;

    while(key>1){
        s = strtok(NULL," ") ;
        key-- ;
    }

    return (string)s ;
}
int main()
{
   // string s = "10 20 30 40" ;
   // cout << extractkey(s,3) ;
    int n ; cin >> n ;
    cin.get() ; // consumes extra \n

    string temp ;
    vector<string> v ;

    for(int i=0;i<n;i++){
        getline(cin,temp) ;
        v.push_back(temp) ;
    }

    int key;
    string reversal, ordering ;
    cin >> key >> reversal >> ordering ;

    // 1st extract key from string 

    vector<pair<string,string>> vp ;

    for(int i=0;i<n;i++){
        vp.push_back({v[i],extractkey(v[i],key)}) ;
    }

    if(ordering=="numric"){
        sort(vp.begin(),vp.end(),numriccomp) ;
    }

    else{
        sort(vp.begin(),vp.end(),lexicocomp) ;
    }

    if(reversal=="true"){
        reverse(vp.begin(),vp.end()) ;
    }

    for(int i=0;i<n;i++){
       cout << vp[i].first << endl ;
    }
return 0;
}