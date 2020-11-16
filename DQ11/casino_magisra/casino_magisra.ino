#include <SwitchControlLibrary.h>
void setup() {
  // put your setup code here, to run once:
//  SwitchControlLibrary().PressButtonL();
  delay(50);
//  SwitchControlLibrary().ReleaseButtonL();
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
    SwitchControlLibrary().PressButtonA();//ゲーム開始
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(200);
    SwitchControlLibrary().PressButtonA();//ゲーム開始
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(50);
    
    SwitchControlLibrary().MoveHat(Hat::LEFT);;
    delay(200);
    SwitchControlLibrary().MoveHat(Hat::LEFT);;
    delay(200);
    SwitchControlLibrary().PressButtonLClick();//ゲーム開始
    delay(100);
    SwitchControlLibrary().ReleaseButtonLClick();
    delay(1000*60*3ß);
    

}
