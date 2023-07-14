#include <iostream>
using namespace std;

void Calculator(int a, int b, char op)
{
    int ans;
    switch (op)
    {
    case '+':
        ans = a + b;
        break;

    case '-':
        ans = a - b;
        if (ans < 0)
        {
            ans *= -1;
        }

        break;

    case '*':
        ans = a * b;
        break;

    case '/':
        ans = a / b;
        break;

    case '%':
        ans = a % b;
        break;

    default:
        cout << "Wrong operator" << endl;
    }
    cout << ans << endl;
}

void MoneyCalculator(int amount)
{
    int arry[7] = {0, 0, 0, 0, 0, 0, 0};
    int sum = amount;
    switch (0)
    {
    case 0:
        arry[6] = sum / 500;
        sum %= 500;

    case 1:
        arry[0] = sum / 100;
        sum %= 100;

    case 2:
        arry[1] = sum / 50;
        sum %= 50;

    case 3:
        arry[2] = sum / 20;
        sum %= 20;

    case 4:
        arry[3] = sum / 10;
        sum %= 10;

    case 5:
        arry[4] = sum / 5;
        sum %= 5;

    case 6:
        arry[5] = sum / 1;
    }

    cout << "Rs 500: " << arry[6] << endl;
    cout << "Rs 100: " << arry[0] << endl;
    cout << "Rs 50: " << arry[1] << endl;
    cout << "Rs 20: " << arry[2] << endl;
    cout << "Rs 10: " << arry[3] << endl;
    cout << "Rs 5: " << arry[4] << endl;
    cout << "Rs 1: " << arry[5] << endl;
}

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

void nCr(int n, int r)
{
    int ans = fact(n) / fact(r) / fact(n - r);
    cout << ans << endl;
}

int TwoSum(int arr[],int target)
{
    for (int i = 0; i <= (sizeof(arr)/sizeof(arr[0])) ; i+=2)
    {
        int sum = arr[i] + arr[i + 1]; 
        cout<<arr[i]<<" "<<arr[i + 1]<<endl;  
    }
    
}

int main()
{
    int a[3]={1,2,3};
    int b[5]={2,2,3,4,5};
    cout<< sizeof(b)/sizeof(a[0])<<endl;
    TwoSum(b,2);
    return 0;
}