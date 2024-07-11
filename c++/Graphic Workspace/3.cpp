#include <iostream>
#include <graphics.h>

using namespace std;

int q = 1;

int main(){
    int gd=DETECT, gm;
	initgraph(&gd, &gm,(char*)"");

    for (int i = 0; i < 50*2; i++)
    {
        line((450/3)-50,380+(i*q),(160*3)+50,0+(i*q));
        line(100,380+(i*q),0,380+(i*q));
        line(530,0+(i*q),700,0+(i*q));
        swapbuffers();
        delay(20);
    }

    getch();
	closegraph();
	return 0; 
}