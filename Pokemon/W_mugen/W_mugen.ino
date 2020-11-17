//通信対戦で日付変更できるモードにしておく
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
    SwitchControlLibrary().PressButtonA();
    delay(100);
    SwitchControlLibrary().ReleaseButtonA();
    delay(100);
    for (int i =0; i<25; i++){
      SwitchControlLibrary().PressButtonB();
      delay(50);
      SwitchControlLibrary().ReleaseButtonB();
      delay(100);
    }
    delay(400);
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
