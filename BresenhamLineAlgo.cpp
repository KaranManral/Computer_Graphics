#include <iostream>
#include <graphics.h>
#include <stdlib.h>
using namespace std;
void bresenham(int x, int y, int x2, int y2)
{
    int dx, dy;
    int p;
    dx = (x2 - x);
    dy = (y2 - y);
    p = 2 * dy - dx;

    if (dx >= 0 & dy >= 0)
    {
        if (dy > dx)
        {
            if (dx == 0)
            {
                while (y <= y2)
                {
                    putpixel(x, y, GREEN);
                    y++;
                    if (p < 0)
                    {
                        p = p + 2 * dy;
                    }
                    else
                    {
                        p = p + 2 * dy - 2 * dx;
                    }
                }
            }
            else
            {
                while (x <= x2)
                {
                    putpixel(x, y, GREEN);
                    x++;
                    if (p < 0)
                    {
                        p = p + 2 * dy;
                    }
                    else
                    {
                        p = p + 2 * dy - 2 * dx;
                        y++;
                    }
                }
            }
        }
        else if (dx > dy)
        {
            while (x <= x2)
            {
                putpixel(x, y, GREEN);
                x++;
                if (p < 0)
                {
                    p = p + 2 * dy;
                }
                else
                {
                    p = p + 2 * dy - 2 * dx;
                    y++;
                }
            }
        }
    }
    else if (dy < 0 || dx < 0)
    {
        swap(x, x2);
        swap(y, y2);
        while (x > x2)
        {
            putpixel(x, y, GREEN);
            x--;
            if (p < 0)
            {
                p = p - 2 * dy;
            }
            else
            {
                p = p - 2 * dy - 2 * dx;
                y++;
            }
        }
    }
}
int main()
{
    cout << "\n\n--------------------- BRESENHAM'S LINE  DRAW ALGORITHM --------------------- ";
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char *)"");
    int x1, x2, y1, y2, num;

    cout << "\n\n\nENTER THE COORDINATES VALUES x1, y1 :: ";
    cin >> x1 >> y1;
    cout << "\nENTER THE COORDINATES VALUES x2, y2 :: ";
    cin >> x2 >> y2;
    bresenham(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}
