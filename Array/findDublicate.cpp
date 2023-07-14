#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
using std::unordered_set;
using std::vector;

vector<int> findAllDuplicate(vector<int>& nums) 
{
    unordered_set<int> set;
    vector<int> ans ;
    for (int num : nums) {
        if (set.count(num) > 0) {
            ans.push_back(num);
        }
        
        set.insert(num);
    }
    if(ans.empty()) {
        ans.empty();
        return ans;
    }
    return ans;  
}

int findDuplicate(vector<int> &v)
{
    unordered_set<int> set;
    for(int num : v)
    {
        if (set.count(num) > 0){
            return num;
        }
        set.insert(num);
    }
    return 0;
}

void printUnique(vector<int> &v)
{
    unordered_set<int> set;
    for(int num : v)
    {
        set.insert(num);
    }

    for(int num : set)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}


int main() {
    vector<int> nums = {1,2,3,4,5,5};
    vector<int> a = findAllDuplicate(nums);
    cout<<a[2]<<endl;
    printUnique(nums);

    return 0;
}
