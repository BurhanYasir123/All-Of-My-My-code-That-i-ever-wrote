#include <iostream>

using namespace std;

string input = "";

void compiler(){
    if(input == "echo"){
        string input = "";
        cin >> input;
        cout << input << endl;        
    }
    if(input == "add"){
        int one = 0;
        int two = 0;
        cin >> one;
        cin >> two;
        cout << one + two << endl;
    }
}

int main()
{
    int l = 0;
    
    while(l!=1){
        cin >> input;
        if(input == "end"){
            l = 1;
        }
        compiler();
    }
}