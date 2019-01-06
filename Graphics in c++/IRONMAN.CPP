
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>

void main()
 {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    setcolor(WHITE);
    arc(300,200,25,155,180);
    line(137,122,138,240);
    line(138,240,155,255);
    line(150,250,160,220);
    line(160,220,155,105);
    arc(230,170,80,140,100);
    line(245,70,260,180);
    line(260,180,325,180);
    line(325,180,340,70);
    arc(360,168,30,100,100);
    line(464,122,462,245);
    line(445,115,440,220);
    line(440,220,470,250);
    line(470,250,460,270);
    line(460,260,440,340);
    line(155,255,170,340);
    line(170,340,240,450);
    line(240,450,370,450);
    line(370,450,440,340);
    line(230,430,280,430);
    line(280,430,282,420);
    line(282,420,330,420);
    line(330,420,335,430);
    line(335,430,380,430);
    for(int i=0;i<3;i++)
    {
     ellipse(300,200,200,340,130,50+i);
    }
    for(i=0;i<5;i++)
    {
    line(240,390+i,370,390+i);
    line(240,390+i,230,400);
    line(230,400+i,220,380);
    line(370,390+i,385,400);
   }

    for(i=0;i<8;i++)
    {  // setcolor();
    line(420,220,430-i,225-i);
    line(430,225,420,240+i);
    line(420,240+i,350,265+i);
    line(350+i,265,350,245);

    line(180,218,170+i,220);
    line(170,220,175+i,240+i);
    line(175,240+i,250,260+i);
    line(250,260,250-i,245);
   }
    for(i=0;i<5;i++)
    {
     line(170,250,165,280+i);
     line(430,250,440,280+i);
    }
    for(i=0;i<5;i++)
    {
    line(165,280+i,245,370);
    line(440,280+i,370,380);
    line(240,390,250,430);
    line(250,430,250,450);
    line(370,390,360,430);
    line(360,430,360,450);
    }
    for(i=0;i<3;i++)
    {
    line(160,290,220+i,350);
     line(220,380+i,200,390);
       line(170,125+i,175,210+i);
       line(445,130,435,220+i);
       arc(290,180,60,120,85+i);
       line(190,80+i,190,60+i);
       line(400,80+i,410,60+i);
       line(340,80+i,345,30);
       line(450,300,390,370+i);
       line(390,370+i,390,390+i);
       line(390,390,400,400+i);
       line(390,390,380,400+i);
    ellipse(200+i,390,365,80,20,60);
   }
  for(i=0;i<=100;i++)
  {
   setcolor(i*YELLOW);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
   outtextxy(460,20,"If We Can't");
   outtextxy(480,60,"Protect The");
   outtextxy(500,90,"World...");
   outtextxy(480,120,"You Can Be");
   outtextxy(485,160,"Damn Sure");
   outtextxy(500,190,"We'll");
   outtextxy(490,220,"AVENGE IT !");
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   setcolor(i);
   outtextxy(460,400,"-by TONY STACK");
   setcolor(i);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
   outtextxy(0,40,"Always be");
   outtextxy(0,80,"YOURSELF...");
   outtextxy(0,120,"Unless you");
   outtextxy(0,160,"can be ");
   outtextxy(20,200,"BATMAN...");
   outtextxy(0,240,"Then be");
   outtextxy(20,280,"IRONMAN....");
    delay(100);
  }



    getch();
 }

