#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,k,i ;
    string temp_str,str;
    cin>>n>>k;
    cin>>str;
    int l = k;
    for(i=0;i<k;i++){
        if(str[i]=='0'){
            l++;
        }
        else
            continue;
    }
    k = l;

    if(n==1){
        temp_str = '0';
    }
    else{
            temp_str = '1';
        for(i = 1 ;i<k ;i++){
            temp_str += '0';
        }

    }

    for(i=0;i<k;i++){
        str[i] = temp_str[i];
    }


    cout<<str;



}
