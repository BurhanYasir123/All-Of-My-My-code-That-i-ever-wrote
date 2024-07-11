#include <iostream>

using namespace std;
   
    string input = "";
    int grid[7][14] = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    };    
void show(){
            for(int j=0;j!=7;j++){
                for(int k=0;k!=14;k++){
                    cout << grid[j][k];
                }
                cout << endl;
            }
}    
int main(){
    int y = 0;
    int x = 0;
    for(int i=0;i!=999999;i++){
        cin >> input;
        if(input == "show"){
            show();
        }
        if(input == "w"){
            grid[y][x] = 0;
            y = y - 1;
            grid[y][x] = 1;
            show();
        }
        if(input == "a"){
            grid[y][x] = 0;
            x = x - 1;
            grid[y][x] = 1;
            show();
        }
        if(input == "s"){
            grid[y][x] = 0;
            y = y + 1;
            grid[y][x] = 1;
            show();
        }
        if(input == "d"){
            grid[y][x] = 0;
            x = x + 1;
            grid[y][x] = 1;
            show();
        }
    }
}