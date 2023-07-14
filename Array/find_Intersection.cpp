#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
using std::unordered_set;
using std::vector;

vector<int> findIntersection(vector<int> &v1, vector<int> &v2)
{
    unordered_map<int,int> CountMap;
    vector<int> Result;

    for (int num : v1){
        CountMap[num]++;
    }

    for (int num : v2){
        if(CountMap[num]>0){
            Result.push_back(num);
            CountMap[num]--;
        }
    }

    return Result;
}



int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5,5};
    vector<int> arr2 = {4, 5, 6, 7, 8,5};

    vector<int> intersection = findIntersection(arr1, arr2);

    std::cout << "Intersection: ";
    for (int num : intersection) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
