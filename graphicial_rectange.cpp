#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)""); 
    rectangle(10,50,100,100);
    getch();
    closegraph();
    return 0;
}
