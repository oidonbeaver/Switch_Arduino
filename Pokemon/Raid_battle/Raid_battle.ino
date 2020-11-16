//ちょいらくモードにしないを選択しておく
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
    delay(100);
    SwitchControlLibrary().ReleaseButtonA();
    delay(900);
  }
  //..
  delay(2000);

  //B..B
  SwitchControlLibrary().PressButtonB();
  delay(100);
  SwitchControlLibrary().ReleaseButtonB();
  delay(900); 

  delay(2000);

  SwitchControlLibrary().PressButtonB();
  delay(100);
  SwitchControlLibrary().ReleaseButtonB();
  delay(900);


  //......
  delay(6000);
  
  //↓
  SwitchControlLibrary().MoveLeftStick(128, 255); // 下
  delay(80);
  SwitchControlLibrary().MoveLeftStick(128, 128); // 止める
  delay(920);

  //A
  SwitchControlLibrary().PressButtonA();
  delay(100);
  SwitchControlLibrary().ReleaseButtonA();
  delay(900);

  //.
  delay(1000);

  //↓
  SwitchControlLibrary().MoveLeftStick(128, 255); // 下
  delay(80);
  SwitchControlLibrary().MoveLeftStick(128, 128); // 止める
  delay(920);

  //..
  delay(2000);

  //AA
  SwitchControlLibrary().PressButtonA();
  delay(100);
  SwitchControlLibrary().ReleaseButtonA();
  delay(900);
  SwitchControlLibrary().PressButtonA();
  delay(100);
  SwitchControlLibrary().ReleaseButtonA();
  delay(900);

  //..
  delay(2000);

  //B..B
  SwitchControlLibrary().PressButtonB();
  delay(100);
  SwitchControlLibrary().ReleaseButtonB();
  delay(900); 

  delay(2000);

  SwitchControlLibrary().PressButtonB();
  delay(100);
  SwitchControlLibrary().ReleaseButtonB();
  delay(900);

  delay(10000);
  //R
  SwitchControlLibrary().PressButtonR();
  delay(100);
  SwitchControlLibrary().ReleaseButtonR();
  delay(900);

  delay(10000);
  //R
  SwitchControlLibrary().PressButtonR();
  delay(100);
  SwitchControlLibrary().ReleaseButtonR();
  delay(900);

  delay(10000);


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
