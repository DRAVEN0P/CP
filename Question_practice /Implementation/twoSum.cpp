#include <iostream>
#include <vector>
#include <unordered_set>
using std::unordered_set;
using std::vector;
using namespace std;

vector<int> twoSum(vector<int> &v, int target)
{

    vector<int> result;
    for (int i = 0; i < v.size(); i += 2)
    {

        int ans = ((v[i] + v[i + 1]) % target);
        if (ans == 0) result.push_back(ans);
        else{

            int ans1 = target - ans;
            result.push_back(ans1);
        }
        
    }

    return result;
}

void printVector(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {2,7,11,15};
    vector<int> a = twoSum(v, 9);
    printVector(a);
    // cout << 5%9<<endl;
}