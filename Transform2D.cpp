#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

void translation()
{
    cout << "\n\n\n\t\t\t---------->Performing TRANSLATION OF FIGURE...............\n ";
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3, dx, dy;
    initwindow(1240, 900);
    // initgraph(&gd, &gm, (char *)"");
    cout << "\n\n\t\t\tEnter coordinates of A -> ";
    cin >> x1 >> y1;
    cout << "\n\n\t\t\tEnter coordinates of B -> ";
    cin >> x2 >> y2;
    cout << "\n\n\t\t\tEnter coordinates of C -> ";
    cin >> x3 >> y3;
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    cout << "\n\n\t\t\tEnter translating factor for x -> ";
    cin >> dx;
    cout << "\n\n\t\t\tEnter translating factor for y -> ";
    cin >> dy;
    setcolor(GREEN);
    line(x1 + dx, y1 + dy, x2 + dx, y2 + dy);
    line(x2 + dx, y2 + dy, x3 + dx, y3 + dy);
    line(x3 + dx, y3 + dy, x1 + dx, y1 + dy);
    getch();
    closegraph();
}

void rotation()
{
    cout << "\n\n\n\t\t\t---------->Performing ROTATION OF FIGURE...............\n ";
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3;
    double s, c, A; // s->Sine c->Cos A->Angle of Rotation
    initwindow(1240, 900);
    // initgraph(&gd, &gm, (char *)"");
    cout << "\n\n\t\t\tEnter coordinates of A -> ";
    cin >> x1 >> y1;
    cout << "\n\n\t\t\tEnter coordinates of B -> ";
    cin >> x2 >> y2;
    cout << "\n\n\t\t\tEnter coordinates of C -> ";
    cin >> x3 >> y3;
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    cout << "\n\nEnter the angle through which you want to Rotate -> ";
    cin >> A;
    c = cos(A * 3.14 / 180);
    s = sin(A * 3.14 / 180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    x3 = floor(x3 * c + y3 * s);
    y3 = floor(-x3 * s + y3 * c);
    setcolor(GREEN);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();
}

void scaling()
{
    cout << "\n\n\n\t\t\t---------->Performing SCALING OF FIGURE...............\n ";
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3, dx, dy; // dx and dy scaling factor in x and y direction respectively.
    initwindow(1240, 900);
    // initgraph(&gd, &gm, (char *)"");
    cout << "\n\n\t\t\tEnter coordinates of A -> ";
    cin >> x1 >> y1;
    cout << "\n\n\t\t\tEnter coordinates of B -> ";
    cin >> x2 >> y2;
    cout << "\n\n\t\t\tEnter coordinates of C -> ";
    cin >> x3 >> y3;
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    cout << "\n\n\t\t\tEnter scaling factor for x -> ";
    cin >> dx;
    cout << "\n\n\t\t\tEnter scaling factor for y -> ";
    cin >> dy;
    setcolor(GREEN);
    line(x1 * dx, y1 * dy, x2 * dx, y2 * dy);
    line(x2 * dx, y2 * dy, x3 * dx, y3 * dy);
    line(x3 * dx, y3 * dy, x1 * dx, y1 * dy);
    getch();
    closegraph();
}
int main()
{
    cout << "\n\n\t-------------------------------------2-D TRANFORMATIONS -------------------------------\n\n\n";
    char ch = 'y';
    int n;
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\n\n\t\t1.)TRANSLATION."
             << "\n\n\t\t2.)ROTATION."
             << "\n\n\t\t3.)SCALING.";
        cout << "\n\n\t------------->Enter your choice -> ";
        cin >> n;
        if (n == 1)
        {
            translation();
        }
        else if (n == 2)
        {
            rotation();
        }
        else if (n == 3)
        {
            scaling();
        }
        else
        {
            cout << "\n\nWrong choice entered by User!.......";
        }
        cout << "\n\nEnter Y/y for continue the 2-D TRANFORMATIONS.......... -> ";
        cin >> ch;
    }
    return 0;
}
