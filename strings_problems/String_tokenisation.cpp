#include<iostream>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std ;
int main()
{
    // string tokenisation using sstream
    
    string input ;
    getline(cin,input) ;

    //create a string stream object
    stringstream ss(input) ;

    string token ;
    vector<string> tokens ;

    while(getline(ss,token,' ')){
        tokens.push_back(token) ;
    }

    for(auto token: tokens){
        cout << token << "," ;
    }

return 0;
}