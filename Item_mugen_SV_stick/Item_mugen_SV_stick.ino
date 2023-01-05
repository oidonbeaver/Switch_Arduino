
#include <SwitchControlLibrary.h>
// #include <SwitchFunctions.h>
int t = 0;
int d=8;
// int time_push_release = 120;
// int time_move_cursor = 200;

int time_push_release = 100;
int time_move_cursor = 120;
void setup() {
  // put your setup code here, to run once:

  SwitchControlLibrary().pressButton(Button::B);//ゲーム開始
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::B);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(1000);

  SwitchControlLibrary().pressButton(Button::B);//ゲーム開始y
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::B);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(1000);

  SwitchControlLibrary().pressButton(Button::B);//ゲーム開始
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::B);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(1000);


  SwitchControlLibrary().pressButton(Button::B);//ゲーム開始
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::B);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(1000);
 


  delay(4000);
  SwitchControlLibrary().pressButton(Button::X);//ゲーム開始
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::X);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(1000);

  // SwitchControlLibrary().pressHatButton(HatButton::LEFT);
  // SwitchControlLibrary().sendReport();
  // delay(time_push_release);
  // SwitchControlLibrary().releaseHatButton(HatButton::LEFT);
  // SwitchControlLibrary().sendReport();

  SwitchControlLibrary().moveLeftStick(0, 128); // 左スティックは左
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(3000);
}



void loop() {

  // put your main code here, to run repeatedly:
  // 手持ちのミライドン(2番目)にカーソルを合わせておく
  SwitchControlLibrary().pressButton(Button::A);//ゲーム開始
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(1200);

  // ライドフォルムに戻す
  for (int i = 0; i < 2 ; i++) {
    SwitchControlLibrary().moveLeftStick(128, 0); // 左スティック上
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_move_cursor);
  }
  delay(400);


  for (int i = 0; i < 3 ; i++) {
    SwitchControlLibrary().pressButton(Button::A);
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::A);
    delay(d);
    SwitchControlLibrary().sendReport();
    // ここは短くしない
    // delay(1050);
    delay(900);
  }
  // ライドフォルムに変化した
  // ここで遅延してるっぽい
  delay(2300);

  SwitchControlLibrary().pressButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(1200);
  // delay(1000);


  SwitchControlLibrary().moveLeftStick(255, 128); // 左スティックは右
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_move_cursor);
  SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(150);
  // 念の為２回押す
  SwitchControlLibrary().moveLeftStick(255, 128); // 左スティックは右
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(150);


  // SwitchControlLibrary().pressHatButton(HatButton::RIGHT);
  // SwitchControlLibrary().sendReport();
  // delay(time_push_release);
  // SwitchControlLibrary().releaseHatButton(HatButton::RIGHT);
  // SwitchControlLibrary().sendReport();
  // delay(time_move_cursor);
  // delay(150);
  // SwitchControlLibrary().pressHatButton(HatButton::RIGHT);
  // SwitchControlLibrary().sendReport();
  // delay(time_push_release);
  // SwitchControlLibrary().releaseHatButton(HatButton::RIGHT);
  // SwitchControlLibrary().sendReport();
  delay(time_move_cursor);
  SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(450);


  for (int i = 0; i < 2 ; i++) {
    SwitchControlLibrary().moveLeftStick(128, 255); // 左スティック下
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_move_cursor);
  }
  // ボックスまで移動


  SwitchControlLibrary().pressButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(2200);
  // delay(2000);

  for (int i = 0; i < 2 ; i++) {
    SwitchControlLibrary().pressButton(Button::X);
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::X);
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_move_cursor);
  }
  delay(100);
  SwitchControlLibrary().pressButton(Button::L);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::L);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(850);
  // delay(750);

  SwitchControlLibrary().pressButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();

  delay(650);
  for (int i = 0; i < 3 ; i++) {
    // SwitchControlLibrary().pressHatButton(HatButton::UP);
    // SwitchControlLibrary().sendReport();
    SwitchControlLibrary().moveLeftStick(128, 255); // 左スティック下
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    // SwitchControlLibrary().releaseHatButton(HatButton::UP);
    // SwitchControlLibrary().sendReport();
    SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_move_cursor);
  }
  delay(400);
  SwitchControlLibrary().pressButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::A);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(1050);//ここ長めにとる

  SwitchControlLibrary().pressButton(Button::B);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().releaseButton(Button::B);
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(450);

  // SwitchControlLibrary().pressHatButton(HatButton::RIGHT);
  // SwitchControlLibrary().sendReport();
  // delay(time_push_release);
  // SwitchControlLibrary().releaseHatButton(HatButton::RIGHT);
  // SwitchControlLibrary().sendReport();
  delay(2000);

  // SwitchControlLibrary().pressHatButton(HatButton::LEFT);
  // SwitchControlLibrary().sendReport();
  SwitchControlLibrary().moveLeftStick(0, 128); // 左スティックは左
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(time_push_release);
  SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
  delay(d);
  SwitchControlLibrary().sendReport();
  delay(800);
  t = t+1;
  // 操作がおかしくなったときの復帰
  if (t>=15){
    for (int i = 0; i < 8 ; i++) {
        SwitchControlLibrary().pressButton(Button::B);
        delay(d);
        SwitchControlLibrary().sendReport();
        delay(time_push_release);
        SwitchControlLibrary().releaseButton(Button::B);
        delay(d);
        SwitchControlLibrary().sendReport();
        delay(time_move_cursor);
    }
    delay(800);
    
    SwitchControlLibrary().pressButton(Button::X);//ゲーム開始
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::X);
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(1000);

    SwitchControlLibrary().moveLeftStick(0, 128); // 左スティックは左
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(1000);
    SwitchControlLibrary().moveLeftStick(0, 128); // 左スティックは左
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
    delay(d);
    SwitchControlLibrary().sendReport();
    delay(1000);


      t=0;
  }
  delay(1000);
}
