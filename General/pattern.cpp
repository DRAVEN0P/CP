#include <iostream>
using namespace std;

int input()
{
    int num;
    cout << "Enter No of Rows: ";
    cin >> num;
    return num;
}

// ALL the patterns 
void pattern1(int num)
{
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern2(int num)
{
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void pattern3(int num)
{
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            /* code */
            cout << j
                 << " ";
        }
        cout << endl;
    }
}

void pattern4(int num)
{
    
    for (int i = 1; i < num+1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << i
                 << " ";
        }
        cout << endl;
    }
}

void pattern5(int num)
{
    
    for (int i = num; i >0; i--)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
  
}

void pattern7(int num)
{
    for (int i = 0; i<num; i++)
    {
        for (int j = 0; j < num -i-1 ; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < (2*i)+1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < num -i-1 ; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
}
void pattern8(int num)
{
    for (int i = num-1; i >=0; i--)
    {
        for (int j = 0; j < num -i-1 ; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < (2*i)+1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < num -i-1 ; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
}

void pattern9(int num)
{
    pattern7(num);
    pattern8(num);
}

void pattern10(int num)
{
    pattern2(num);
    for (int i = num-1; i >0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
    
}

int main()
{
    int a = input();
    pattern10(a);

    return 0;
}

