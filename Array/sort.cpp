#include <iostream>
#include <set>
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

void merge(vector<int> &arr, int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high ){
        if (arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;

    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(auto i : temp){
        cout<<i<<" ";
    }
    for(int i = low; i<=high;i++){
        arr[i]=temp[i-low];
    }
    cout<<endl;
}

void mS(vector<int> &arr, int low ,int high){
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void merge_sort(vector<int> &arr, int n){
    mS(arr,0, n-1);

}


void set_sort(int arr[], int size)
{

    set<int> arry;
    set<int>::iterator itr;
    for(int i = 0 ; i < size ; i++){
        arry.insert(arr[i]);
    }
    int i = 0;
    for (itr = arry.begin(); itr != arry.end(); itr++) {
        arr[i] = *itr;
        i++;
    }
    
}

int main()
{
    int n = 7;
    // cin >> n;
    vector<int> arr = {3,1,6,2,9,8,11};
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    merge_sort(arr,7);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}