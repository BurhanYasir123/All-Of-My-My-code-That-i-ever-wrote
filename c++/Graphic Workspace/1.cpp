#include <iostream>
#include <graphics.h>

using namespace std;

int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm,(char*)"");
	int d=0;
	delay(200);
	for (int i = 0; i < 361; i++)
	{
		cleardevice();
		for (int j = 0; j < 20; j++)
		{
			arc(320,240,d,i+d,200-(j*10));
			d=d+45+j;
		}
		
		swapbuffers();
		delay(10);
	}
	
	

	
	getch();
	closegraph();
	return 0; 
}