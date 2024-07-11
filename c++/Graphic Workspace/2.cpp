#include <iostream>
#include <graphics.h>

using namespace std;

int fps = 30;


int main(){
    int gd=DETECT, gm;
	initgraph(&gd, &gm,(char*)"");

    delay(500);
    int ax = 0;
    int ay = 0;
    int bx = 100;
    int by = 450;
    int w = fps/10;
    for (int i = 0; i < 50*w; i++)
    {
        cleardevice();
        for (int j = 0; j < 500; j++)
        {
            line(ax,ay,bx+(j),by);
        }
        ay = ay + 10/w;
        by = by - 10/w;
        swapbuffers();
        delay(100/w);
    }
    
    

    getch();
	closegraph();
	return 0; 
}