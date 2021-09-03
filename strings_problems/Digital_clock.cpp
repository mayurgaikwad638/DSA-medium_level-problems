#include<iostream>
#include<string>
using namespace std ;
string convert_to_digital_time(int minutes){

    int hour = minutes/60 ;
    string ans = to_string(hour) + ":" ;
    
    if(minutes%60==0){
        return ans + "00" ;
    }
    else{
        int remainder = minutes % 60 ;
        string rem = to_string(remainder) ;
        if(rem.size()==1){
            return ans + "0" + rem ;
        }else{
            return ans + rem ;
        }
    }
}
int main()
{
    int minutes ;
    cin >> minutes ;

    cout << convert_to_digital_time(minutes) << endl ;
return 0;
}