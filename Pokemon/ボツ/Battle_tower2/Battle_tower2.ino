//ちょいらくモードしないにしておく
//にげるを選択しないコマンド
//https://hyperts.net/pokemonswsh-expame/
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
  SwitchControlLibrary().PressButtonZL();
  delay(70);
  SwitchControlLibrary().ReleaseButtonZL();
  delay(930);

  delay(2000);

  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(930);

  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(930);

  SwitchControlLibrary().PressButtonB();
  delay(70);
  SwitchControlLibrary().ReleaseButtonB();
  delay(930);
  
  
  


  //↑
  SwitchControlLibrary().MoveHat(0);//上
  delay(70);
  SwitchControlLibrary().MoveHat(8);// 止める
  delay(930);

  SwitchControlLibrary().PressButtonZL();
  delay(70);
  SwitchControlLibrary().ReleaseButtonZL();
  delay(930);

  delay(2000);

  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(930);

  SwitchControlLibrary().PressButtonZL();
  delay(70);
  SwitchControlLibrary().ReleaseButtonZL();
  delay(930);

  delay(2000);


  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(930);

  //↑
  SwitchControlLibrary().MoveHat(0);//上
  delay(70);
  SwitchControlLibrary().MoveHat(8);// 止める
  delay(930);

  SwitchControlLibrary().PressButtonZL();
  delay(70);
  SwitchControlLibrary().ReleaseButtonZL();
  delay(930);

  delay(2000);

  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(930);

  //↑
  SwitchControlLibrary().MoveHat(0);//上
  delay(70);
  SwitchControlLibrary().MoveHat(8);// 止める
  delay(930);

  SwitchControlLibrary().PressButtonZL();
  delay(70);
  SwitchControlLibrary().ReleaseButtonZL();
  delay(930);

  delay(2000);

  

  
 
}
