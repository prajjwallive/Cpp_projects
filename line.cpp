#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gm = DETECT, gd;
    initgraph(&gm, &gd, (char *)"");
    line(150,150,450,150);
    getch();
    closegraph();
    return 0;
}