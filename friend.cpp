#include<iostream>
using namespace std;

class Pritam {

private : int x;

public : Pritam(int a){
    x=a;
}

friend void display(Pritam obj);
} ;

void display(Pritam obj){
    cout<<obj.x;
}


int main(){

    Pritam p=Pritam(10);
    display(p);
    return 0;
}