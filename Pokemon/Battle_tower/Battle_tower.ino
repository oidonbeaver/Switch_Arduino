//ちょいらくモードしないにしておく
//https://azukiss.hatenablog.com/entry/2020/01/26/095522
#include <SwitchFunctions.h>

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
  //AAAA
  for (int i=0; i<4; i++){
    SwitchControlLibrary().PressButtonA();
    delay(70);
    SwitchControlLibrary().ReleaseButtonA();
    delay(1200);
  }
  //↑
  SwitchControlLibrary().MoveHat(0);//上
  delay(70);
  SwitchControlLibrary().MoveHat(8);// 止める
  delay(1200);

  //AA
  for (int i=0; i<2; i++){
    SwitchControlLibrary().PressButtonA();
    delay(70);
    SwitchControlLibrary().ReleaseButtonA();
    delay(1200);
  }

  //↑
  SwitchControlLibrary().MoveHat(0);//上
  delay(70);
  SwitchControlLibrary().MoveHat(8);// 止める
  delay(1200);

  //AAAA
  for (int i=0; i<4; i++){
    SwitchControlLibrary().PressButtonA();
    delay(70);
    SwitchControlLibrary().ReleaseButtonA();
    delay(1200);
  }
  
  //B
  SwitchControlLibrary().PressButtonB();
  delay(70);
  SwitchControlLibrary().ReleaseButtonB();
  delay(1200);

  //↑
  SwitchControlLibrary().MoveHat(0);//上
  delay(70);
  SwitchControlLibrary().MoveHat(8);// 止める
  delay(1200);
  
  
  //RR不要？
  SwitchControlLibrary().PressButtonR();
  delay(70);
  SwitchControlLibrary().ReleaseButtonR();
  delay(70);
  SwitchControlLibrary().PressButtonR();
  delay(70);
  SwitchControlLibrary().ReleaseButtonR();
  delay(1100);


  

  
 
}
