#include<iostream>
using namespace std;

// int bitWiserComplement(int n){
//     int m = n;
//     int mask = 0;

//     if (n == 0){
//         return 1;
//     }
//     while(m!=0){
//         mask = (mask <<1)|1;
//         m >>=1;
//     }

//     int ans = (~n)&mask;

//     return ans;
// }

int bitWiserComplement(int n){

    int mask = 1;
    while(mask<n){
        mask = ((mask<<1)|1);
       

    }
    return mask ^n;
    
}



int main(){
    cout << bitWiserComplement(0);
    return 0;
} 