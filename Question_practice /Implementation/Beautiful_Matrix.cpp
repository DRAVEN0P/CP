#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int arr[6][6],r,c;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1){
                r = abs(3-i);
                c = abs(3-j);
                cout<< r+c<<endl;
            }
        }
        
    }   
    return 0;
}