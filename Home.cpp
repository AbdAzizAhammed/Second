#include<iostream>
#include<graphics.h>

int main()

{
    int gd=DETECT,gm;

    initgraph(&gd, &gm, "");
    initwindow(1080,720,"HOME ");


    setcolor(WHITE);
    rectangle(0,400,1075,700);
    setfillstyle(1,GREEN);
    floodfill(10,405,WHITE);

    setcolor(BLUE);
    rectangle(0,0,1075,400);
    setfillstyle(1,WHITE);
    floodfill(11,30,BLUE);

    setcolor(BLUE);
    line(350,150,650,150);
    line(350,150,400,250);
    line(650,150,700,230);
    line(400,250,700,230);
    setfillstyle(5,GREEN);
    floodfill(360,151,BLUE);

    line(350,150,300,250);
    line(400,250,400,400);
    line(300,250,300,400);
    line(700,230,700,400);


    setcolor(BLUE);
    line(320,265,370,265);
    line(320,265,320,315);
    line(370,265,370,315);
    line(320,315,370,315);
    setfillstyle(7,GREEN);
    floodfill(330,266,BLUE);

    setcolor(BLUE);
    line(540,300,540,400);
    line(540,300,580,300);
    line(580,300,580,400);
    line(530,400,580,400);
     setfillstyle(8,MAGENTA);
    floodfill(550,301,BLUE);

    setcolor(BLUE);
    line(440,320,480,320);
    line(480,320,480,360);
    line(440,320,440,360);
    line(440,360,480,360);
    setfillstyle(5,YELLOW);
    floodfill(450,321,BLUE);

     setcolor(BLUE);
     line(620,320,660,320);
     line(620,320,620,360);
     line(660,320,660,360);
     line(620,360,660,360);
     setfillstyle(5,YELLOW);
     floodfill(630,321,BLUE);

     line(210,250,210,400);
     line(190,250,190,400);

      setcolor(BLUE);
     ellipse(200,182,0,360,40,75);
       setfillstyle(1,GREEN);
       floodfill(205,183,BLUE);

       setcolor(BLUE);
       circle(720,80,40);
       setfillstyle(1,YELLOW);
       floodfill(725,83,BLUE);

       line(649,74,670,78);
       line(652,80,670,80);
       line(696,36,692,21);
       line(694,36,689,21);
       line(694,36,691,22);
       line(700,36,695,24);
       line(702,36,697,19);
       line(702,35,697,19);
       line(705,35,700,20);
       line(705,35,705,20);
       line(708,35,708,20);
       line(700,35,700,20);
       line(710,35,710,20);
       line(712,35,712,20);
       line(717,35,717,20);
       line(715,35,715,20);
       line(720,35,720,20);
       line(722,35,723,20);
       line(725,35,728,20);
       line(727,35,730,20);
       line(726,36,736,23);
       line(727,36,738,25);
       line(727,36,740,28);
       line(732,37,744,29);
       line(734,37,748,31);
       line(734,37,748,33);
       line(734,37,748,30);

       line(735,25,748,20);
       line(736,28,749,23);
       line(738,30,750,23);
       line(738,34,750,23);
       line(740,36,750,23);
       line(740,38,752,26);
       line(743,40,754,28);
       line(745,42,756,30);
       line(748,42,758,30);
       line(748,42,758,32);
       line(750,43,760,34);
       line(750,45,762,36);
       line(752,48,762,36);
       line(752,48,763,39);
       line(755,48,765,42);
       line(755,50,766,43);
       line(758,51,768,45);
       line(759,53,769,47);
       line(760,56,770,49);
       line(760,59,770,53);
       line(762,61,772,55);
       line(762,63,772,57);
       line(763,66,774,60);
       line(763,69,774,63);
       line(764,70,776,65);
       line(764,72,776,68);
       line(765,74,780,68);
       line(764,76,780,72);
       line(765,78,780,74);
       line(765,80,780,80);
       line(765,82,780,87);
       line(765,85,780,90);

    getch();
    closegraph();
    return 0;
}

