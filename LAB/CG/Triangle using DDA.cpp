
//317.5,235
#include <graphics.h>
#include <iostream>
#include<math.h>

void dda(float x1,float y1,float x2,float y2)
{
	float xinc,yinc,x,y,dx,dy,len;
	int i;
		
	dx = (x2-x1);
	dy = (y2-y1);
	
	if (dx > dy)
	{
		len = abs(dx);
	}
	else
	{
		len = abs(dy);
	}
	
	x = x1;
	y = y1;
	
	xinc = dx/len;
	yinc = dy/len;
	
	for (i=0; i <= len; ++i)
	{
		putpixel(round(x), round(y), 3);
		x = x + xinc;
		y = y + yinc;
		
	}
	
	
}

int main()
{
	int gd = DETECT,gm;
    initgraph(&gd,&gm,NULL);
	dda(317.5, 135, (317.5-(50*1.73)), 285);
	dda(317.5, 135, (317.5+(50*1.73)), 285);
	dda((317.5-(50*1.73)), 285, (317.5+(50*1.73)), 285);
	delay(10000);
	
	closegraph();
	return 0;


}
