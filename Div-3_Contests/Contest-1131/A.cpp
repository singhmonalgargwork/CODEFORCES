#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string p,q;

        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            p+=c;
        }

        for(int i=0;i<m;i++){
            char c;
            cin>>c;
            q+=c;
        }

        if(m>n){
            cout<<"NO"<<endl;
            continue;
        }
        

        map<char,int> mp1; // store p
        map<char,int> mp2; // store q
        map<char,int> mp3;

        for(int i=0;i<n;i++){
            mp1[p[i]]++;
        }

        for(int i=0;i<m;i++){
            mp2[q[i]]++;
        }

        for (auto it : mp1) {
    char c = it.first;

    if (mp1[c] != mp2[c]) {
        mp3[c] = abs(mp1[c] - mp2[c]);
    }
}

for (auto it : mp2) {
    char c = it.first;

    if (mp1.find(c) == mp1.end()) {
        mp3[c] = it.second;
    }
}

        if(mp3.size()==3 && mp3['s']==1 && mp3['i']==1 && mp3['x']==1){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }


    return 0;
}