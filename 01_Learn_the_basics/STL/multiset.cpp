#include <bits/stdc++.h>
using namespace std;

void explainmultiset(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);

    int cnt = ms.count(1);

    ms.erase(ms.find(1));

    {
        auto it = ms.find(1);
        if(it != ms.end()){
            auto it2 = it;
            for(int i=0; i<2 && it2!=ms.end(); ++i) ++it2;
            ms.erase(it, it2);
        }
    }
}

int main(){
    
}