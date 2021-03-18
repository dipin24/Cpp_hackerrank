#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q,d,e,f;
    cin>>n>>q;
    vector<vector<int> > c(n);
    
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for (int j=0; j<k; j++) {
            cin>>d;
            c[i].push_back(d);
        }
    }
        
    for(int i=0;i<q;i++){
        cin>>e>>f;
        cout<<c[e][f]<<endl;
    }  
    return 0;
}