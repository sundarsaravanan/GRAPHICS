#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main(){

int gd,gm,i=1;
int lbu,lbl,fw,bw,ubu,ubl;
int fwu,fwl,bwu,bwl;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
setcolor(5);

setbkcolor(WHITE);
setcolor(5);
while(i<4){
  for(lbu=0;lbu<500;lbu++){
    delay(5);
    cleardevice();
    if(i==1){
      outtextxy(250,150,"Leaving...");
      rectangle(0,100,200,345);
      outtextxy(20,150,"Office");
    }
    if(i==2){
      outtextxy(250,150,"Bore Ride...");
    }
    if(i==3&lbu<450){
      outtextxy(250,150,"10 min to reach");
    }
    lbl=lbu+200;
    ubu=lbu+50;
    ubl=lbu+150;
    fwu =lbu+55;
    fwl =lbu+95;
    bwu=lbu+105;
    bwl=lbu+145;
    fw=lbu+50;
    bw=lbu+150;
    //lower portion
    rectangle(lbu,250,lbl,320);
    //upper portion
    rectangle(ubu,200,ubl,250);
    //front window
    rectangle(fwu,205,fwl,245);
    //back window
    rectangle(bwu,205,bwl,245);
    //back wheel
    circle(bw,320,25);
    //front wheel
    circle(fw,320,25);
    line(0,345,700,345);
    if(i==3){
      rectangle(450,100,700,345);
      outtextxy(500,150,"Home Sweet Home");
    }
    if(i==3&lbu>450){
      outtextxy(250,150,"Reached...");
    }
  }
  i++;
  }
getch();
closegraph();
}
