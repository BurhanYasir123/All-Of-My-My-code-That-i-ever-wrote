#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int x = 0;
    int y = 0;
    int grid[7][14] = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    };
    for(int i=0;i!=100;i++){
        x = x + 1;
        if(x == 15){
            x = 0;
            y = y + 1;
        }
        sum = y-x;
        if(sum == 0){
            grid[y][x] = 1;
        }
        for(int j=0;j!=7;j++){
            for(int k=0;k!=14;k++){
                cout << grid[j][k];
            }
            cout << endl;
        }
        cout << sum << endl;
        cout << endl;
    }
}