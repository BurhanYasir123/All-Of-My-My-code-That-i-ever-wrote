#include <iostream>

using namespace std;

int main()
{
    int stop = 0;
    string ins = "";
    string bus = "0000";
    string A = "0000";
    string B = "0000";
    string memad1 = "0000";
    string memad2 = "0000";
    string memad3 = "0000";
    string memad4 = "0000";
    while(stop!=1){
        cin>>ins;
        string insins = ins.substr(0,4);
        if(ins == "break"){
            stop = 1;
        }
        if(insins == "0001"){
            string other = ins.substr(4,4);
            A = other;
            other = "";
        }
        if(insins == "0010"){
            string other = ins.substr(4,4);
            B = other;
            other = "";
        }
        if(insins == "0011"){
            bus = A;
        }
        if(insins == "0100"){
            bus = B;
        }
        if(insins == "0101"){
            A=bus;
        }
        if(insins == "0110"){
            B=bus;
        }
        if(insins == "11111"){
            A = A + B;
        }
    if(insins == "0111"){
	string memad = ins.substr(4,4);
	string data = ins.substr(8,4);
	if(memad == "0001"){
		memad1 = data;
	}
	if(memad == "0010"){
		memad2 = data;
	}
	if(memad == "0011"){
		memad3 = data;
	}
	if(memad == "0100"){
		memad4 = data;
	}
}
        if(ins == "1111"){
            cout << "bus:" <<bus <<endl;
            cout << "a:"<<A <<endl;
            cout << "b:"<<B <<endl;
            cout << "memad1:"<<memad1 <<endl;
            cout << "memad2:"<<memad2 <<endl;
            cout << "memad3:"<<memad3 <<endl;
            cout << "memad4:"<<memad4 <<endl;
        }


    }
    return 0;
}
