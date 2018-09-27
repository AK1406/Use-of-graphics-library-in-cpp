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
    ellipse(280,80,0,360,30,40);    //face
    ellipse(245,80,0,360,5,10);     //ear
    ellipse(315,80,0,360,5,10);
    setcolor(BROWN);
    line(250,30,305,30);                //hair
    line(250,30,230,60);
    line(305,30,330,60);
    line(230,105,230,60);
    line(330,105,330,60);
    line(230,105,255,105);
    line(330,105,305,105);
    line(260,60,270,60);
    line(290,60,300,60);
    setcolor(WHITE);
    line(275,120,275,134);      //neck
    line(285,120,285,134);
    line(275,134,230,150);       //shoulder
    line(285,134,330,150);
    line(240,175,260,235);      //mid body
    line(320,175,300,235);
    line(260,235,300,235);       //waist
    line(260,235,225,300);        //frock
    line(300,235,340,300);
    line(225,300,340,300);
    line(240,300,255,340);        //left thigh
    line(280,300,270,340);
    line(290,300,305,340);        //right thigh
    line(330,300,320,340);
    arc(259,345,100,240,8);	 //left knee
    arc(315,345,270,90,8);
    arc(310,345,100,240,8);      //right knee
    arc(265,345,270,90,8);
    line(253,350,260,420);      //left leg
    line(270,350,265,420);
    setcolor(GREEN);
    line(260,420,225,445);      //shoe
    line(225,445,270,440);
    line(270,440,265,420);
    line(265,420,260,420);
    setcolor(WHITE);
    line(305,350,310,420);      //right leg
    line(320,350,315,420);
    setcolor(GREEN);
    line(315,420,340,445);      //shoe
    line(340,445,300,440);
    line(300,440,310,420);
    line(310,420,315,420);
    setcolor(WHITE);
    line(230,150,210,190);     //left arm
    line(240,175,230,200);
    line(230,200,235,230);
    line(210,190,230,225);
    ellipse(230,235,0,360,5,15);           //left palm
    ellipse(239,230,0,360,3,5);
    line(330,150,350,190);     //right arm
    line(320,175,335,200);
    line(335,200,330,225);
    line(350,190,335,225);
    ellipse(338,230,0,360,5,15);          //right palm
    ellipse(330,230,0,360,3,5);
    setcolor(YELLOW);
    ellipse(265,70,0,360,4,5);    //eyes
    ellipse(295,70,0,360,4,5);
    setcolor(WHITE);
    line(280,80,280,85);     //nose
      setcolor(RED);              //mouth
  for(int k=0;k<12;k++)
  {
  arc(280,95,180,360,12-k);
  }
  line(430,95,420,70);	 //heart
  line(430,95,445,70);
  line(420,70,410,90);
  line(445,70,455,90);
  line(410,90,429,140);
  line(455,90,429,140);
  for(int i=0;i<5;i++)
  {
    setcolor(i);
    arc(280,140,180,360,20-i);
  }
  setcolor(WHITE);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
  outtextxy(380,100,"I        CODING...");
  outtextxy(400,400,"Especially GRAPHICS");
    getch();
  }
