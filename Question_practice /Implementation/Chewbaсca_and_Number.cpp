// outputstandard output
// Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

// Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

// Input
// The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.

// Output
// Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

// Examples
// inputCopy
// 27
// outputCopy
// 22
// inputCopy
// 4545
// outputCopy
// 4444



#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    vector<int> elements;
    cin >> num;
    while (num >0)
    {
        int i = num%10;
        if((9-i)<i){
            i = 9-i;
        }
        elements.push_back(i);
        num /= 10;
    }
    reverse(elements.begin(), elements.end());
    int ans ;
    for(auto i : elements){
        ans= 10*ans + i;
        cout<<i<<endl;
    }
    cout << ans << endl;

    return 0;
}