#include<iostream>
#include<string>
#include<vector>
using namespace std;
using std::vector;

bool isValid(string s){
    int ans = 0;
    vector<char> elements;
    for(auto i : s){
        elements.push_back(i);
    }
    for (int i = 0; i < elements.size(); i++)
    {
        if(elements[i] == '(' && elements[i+1] == ')'){
            return true;
        }
        if(elements[i] == '{' && elements[i+1] == '}'){
            return true;
        }
        if(elements[i] == '[' && elements[i+1] == ']'){
            return true;
        }
        
    }
    return false;
}

int main(){
    cout<<isValid("([])");


    return 0;
}