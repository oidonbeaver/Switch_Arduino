
#include <SwitchControlLibrary.h>



int year = 1;
void setup() {
 
SwitchControlLibrary().PressButtonL();
for (int i = 0; i<70; i++){
  SwitchControlLibrary().PressButtonA();//ゲーム開始
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);
}
//7.5秒

//起動ロード時間しずえ開始17秒
delay(10*1000);



delay(50);
//19秒間Bボタン連打
for (int i = 0; i<=230; i++){
  SwitchControlLibrary().PressButtonB();
  delay(50);
  SwitchControlLibrary().ReleaseButtonB();
  delay(100);
}

SwitchControlLibrary().ReleaseButtonL();
}

void loop() {
  
// put your main code here, to run repeatedly:



SwitchControlLibrary().PressButtonB();
delay(50);
SwitchControlLibrary().ReleaseButtonB();
delay(50);
SwitchControlLibrary().PressButtonB();
delay(50);
SwitchControlLibrary().ReleaseButtonB();
delay(50);
SwitchControlLibrary().PressButtonB();
delay(50);
SwitchControlLibrary().ReleaseButtonB();
delay(50);



SwitchControlLibrary().PressButtonMinus();
delay(50);
SwitchControlLibrary().ReleaseButtonMinus();
delay(2500);//こここかえる
SwitchControlLibrary().PressButtonA();
delay(50);
SwitchControlLibrary().ReleaseButtonA();
delay(800);
SwitchControlLibrary().PressButtonA();
delay(50);
SwitchControlLibrary().ReleaseButtonA();
delay(11.5*1000);



//ホームボタン
SwitchControlLibrary().PressButtonHome();
delay(50);
SwitchControlLibrary().ReleaseButtonHome();
delay(300);

SwitchControlLibrary().MoveHat(4);//下
delay(50);
SwitchControlLibrary().MoveHat(8);
delay(50);
for (int i = 0; i< 4; i++){
  SwitchControlLibrary().MoveHat(2);//右
  delay(50);
  SwitchControlLibrary().MoveHat(8);
  delay(50);

}

SwitchControlLibrary().PressButtonA();
delay(50);
SwitchControlLibrary().ReleaseButtonA();
delay(500);

SwitchControlLibrary().MoveLeftStick(128,255); // 下
delay(1900);
SwitchControlLibrary().MoveLeftStick(128,128); // 止める
delay(50);
SwitchControlLibrary().PressButtonA();//本体
delay(50);
SwitchControlLibrary().ReleaseButtonA();
delay(500);

for (int i = 0; i< 4; i++){
  SwitchControlLibrary().MoveHat(4);//下
  delay(50);
  SwitchControlLibrary().MoveHat(8);
  delay(50);

}
SwitchControlLibrary().PressButtonA();//日付と時刻
delay(50);
SwitchControlLibrary().ReleaseButtonA();
delay(200);
for (int i = 0; i< 2; i++){
  SwitchControlLibrary().MoveHat(4);//下
  delay(50);
  SwitchControlLibrary().MoveHat(8);
  delay(50);

}
SwitchControlLibrary().PressButtonA();//現在の日付と時刻
delay(50);
SwitchControlLibrary().ReleaseButtonA();
delay(120);



//2060年以降にはタイムスリップできないので時間を戻す
if (year > 50){
  SwitchControlLibrary().MoveLeftStick(128,255); // 下すぃっく
  delay(6*1000);
  SwitchControlLibrary().MoveLeftStick(128,128); // 止める
  delay(50);
  year = 1;
}
else{
  SwitchControlLibrary().MoveHat(0);//上 
  delay(50);
  SwitchControlLibrary().MoveHat(8);
  year++;
  
}

delay(120);
for (int i = 0; i<6; i++){
  SwitchControlLibrary().PressButtonA();//
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(120);
}

SwitchControlLibrary().PressButtonHome();
delay(50);
SwitchControlLibrary().ReleaseButtonHome();
delay(500);
SwitchControlLibrary().PressButtonHome();
delay(50);
SwitchControlLibrary().ReleaseButtonHome();
delay(50);
//

//
//for (int i = 0; i<3; i++){
//  SwitchControlLibrary().PressButtonB();//
//  delay(50);
//  SwitchControlLibrary().ReleaseButtonB();
//  delay(120);
//}
//delay(200);
//SwitchControlLibrary().MoveHat(0);//上
//delay(50);
//SwitchControlLibrary().MoveHat(8);
//delay(100);
//SwitchControlLibrary().MoveLeftStick(0,128); // 左すぃっく
//delay(500);
//SwitchControlLibrary().MoveLeftStick(128,128); // 止める
//delay(50);
//


for (int i = 0; i<50; i++){
  SwitchControlLibrary().PressButtonA();//ゲーム起動
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);
}

//起動ロード時間31秒
delay((31-10)*1000);


SwitchControlLibrary().PressButtonL();
for (int i = 0; i<120; i++){
  SwitchControlLibrary().PressButtonA();//ゲーム開始
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);
}
//7.5秒

//起動ロード時間しずえ開始17秒
delay(8*1000);



delay(50);
//19秒間Bボタン連打
for (int i = 0; i<=260; i++){
  SwitchControlLibrary().PressButtonB();
  delay(50);
  SwitchControlLibrary().ReleaseButtonB();
  delay(100);
}

SwitchControlLibrary().ReleaseButtonL();
//delay(3*1000);
//SwitchControlLibrary().MoveHat(8); // center
//  delay(100);


}
