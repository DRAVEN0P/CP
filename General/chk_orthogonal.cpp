#include <iostream>
using namespace std;

class Quad
{

    int x[4];
    int y[4];
    

public:
    void input(void);
    void print(void);
    void chk_orthogonal(void);
};

void Quad ::input(void){
    for (int i = 0; i < 4; i++)
    {
        cout << "Coordinate " << i + 1 << endl;
        cout << "Enter First the X axis: ";
        cin >> x[i];
        // cout<<endl;
        cout << "Enter First the Y axis: ";
        cin >> y[i];
        cout << endl;
    }
}

void Quad ::print(void){
    cout << "The Array is" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"("<<x[i]<<','<<y[i]<<")"<<endl;
    
    }
}

void Quad ::chk_orthogonal(void){

    if( (x[1]-x[0])*(x[3]-x[2])+(y[3]-y[2])*(y[1]-y[0]) == 0 )
    {
        cout<<"he given Points are Orthogonal points"<<endl;

    }
    else
        cout<<"The given Points are not Orthogonal "<<endl;
}

int main()
{

    Quad a;
    a.input();
    a.print();
    a.chk_orthogonal();

    return 0;
}