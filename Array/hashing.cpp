#include<iostream>
#include<string>
#include<map>
using namespace std;



int main(){
    string s = "hehlo";

// -------------------- Using Array -----------------------------
    int hash [26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    // cout<<hash['e'-'a']; ------ For indexing --------
// ----------------------------------------------------------------

// --------------------------Usings Maps---------------------------
    map <char,int> m ;
    
    for(auto i : s){
        m[i]++;
    }
// ----------------------------------------------------------------

    cout<<m['h']<<endl;
    

    return 0;
}