#include <iostream>
#include<string>
using namespace std;

class binary{

    string s;
    void chk_bin(void);

    public:
        void input (void);
        void ones_compliment(void);
        void display(void);

};
void binary :: input(void){
    cout<<"Enter the String: "<<endl;
    cin>>s;
    
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }

    
}
void binary :: ones_compliment(void){

    chk_bin();

    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
        

    }
    cout<<"The Compliment of the binary: "<<s<<endl;


}


int main(){


    binary b;
    b.input();
    b.ones_compliment();
    
    
    


    
    return 0;
}