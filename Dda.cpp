Algorithm DDA (x1,y1,x2,y2)
{
dx = x2-x1
dy = y2-y1

if (abs (dx) > abs (dy)) 
step = abs (dx);
else
step= abs (dy);
xinc= dx/step;

yinc= dy/step;
 for (i=1;i<=step; i++)
{
putpixel (x1, y1);

x1 = x1+ xinc
y1 = y1+yinc
}
}