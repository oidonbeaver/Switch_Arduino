//通信対戦で日付変更できるモードにしておく
//きのみを一回だけ揺らす
#include <SwitchFunctions.h>
int loopnum=0;
void setup() {

SwitchControlLibrary().PressButtonB();
delay(50);
SwitchControlLibrary().ReleaseButtonB();
delay(100);
SwitchControlLibrary().PressButtonB();
delay(50);
SwitchControlLibrary().ReleaseButtonB();
delay(100);
SwitchControlLibrary().PressButtonB();
delay(50);
SwitchControlLibrary().ReleaseButtonB();
delay(8000);
SwitchControlLibrary().PressButtonB();
delay(50);
SwitchControlLibrary().ReleaseButtonB();
delay(100);
SwitchControlLibrary().PressButtonB();
delay(50);
SwitchControlLibrary().ReleaseButtonB();
}

void loop() {
    delay(600);
    for (int i=0; i<3; i++){
      SwitchControlLibrary().PressButtonA();
    delay(70);
    SwitchControlLibrary().ReleaseButtonA();
    delay(500);
      
    }
    
    for (int i =0; i<30; i++){
      SwitchControlLibrary().PressButtonB();
      delay(70);
      SwitchControlLibrary().ReleaseButtonB();
      delay(210);
    }
    delay(700);
    changeday();
    delay(200);
    loopnum++;
  //こまめにレポートを書く
    if (loopnum>30){
    delay(300);
    report();
    loopnum=0;
    }
 
  
 
}
