#include <iostream>
#include <graphics.h>

using namespace std;

int main(){
    int gd=DETECT, gm;
	initgraph(&gd, &gm,(char*)"");


    for(int j = 0;j<485;j++){
        for(int i = 0;i<650;i++){
            line(i,j,325,485);
        }
        swapbuffers();
        // delay(1);

    }

    getch();
	closegraph();
	return 0; 
}