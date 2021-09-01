#include<iostream>
#include<cstring>
using namespace std ;

void space_20(char *s){
    int ct = 0 ;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            ct++ ;
        }
    }

    int reqsp = ct * 2 ;
    int idx = strlen(s)+reqsp ;
    s[idx] = '\0' ;

    for(int i=strlen(s)-1;i>=0;i--){
        if(s[i]!=' '){
            s[idx-1] = s[i] ;
            idx-- ;
        }
        else{
            s[idx-1] = '0' ;
             
            s[idx-2] = '2' ;
             
            s[idx-3] = '%' ;
            idx = idx -3  ;
        }

    }

    
}
int main()
{
    char s[10000];
    cin.getline(s,1000) ;

     space_20(s) ;
     cout << s << endl ;

    
return 0;
}