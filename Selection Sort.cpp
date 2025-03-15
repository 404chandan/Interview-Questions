#include <bits/stdc++.h>
using namespace std;

// void solve() {
    
// }

int main() {
    vector<int>v={7,5,9,2,8};
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        auto it = min_element(v.begin() + i, v.end()); 
        swap(*it, v[i]); 
    }
    for(int i=0;i<n;++i){
        cout<<v[i]<<" ";
    }
return 0;
}
