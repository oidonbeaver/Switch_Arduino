//通信対戦で日付変更できるモードにしておく
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

  // put your main code here, to run repeatedly:
      delay(600);
      SwitchControlLibrary().PressButtonA();
      delay(70);
      SwitchControlLibrary().ReleaseButtonA();
      delay(300);
      SwitchControlLibrary().PressButtonB();
      delay(70);
      SwitchControlLibrary().ReleaseButtonB();
      delay(500);
      SwitchControlLibrary().MoveLeftStick(128,255); // 下
      delay(80);
      SwitchControlLibrary().MoveLeftStick(128,128); // 止める
      delay(200);
      SwitchControlLibrary().PressButtonA();
      delay(70);
      SwitchControlLibrary().ReleaseButtonA();
      delay(1300);
      
      for (int i=0; i<3;i++){
        SwitchControlLibrary().PressButtonB();
        delay(70);
        SwitchControlLibrary().ReleaseButtonB();
        delay(650);
      }



      
      SwitchControlLibrary().PressButtonA();
      delay(70);
      SwitchControlLibrary().ReleaseButtonA();
      delay(300);
      for (int i=0; i<40;i++){
          SwitchControlLibrary().PressButtonB();
          delay(100);
          SwitchControlLibrary().ReleaseButtonB();
          delay(200);
      }
      changeday();
      delay(200);

      
    
  

}
