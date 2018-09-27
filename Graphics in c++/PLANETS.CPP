#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>

void main()
 {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    setcolor(YELLOW);
    ellipse(100,200,0,360,1000,180);
    ellipse(100,200,0,360,600,150);
    ellipse(100,200,0,360,500,100);
    ellipse(100,200,0,360,400,50);
    ellipse(100,200,0,360,250,30);
    ellipse(100,200,0,360,210,10);
    setcolor(RED);
    circle(1,200,100);
    setfillstyle(SOLID_FILL,RED);
    floodfill(30,200,RED);
    setcolor(BLACK);
    settextstyle(3,0,4);
    outtextxy(20,180,"SUN");
    setcolor(LIGHTRED);
    circle(300,190,10);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(300,190,LIGHTRED);
    setcolor(WHITE);
    settextstyle(3,0,2);
    outtextxy(200,160,"Mercury");
    setcolor(BROWN);
    circle(200,279,20);
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(200,279,BROWN);
    setcolor(WHITE);
    settextstyle(3,0,2);
    outtextxy(200,300,"Mars");
    setcolor(BLUE);
    setcolor(7);
    for(int k=0;k<80;k++)
   {
    arc(400,50,360,180,60-k);
   }
   setcolor(BROWN);
    ellipse(400,50,0,360,100,10);
    ellipse(400,50,0,360,130,20);
   setfillstyle(SOLID_FILL,BROWN);
   floodfill(490,42,BROWN);
  setcolor(7);
  for(k=0;k<80;k++)
  {
  arc(400,50,180,360,60-k);
  }
  setcolor(BLACK);
    settextstyle(3,0,2);
    outtextxy(365,40,"Saturn");
    setcolor(BLUE);
   setcolor(YELLOW);
  for(k=0;k<80;k++)
  {
  arc(550,285,180,360,80-k);
  }
    for(k=0;k<80;k++)
   {
    arc(550,285,360,180,80-k);
   }
   setcolor(BLACK);
    settextstyle(3,0,4);
    outtextxy(500,260,"Jupiter");
    setcolor(BLUE);
    setcolor(LIGHTBLUE);
    circle(350,190,20);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(350,190,LIGHTBLUE);
    setcolor(WHITE);
    settextstyle(3,0,2);
    outtextxy(340,205,"Venus");
    setcolor(BLUE);
    circle(480,175,30);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(480,175,BLUE);
    setcolor(WHITE);
    settextstyle(3,0,2);
    outtextxy(500,160,"Earth");
    setcolor(BLUE);
    setcolor(WHITE);
    settextstyle(1 ,0,5);
    outtextxy(170,400,"SOLAR SYSTEM");
    setcolor(BLUE);

     for(int i=10;i<1000,!kbhit();i++)
    {
      putpixel(random(getmaxx()),random(getmaxy()),random(i));
      setcolor(i);
      delay(80);
    }


    getch();
 }