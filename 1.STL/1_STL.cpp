#include<bits/stdc++.h>
using namespace std;

void set1(){
   set<int>st; 
   st.insert(1);
   st.emplace(1);   
   st.emplace(42);
   st.insert(41);
   st.insert(234);
   st.insert(2524);
   auto it = st.find(234);
   st.erase(it);
  for (auto v : st){
    cout<<v<<endl;
    v++;
  }


   
}
int main(){
    set1();
    return 0 ;
}
