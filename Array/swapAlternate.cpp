#include<iostream>
using namespace std;

void swapAlternate(int arry[],int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arry[i],arry[i+1]);
        }
    }
}

void printArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
}


int main(){
    int arry [7] = {1,2,3,4,5,6,7};
    swapAlternate(arry,7);
    printArray(arry,7);
    // cout<<(10%2);

    return 0;
}