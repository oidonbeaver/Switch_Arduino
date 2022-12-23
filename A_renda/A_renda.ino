
#include <SwitchControlLibrary.h>
// #include <SwitchFunctions.h>

void setup() {
  // put your setup code here, to run once:

//SwitchControlLibrary().PressButtonB();
//delay(50);
//SwitchControlLibrary().ReleaseButtonB();
//delay(100);
//SwitchControlLibrary().PressButtonB();
//delay(50);
//SwitchControlLibrary().ReleaseButtonB();
//delay(100);
//SwitchControlLibrary().PressButtonB();
//delay(50);
//SwitchControlLibrary().ReleaseButtonB();
//delay(8000);
//SwitchControlLibrary().PressButtonB();
//delay(50);
//SwitchControlLibrary().ReleaseButtonB();
//delay(100);
//SwitchControlLibrary().PressButtonB();
//delay(50);
//SwitchControlLibrary().ReleaseButtonB();
}



void loop() {
  // put your main code here, to run repeatedly:



 

for (int i = 0; i<500; i++){
  SwitchControlLibrary().pressButton(Button::A);//ゲーム開始
  SwitchControlLibrary().sendReport();
  delay(50);
  SwitchControlLibrary().releaseButton(Button::A); 
  SwitchControlLibrary().sendReport();
  delay(100);
  SwitchControlLibrary().pressButton(Button::A);//ゲーム開始
  SwitchControlLibrary().sendReport();
  delay(100);
  SwitchControlLibrary().releaseButton(Button::A); 
  SwitchControlLibrary().sendReport();
  delay(100);
}
//7.5秒



}
