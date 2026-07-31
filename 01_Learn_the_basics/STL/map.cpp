#include <bits/stdc++.h>
using namespace std;

void explainmap(){
   map<int, int> mpp;

   mpp[1] = 2;
   mpp.emplace(3, 1);
   mpp.insert({2, 4});
   
   mpp[2] = 10;

   for(auto it: mpp){
      cout<<it.first<<" "<<it.second<<endl;
   }

   cout<< mpp[1];
   cout<<mpp[5];

   auto it = mpp.find(3);
   if(it != mpp.end())
      cout << it->second;

   auto it2 = mpp.find(5);


}

int main(){
    
}