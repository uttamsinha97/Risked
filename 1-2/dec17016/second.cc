
#ifndef _INC_WCONSOLE    //don't let this file be included
#define _INC_WCONSOLE    //twice in the same source file

#include <windows.h>     //for Windows console functions
#include <conio.h>       //for kbhit(), getche()
#include <math.h>        //for sin, cos

enum fstyle { SOLID_FILL, X_FILL,      O_FILL,
              LIGHT_FILL, MEDIUM_FILL, DARK_FILL };

enum color {
   cBLACK=0,     cDARK_BLUE=1,    cDARK_GREEN=2, cDARK_CYAN=3,
   cDARK_RED=4,  cDARK_MAGENTA=5, cBROWN=6,      cLIGHT_GRAY=7,
   cDARK_GRAY=8, cBLUE=9,         cGREEN=10,     cCYAN=11,
   cRED=12,      cMAGENTA=13,     cYELLOW=14,    cWHITE=15 };
//--------------------------------------------------------------
void init_graphics();
void set_color(color fg, color bg = cBLACK);
void set_color(int fg, int  bg = 0);
void set_cursor_pos(int x, int y);
void clear_screen();
void wait(int milliseconds);
void clear_line();
void draw_rectangle(int left, int top, int right, int bottom);
void draw_circle(int x, int y, int rad);
void draw_line(int x1, int y1, int x2, int y2);
void draw_pyramid(int x1, int y1, int height);
void set_fill_style(fstyle);
void set_fill_style(char);
#endif /* _INC_WCONSOLE */


class circle
{
protected:
    int xco,yco;
    int radius;
    color fillcolor;
    fstyle fillstyle;
public:
    void set(int x,int y,int r,color fc,fstyle fs)
    {
        xco=x;
        yco=y;
        radius=r;
        fillcolor=fc;
        fillstyle=fs;
    }
    void draw ()
    {
        set_color(fillcolor);
        set_fill_style(fillstyle);
        draw_circle(xco,yco,radius);
    }
};
int main()
{
    void init_graphics();
    circle c1,c2,c3;
    c1.set(10,5,2,cDARK_RED,X_FILL);
    c2.set(11,3,3,cBLUE,X_FILL);
    c3.set(15,6,3,cYELLOW,MEDIUM_FILL);
    c1.draw();
    c2.draw();
    c3.draw();
    //set_cursor_pos(2,23);
    return 0;

}
