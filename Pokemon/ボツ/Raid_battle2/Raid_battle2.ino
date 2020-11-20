//ボールと回復も空にしておく
//メタモンレイドhttps://gamewith.jp/pokemon-sword-shield/article/show/209984
//https://hyperts.net/pokemonswsh-expame/
//あんまり効率よくない
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
  
  SwitchControlLibrary().PressButtonA();
  delay(70);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1430);

  //
  delay(1500);

  //↓
  SwitchControlLibrary().MoveHat(4); // 下
  delay(70);
  SwitchControlLibrary().MoveHat(8); // 止める
  delay(1430);

  //AAAA
  for (int i=0; i<4;i++){
    SwitchControlLibrary().PressButtonA();
    delay(70);
    SwitchControlLibrary().ReleaseButtonA();
    delay(1430);
  }
  

  delay(1500);
 //B
  SwitchControlLibrary().PressButtonB();
  delay(70);
  SwitchControlLibrary().ReleaseButtonB();
  delay(1430);
//3s
  delay(1500);
//B
  SwitchControlLibrary().PressButtonB();
  delay(70);
  SwitchControlLibrary().ReleaseButtonB();
  delay(1430);

  //↓
  SwitchControlLibrary().MoveHat(4); // 下
  delay(70);
  SwitchControlLibrary().MoveHat(8); // 止める
  delay(1430);




  // loopnum++;
  // //こまめにレポートを書く
  // if (loopnum > 10)
  // {
  //   delay(300);
  //   report();
  //   loopnum = 0;
  // }
}
