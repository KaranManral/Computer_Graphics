#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;             // initalize graphics drivers and graphics mode
    initgraph(&gd, &gm, (char *)""); // initialize graph
    int xc, yc, x, y, r, d;
    cout << "\n\n______________________Mid Point circle Drawing    Algorithm___________________________\n\n";
    cout << "Enter co-ordinates of Center of Circle -> ";
    cin >> xc >> yc;
    cout << "Enter Radius of Circle -> ";
    cin >> r;
    d = (5 / 4) - r;
    x = 0;
    y = r;
    while (x <= y)
    {
        putpixel(xc + x, yc + y, GREEN);
        putpixel(xc - x, yc + y, GREEN);
        putpixel(xc - x, yc - y, GREEN);
        putpixel(xc + x, yc - y, GREEN);
        putpixel(xc + y, yc + x, GREEN);
        putpixel(xc + y, yc - x, GREEN);
        putpixel(xc - y, yc - x, GREEN);
        putpixel(xc - y, yc + x, GREEN);
        if (d < 0)
        {
            d = d + 2 * x + 3;
        }
        else
        {
            d = d + 2 * (x - y) + 5;
            y = y - 1;
        }
        x = x + 1;
    }
    getch();
    closegraph();
}
