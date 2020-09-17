#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int len;
   string str;
   cin>>len;
   cin>>str;
   vector <char> vec;

   while(len!=0){
        if(len%2==1){
            vec.push_back(str[0]);
        }else{
            vec.insert(vec.begin(),str[0]);
        }
        str.erase(0,1);
        len = str.length();

   }
   for(int i =0;i<vec.size();i++){
    cout<<vec[i];
   }
   return 0;



}
