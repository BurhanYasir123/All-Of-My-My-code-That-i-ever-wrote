#include <iostream>

using namespace std;
    string memad1 = "0000";
    string memad2 = "0000";
    string memad3 = "0000";
    string memad4 = "0000";
    string memad5 = "0000";
    string memad6 = "0000";
    string memad7 = "0000";
    string memad8 = "0000";
    string memad9 = "0000";
    string memad10 = "0000";
    string memad11 = "0000";
    string memad12 = "0000";
    string memad13 = "0000";
    string memad14 = "0000";
    string memad15 = "0000";
string RAM(string address,string data){
    if(address == "0001"){
        memad1 = data;
    }
    if(address == "0010"){
        memad2 = data;
    }
    if(address == "0011"){
        memad3 = data;
    }
    if(address == "0100"){
        memad4 = data;
    }
    if(address == "0101"){
        memad5 = data;
    }
    if(address == "0110"){
        memad6 = data;
    }
    if(address == "0111"){
        memad7 = data;
    }
    if(address == "1000"){
        memad8 = data;
    }
    if(address == "1001"){
        memad9 = data;
    }
    if(address == "1010"){
        memad10 = data;
    }
    if(address == "1011"){
        memad11 = data;
    }
    if(address == "1100"){
        memad12 = data;
    }
    if(address == "1101"){
        memad13 = data;
    }
    if(address == "1110"){
        memad14 = data;
    }
    if(address == "1111"){
        memad15 = data;
    }
}

int main(){
    string input = "000000000000";
    int counter = 0;
    int toggle = 0;
    int one = 0;
    string two = "";
    string three = "";
    int a = 0;
    int b = 0;

    while(toggle!=1){
        cin >> input;
        if(input == "end"){
            toggle = 1;
        }
        if(input == "0001"){
            a = a + b;
        }
        if(input == "0010"){
            a = a - b;
        }
        if(input == "0011"){
            a = a * b;
        }
        if(input == "0100"){
            a = a / b;
        }
        if(input == "0101"){
            b = a;
            a = 0;
        }
        if(input == "0110"){
            a = b;
            b = 0;
        }
        if(input == "0111"){
            cout <<"enter a value to set a:";
            cin >> one;
            a = one;
        }
        if(input == "1000"){
            cout << "enter a value to set b:";
            cin >> one;
            b = one;
        }
        if(input == "1001"){
            cout << "select a memory address:";
            cin >> two;
            cout << "what value you want to put in it:";
            cin >> three;
            RAM(two,three);
        }
        if(input == "1010"){
            counter = counter - 1;     
        }
        if(input == "1011"){
            counter = counter + 1;
        }
        if(input == "1100"){
            counter = 0;
        }
        if(input == "1111"){
            cout << a << endl;
            cout << b << endl;
            cout << counter << endl;
            cout << memad1 << endl;
            cout << memad2 << endl;
            cout << memad3 << endl;
            cout << memad4 << endl;
            cout << memad5 << endl;
            cout << memad6 << endl;
            cout << memad7 << endl;
            cout << memad8 << endl;
            cout << memad9 << endl;
            cout << memad10 << endl;
            cout << memad11 << endl;
            cout << memad12 << endl;
            cout << memad13 << endl;
            cout << memad14 << endl;
            cout << memad15 << endl;
        }
    }
}