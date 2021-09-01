#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    // string tokenisation using strtok function
    // it works on character array 

    char input[1000] ;
    cin.getline(input,1000) ;

    // strtok() 
    char *token = strtok(input," ") ;

    while(token!=NULL){
        cout << token << "," ;
        token = strtok(NULL," ") ;
    }

    
return 0;
}