#include <iostream>
#include <graphics.h>

using namespace std;

int rectangles[9999999];


void drawing_manager(){
    for(int i = 0;i!=sizeof(rectangles)/sizeof(rectangles[0]);i++){

    }
}

void rect(int x,int y, int width, int height){
    rectangles[(*(&rectangles + 1) - rectangles)+1] = {{width/2,height/2},width,height};
}

void code(){

}

int main(){
    int gd=DETECT, gm;

    int frame_num = 100;
    int fps = 20;


	// initgraph(&gd, &gm,(char*)"");
    initwindow(700,500);

    for(int i = 0;i!=frame_num;i++){
        

        code();
        drawing_manager();


        swapbuffers();
        delay(1000/fps);
    }


    getch();
	closegraph();
	return 0; 
}