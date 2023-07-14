#include<iostream>
using namespace std;


void reverseArray(int arr[],int size) // In array the address is given so the original array is also updated
{
    int start = 0;
    int end = size-1;
    while(start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
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
    
    int a[10]={0,1,2,3,4,5,6};
    reverseArray(a,7);
    printArray(a,7);


    return 0;
}