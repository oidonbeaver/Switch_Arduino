#include <SwitchControlLibrary.h>
int month[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

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


  
  // put your main code here, to run repeatedly:
  SwitchControlLibrary().MoveLeftStick(255,180); // 右下
  delay(1800);
  SwitchControlLibrary().PressButtonY();
  delay(50);
  SwitchControlLibrary().ReleaseButtonY();
  delay(50);
  SwitchControlLibrary().MoveLeftStick(130,190); // 右下
  delay(500);
  SwitchControlLibrary().PressButtonY();
  delay(50);
  SwitchControlLibrary().ReleaseButtonY();
  delay(50);
//  SwitchControlLibrary().MoveLeftStick(255,220); // 右下
//  delay(500);
  
  SwitchControlLibrary().MoveLeftStick(128,128); // 真ん中
  delay(50);
  
  for (int i =0;i<68; i++){
//    SwitchControlLibrary().MoveLeftStick(128-i,255-i);
    SwitchControlLibrary().MoveLeftStick(0,180);
    delay(50);
    SwitchControlLibrary().PressButtonY();
    //x>0, y>128
    delay(50);
    SwitchControlLibrary().ReleaseButtonY();
    delay(50);
    
  }


//ゲーム終了
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
for (int i = 0; i<2; i++){
  SwitchControlLibrary().PressButtonA();//
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(120);
}
SwitchControlLibrary().MoveHat(4);//下
delay(50);
SwitchControlLibrary().MoveHat(8);
delay(120);

for (int i = 0; i<4; i++){
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

for (int i = 0; i<50; i++){
  SwitchControlLibrary().PressButtonA();//ゲーム起動
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);
}

//起動ロード時間31秒
delay((29-10)*1000);

for (int i = 0; i<133; i++){
  SwitchControlLibrary().PressButtonA();//ゲーム開始
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);
}
//7.5秒

//起動ロード時間しずえ開始17秒
delay(6*1000);



}
