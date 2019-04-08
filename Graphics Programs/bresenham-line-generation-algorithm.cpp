#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void bresenham(int x1, int y1, int x2, int y2)
{
    int m_new = 2 * (y2 - y1);
    int slope_error_new = m_new - (x2 - x1);
    for (int x = x1, y = y1; x <= x2; x++)
    {
        putpixel(x, y, WHITE);
        delay(30);
        slope_error_new += m_new;
        if (slope_error_new >= 0)
        {
            y++;
            slope_error_new -= 2 * (x2 - x1);
        }
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, "");

    int x1 = 20, y1 = 20, x2 = 250, y2 = 250;
    bresenham(x1, y1, x2, y2);

    x1 = 80, y1 = 20, x2 = 310, y2 = 300;
    bresenham(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}