#include<iostream>
#include<string>
#include<vector>
using namespace std ;
vector<int> stringSearch(string bigs,string s){
    vector<int> result ;
    int index = 0 ;
    while(index<bigs.size()){
        index = bigs.find(s,index) ;
        if(index!=-1){
            
            result.push_back(index) ;
            index = index+1 ;
        }
    }

    return result ;
}
int main()
{
    string bigs ;
    getline(cin,bigs) ;

    string s ;
    cin >> s ;

    vector<int> v ;
    v = stringSearch(bigs,s) ;
    for(int i=0;i<v.size();i++){
        cout << v[i] << " " ;
    }
return 0;
}