
//#include <SwitchControlLibrary.h>
#include <SwitchFunctions.h>

void setup() {
  // put your setup code here, to run once:

SwitchControlLibrary().PressButtonL();
delay(50);
SwitchControlLibrary().ReleaseButtonL();
delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:



 
SwitchControlLibrary().PressButtonL();
for (int i = 0; i<100; i++){
  SwitchControlLibrary().PressButtonA();//ゲーム開始
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
}
//7.5秒

SwitchControlLibrary().ReleaseButtonL();

}
