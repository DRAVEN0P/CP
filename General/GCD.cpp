#include<iostream>
#include<string>
using std::string;
using namespace std;

//--------MORE TIME COMPLEX ----------------------
// int GCD(int x, int y)
// {
//     int gcd = 1;
//     for (int i = 1; i <= min(x,y) ; i++)
//     {
//         if ((x % i == 0) && (y % i == 0)){
//             if (gcd <i) gcd = i;
//         }
//     }
//     return gcd;
// }
// ----------------------------------------------------

int GCD(int x, int y)
{
    while (x>=0 && y>=0)
    {   
        if(x>y){
            x%=y;
        }
        else y%=x;
        if (x==0) return y;
        if (y==0) return x;
         
    }
    
}

int fibonacci(int n)
{
    if (n==0) return 1;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){

// --------Permutation------------------------------------
    // string a = "ABC";
    // sort(a.begin(), a.end());
    // do
    // {
    //     /* code */
    //     cout<<a<<endl;
    // } while (next_permutation(a.begin(), a.end()));
// -------------------------------------------------------
 

    cout<<fibonacci(2);
    return 0;
}