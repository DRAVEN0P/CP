#include <iostream>
#include <vector>

using std::vector;
using namespace std;

int secondLargest(vector<int> &arr)
{

    int largest;
    int secondL = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i] > secondL) && (arr[i] < largest))
        {
            secondL = arr[i];
        }
    }
    return secondL;
}

int optimizedSecondLargest(vector<int> &arr)
{
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int optimizedSecondSmallest(vector<int> &arr)
{
    int sint = arr[0];
    int ssint = INT_MAX;
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i]<sint)
        {
            ssint = sint;
            sint = arr[i];
        }
        else if (arr[i]<ssint && arr[i]> sint)
        {
            ssint = arr[i];
        }
        
    }
    return ssint;
    
}

int main()
{

    vector<int> v = {2, 7, 4, 15};
    cout << optimizedSecondSmallest(v);

    return 0;
}