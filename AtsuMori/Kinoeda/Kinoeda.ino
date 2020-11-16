
#include <SwitchControlLibrary.h>

void setup() {
  // put your setup code here, to run once:

SwitchControlLibrary().PressButtonL();
delay(50);
SwitchControlLibrary().ReleaseButtonL();
delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:

//
//SwitchControlLibrary().PressButtonY();
//    //x>0, y>128
//delay(50);
//SwitchControlLibrary().ReleaseButtonY();
//delay(1000);
//delay(100);
//SwitchControlLibrary().PressButtonL();

for (int i = 0; i<10; i++){
  
    SwitchControlLibrary().PressButtonY();//ゲーム開始
    delay(50);
    SwitchControlLibrary().ReleaseButtonY();
    delay(50);

}
for (int i = 0; i<20; i++){
  
    SwitchControlLibrary().PressButtonA();//ゲーム開始
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(50);

}
//  delay(100);
//7.5秒

//SwitchControlLibrary().ReleaseButtonL();

}
