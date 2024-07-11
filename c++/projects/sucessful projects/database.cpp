#include <iostream>

using namespace std;
int datatable[7][14] = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        };
void database(string command)
{
    if(command == "show"){
    for(int j = 0;j != 7;j++){
        for(int k = 0;k != 14;k++){
            cout << datatable[j][k];
        }
     cout<<endl;
    }
    cout<<endl;
   }
}
int main()
{
    int i = 0;
    string input = "";
    while(i < 1){
        cin >> input;
        if(input == "end"){
            i = 1;
        }
        if(input == "show"){
            database("show");
        }
        if(input == "change"){
            cout << "enter a row:";
            int one1;
            cin >> one1;
            cout << "enter a column:";
            int one2;
            cin >> one2;
            cout << "enter a value:";
            int value2;
            cin >> value2;
            one1 = one1 - 1;
            one2 = one2 - 1;
            datatable[one1][one2] = value2;
        }
    }
    return 0;
}
