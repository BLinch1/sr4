#include<iostream>
using namespace std;

int main(){
    bool A=1;
    bool B=1;
    bool C;
    cout<< "Intput boolean numbers (0,1): ";
    cin >A >B;
    C = (!B &&(!A||B));
    cout<< C << "\n";
    system("pause");
    return 0;
}

