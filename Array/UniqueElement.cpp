#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int Unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

int main()
{
    
    

    return 0;
}