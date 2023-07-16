#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

void bubble_sort(int arr[], int size)
{
    for(int i = 0; i < size ; i++){
        for (int j = 0; j < size -i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        
    }
}

void insert_sort(int arr[], int size)
{
    for (int i = 0; i <= size-1; i++)
    {
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
}

int main()
{
    int n = 7;
    // cin >> n;
    int arr[7] = {3,1,6,2,9,8,11};
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    insert_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}