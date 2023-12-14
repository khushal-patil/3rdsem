#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

void move(int j,int h,int &x,int &y){

    if(j==1) y-=h;
    else if(j==2)x+=h;
    else if(j==3)y+=h;
    else if(j==4)x-=h;

    lineto(x,y);
    delay(50);
}

void hilbert(int r, int d,int l,int u,int i,int h,int &x,int &y){

    if(i>0){
        i--;

        hilbert(d,r,u,l,i,h,x,y);
        move(r,h,x,y);

        hilbert(r,d,l,u,i,h,x,y);
        move(d,h,x,y);

        hilbert(r,d,l,u,i,h,x,y);
        move(l,h,x,y);

        hilbert(u,l,d,r,i,h,x,y);
    }
}

int main(){

    int n,x1,y1;
    int x0=150,y0=100,x,y,h=20,r=2,d=3,l=4,u=1;

    cout<<"\nEnter value of n: ";
    cin>>n;

    x=x0;
    y=y0;

    int gd=DETECT,gm=0;
    initgraph(&gd,&gm,NULL);

    moveto(x,y);
    hilbert(r,d,l,u,n,h,x,y);

    delay(5000);
    getch();
    closegraph();
    return 0;

}