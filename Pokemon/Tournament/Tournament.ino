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
SwitchControlLibrary().MoveLeftStick(128,0); // 上
}


void loop() {
  // put your main code here, to run repeatedly:

}
