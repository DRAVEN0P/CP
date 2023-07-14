#include<iostream>
#include<vector>
using namespace std;

vector<int> neighbors(vector<int> &v){

    vector<int> result;

    for ( int i = 1; i < v.size() -1 ;i++ ){

        if ((v[i-1] < v[i]) &&  (v[i] > v[i+1])){
            result.push_back(v[i]);
        }
    }
    return result;
}

void printVector(vector<int> &v){

    for ( int i = 0; i < v.size(); i++ ){
        cout << v[i] << " ";
    }

}

int main(){
    
    vector<int> a = { 1, 15,25,45,42,21,17,12,11};
    vector<int> b = neighbors(a);
    printVector(b);


    return 0;
}