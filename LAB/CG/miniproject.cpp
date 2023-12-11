#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<direct.h>

int main(){
   int i=0,j=26,k=30,l=150,m=90;
   int n=230,o=10,p=280,q=220;
   float pi=3.1424,a,b,c,d,e,f,g,h,z;
   int gd=DETECT,gm=0;
   initgraph(&gd,&gm,NULL);
   outtextxy(0,10,"Solar System");
   outtextxy(500,10,"press any key");
   circle(340,240,20);
   setfillstyle(1,4);

   outtextxy(320,237,"SUN");
   circle(260,240,8);
   setfillstyle(1,2);
   floodfill(258,240,14);
   floodfill(262,240,14);

    outtextxy(240,220,"MERCURY");
    circle(320,300,12);
    setfillstyle(1,1);
    floodfill(320,298,15);
    floodfill(320,302,15);

    outtextxy(335,300,"VENUS");
    circle(320,160,10);
    setfillstyle(1,5);
    floodfill(320,161,15);
    floodfill(320,159,15);

    outtextxy(332,150,"EARTH");
    circle(453,300,11);
    setfillstyle(1,6);
    floodfill(445,300,15);
    floodfill(348,309,15);

    outtextxy(458,280,"MARS");
    circle(520,240,14);
    setfillstyle(1,7);
    floodfill(519,240,15);
    floodfill(521,257,15);

    outtextxy(500,257,"JUPITER");
    circle(169,122,12);
    setfillstyle(1,12);
    floodfill(159,125,15);
    floodfill(175,125,15);

    outtextxy(130,137,"SATURN");
    circle(320,420,9);
    setfillstyle(1,13);
    floodfill(320,417,15);
    floodfill(320,423,15);

    outtextxy(310,400,"URANUS");
    circle(40,240,9);
    setfillstyle(1,10);
    floodfill(33,240,15);
    floodfill(42,240,15);

    outtextxy(25,220,"NEPTUNE");
    circle(150,420,7);
    setfillstyle(1,14);
    floodfill(150,419,15);
    floodfill(149,422,15);

    outtextxy(120,430,"PLUTO");
    getch();
    while(!kbhit()){
        a=(pi/180*i);
        b=(pi/180*j);
        c=(pi/180*k);
        d=(pi/180*l);
        e=(pi/180*m);
        f=(pi/180*n);
        g=(pi/180*o);
        h=(pi/180*p);
        z=(pi/180*q);

        cleardevice();
        circle(320,240,20);
        setfillstyle(1,14);
        floodfill(320,240,15);
        outtextxy(306,232,"SUN");

        circle(320+60*sin(a),240-35*cos(a),8);
        setfillstyle(1,2);
        pieslice(320+60*sin(a),240-35*cos(a),0,360,8);

        circle(320+100*sin(b),240-60*cos(b),12);
        setfillstyle(1,1);
        pieslice(320+100*sin(b),240-60*cos(b),0,360,12);

        circle(320+130*sin(c),240-80*cos(c),10);
        setfillstyle(1,5);
        pieslice(320+130*sin(c),240-80*cos(c),0,360,10);

        circle(320+170*sin(d),240-100*cos(d),11);
        setfillstyle(1,6);
        pieslice(320+170*sin(d),240-100*cos(d),0,360,11);
     
        circle(320+200*sin(e),240-130*cos(e),14);
        setfillstyle(1,7);
        pieslice(320+200*sin(e),240-130*cos(e),0,360,14);

        circle(320+230*sin(f),240-155*cos(f),12);
        setfillstyle(1,12);
        pieslice(320+230*sin(f),240-155*cos(f),0,360,12);

        circle(320+260*sin(g),240-180*cos(g),9);
        setfillstyle(1,13);
        pieslice(320+260*sin(g),240-180*cos(g),0,360,9);

        circle(320+280*sin(h),240-200*cos(h),9);
        setfillstyle(1,10);
        pieslice(320+280*sin(h),240-200*cos(h),0,360,9);

        circle(320+300*sin(z),240-220*cos(z),8);
        setfillstyle(1,14);
        pieslice(320+300*sin(z),240-220*cos(z),0,360,8);
    
        delay(20);
        i++;
        j++;
        k++;
        l++;
        m++;
        n++;
        o++;
        p++;
        q+=2;
    
    }
    getch();
    return 0;
}