#include <iostream>

using namespace std;

void print(int input){
    cout << input << endl;
}
int arithmetic(string oprand,int a1,int b1){
    if(oprand == "+"){
        a1 =  a1 + b1;
    }
    if(oprand == "-"){
        a1 =  a1 - b1;
    }
    if(oprand == "*"){
        a1 =  a1 * b1;
    }
    if(oprand == "/"){
        a1 =  a1 / b1;
    }
    return a1;
}


void script(){
    print(arithmetic("+",987,5));
}

int main(){
    script();
}
