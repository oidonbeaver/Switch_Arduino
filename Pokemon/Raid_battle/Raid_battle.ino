//ちょいらくモードにしないを選択しておく
//こっちのほうが2よりいいかも
//https://note.com/hayatotiry/n/nd5196f52a261
#include <SwitchFunctions.h>
// int loopnum = 0;
void setup()
{

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

void loop()
{

  // put your main code here, to run repeatedly:
  //AAA..B..B......↓A.↓..AA..B..B..........R..........R..........RR

  //AAA
  for (int i=0; i < 3; i++)
  {
    SwitchControlLibrary().PressButtonA();
    delay(70);
    SwitchControlLibrary().ReleaseButtonA();
    delay(930);
  }
  //..
  delay(2000);

  //B..B
  SwitchControlLibrary().PressButtonB();
  delay(70);
  SwitchControlLibrary().ReleaseButtonB();
  delay(930); 

  delay(2000);

  SwitchControlLibrary().PressButtonB();
  delay(70);
  SwitchControlLibrary().ReleaseButtonB();
  delay(930);


  //......
  delay(6000);
  
  //↓
  SwitchControlLibrary().MoveHat(4); // 下
  delay(70);
  SwitchControlLibrary().MoveHat(8); // 止める
  delay(930);

  //A
  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(930);

  //.
  delay(1000);

  //↓
  SwitchControlLibrary().MoveHat(4); // 下
  delay(70);
  SwitchControlLibrary().MoveHat(8); // 止める
  delay(930);

  //..
  delay(2000);

  //AA
  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(930);
  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(930);

  //..
  delay(2000);

  //B..B
  SwitchControlLibrary().PressButtonB();
  delay(100);
  SwitchControlLibrary().ReleaseButtonB();
  delay(900); 

  delay(2000);

  SwitchControlLibrary().PressButtonB();
  delay(70);
  SwitchControlLibrary().ReleaseButtonB();
  delay(930);

  delay(10000);
//delay(9500);

  //R
  SwitchControlLibrary().PressButtonR();
  delay(70);
  SwitchControlLibrary().ReleaseButtonR();
  delay(930);

  delay(10000);
//delay(9500);

  //R
  SwitchControlLibrary().PressButtonR();
  delay(70);
  SwitchControlLibrary().ReleaseButtonR();
  delay(930);

  delay(10000);
//delay(9500);


  //RR
  SwitchControlLibrary().PressButtonR();
  delay(100);
  SwitchControlLibrary().ReleaseButtonR();
  delay(900);

  SwitchControlLibrary().PressButtonR();
  delay(100);
  SwitchControlLibrary().ReleaseButtonR();
  delay(900);



  // loopnum++;
  // //こまめにレポートを書く
  // if (loopnum > 10)
  // {
  //   delay(300);
  //   report();
  //   loopnum = 0;
  // }
}
