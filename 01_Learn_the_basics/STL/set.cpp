#include <bits/stdc++.h>
using namespace std;

void explainset(){
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);
    

    auto it = st.find(3);

    auto it = st.find(6);

    st.erase(5);

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);


    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);

    auto it = st.find(2);
    auto it = st.find(4);
    st.erase(it1, it2);
    
    
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

int main(){
    
}