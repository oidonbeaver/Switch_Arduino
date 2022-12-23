
#include <SwitchControlLibrary.h>
// #include <SwitchFunctions.h>
int t=0;
// int time_push_release = 120;
// int time_move_cursor = 200;

int time_push_release = 100;
int time_move_cursor = 150;
void setup() {
  // put your setup code here, to run once:

SwitchControlLibrary().pressButton(Button::B);//ゲーム開始
SwitchControlLibrary().sendReport();
delay(time_push_release);
SwitchControlLibrary().releaseButton(Button::B); 
SwitchControlLibrary().sendReport();
delay(1000);

SwitchControlLibrary().pressButton(Button::B);//ゲーム開始
SwitchControlLibrary().sendReport();
delay(time_push_release);
SwitchControlLibrary().releaseButton(Button::B); 
SwitchControlLibrary().sendReport();
delay(1000);

SwitchControlLibrary().pressButton(Button::B);//ゲーム開始
SwitchControlLibrary().sendReport();
delay(time_push_release);
SwitchControlLibrary().releaseButton(Button::B); 
SwitchControlLibrary().sendReport();
delay(1000);
//SwitchControlLibrary().ReleaseButtonB();
SwitchControlLibrary().pressButton(Button::B);//ゲーム開始
SwitchControlLibrary().sendReport();
delay(time_push_release);
SwitchControlLibrary().releaseButton(Button::B); 
SwitchControlLibrary().sendReport();


delay(5000);
SwitchControlLibrary().pressButton(Button::X);//ゲーム開始
SwitchControlLibrary().sendReport();
delay(time_push_release);
SwitchControlLibrary().releaseButton(Button::X); 
SwitchControlLibrary().sendReport();
delay(1000);

SwitchControlLibrary().pressHatButton(HatButton::LEFT);
SwitchControlLibrary().sendReport();
delay(time_push_release);
SwitchControlLibrary().releaseHatButton(HatButton::LEFT); 
SwitchControlLibrary().sendReport();
delay(500);
}



void loop() {
    
  // put your main code here, to run repeatedly:
    // 手持ちのミライドン(2番目)にカーソルを合わせておく
    SwitchControlLibrary().pressButton(Button::A);//ゲーム開始
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::A); 
    SwitchControlLibrary().sendReport();
    delay(900);

    // ライドフォルムに戻す
    for (int i=0; i<2 ;i++){
        SwitchControlLibrary().pressHatButton(HatButton::UP);
        SwitchControlLibrary().sendReport();
        delay(time_push_release);
        SwitchControlLibrary().releaseHatButton(HatButton::UP); 
        SwitchControlLibrary().sendReport();
        delay(time_move_cursor);
    }
    delay(400);
    

    for (int i=0; i<3 ;i++){
        SwitchControlLibrary().pressButton(Button::A);
        SwitchControlLibrary().sendReport();
        delay(time_push_release);
        SwitchControlLibrary().releaseButton(Button::A); 
        SwitchControlLibrary().sendReport();
        // ここは短くしない
        // delay(1050);
        delay(900);
    }
    // ライドフォルムに変化した
    // ここで遅延してるっぽい
    delay(2300);
    
    SwitchControlLibrary().pressButton(Button::A);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::A); 
    SwitchControlLibrary().sendReport();
    delay(1200);
    // delay(1000);

 
    SwitchControlLibrary().pressHatButton(HatButton::RIGHT);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseHatButton(HatButton::RIGHT); 
    SwitchControlLibrary().sendReport();
    delay(time_move_cursor);
    delay(150);
    // 念の為２回押す
    SwitchControlLibrary().moveLeftStick(255, 128); // 左スティックは右
    delay(150);
    

    // SwitchControlLibrary().pressHatButton(HatButton::RIGHT);
    // SwitchControlLibrary().sendReport();
    // delay(time_push_release);
    // SwitchControlLibrary().releaseHatButton(HatButton::RIGHT); 
    // SwitchControlLibrary().sendReport();
    // delay(time_move_cursor);
    // delay(150);
    SwitchControlLibrary().pressHatButton(HatButton::RIGHT);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseHatButton(HatButton::RIGHT); 
    SwitchControlLibrary().sendReport();
    delay(time_move_cursor);
    SwitchControlLibrary().moveLeftStick(128, 128); // 左スティックはニュートラル
    delay(450);


    for (int i=0; i<2 ;i++){
        SwitchControlLibrary().pressHatButton(HatButton::DOWN);
        SwitchControlLibrary().sendReport();
        delay(time_push_release);
        SwitchControlLibrary().releaseHatButton(HatButton::DOWN); 
        SwitchControlLibrary().sendReport();
        delay(time_move_cursor);
    }
    // ボックスまで移動


    SwitchControlLibrary().pressButton(Button::A);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::A); 
    SwitchControlLibrary().sendReport();
    delay(2400);
    // delay(2000);

    for (int i=0; i<2 ;i++){
        SwitchControlLibrary().pressButton(Button::X);
        SwitchControlLibrary().sendReport();
        delay(time_push_release);
        SwitchControlLibrary().releaseButton(Button::X); 
        SwitchControlLibrary().sendReport();
        delay(time_move_cursor);
    }
    delay(100);
    SwitchControlLibrary().pressButton(Button::L);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::L); 
    SwitchControlLibrary().sendReport();
    delay(850);
    // delay(750);

    SwitchControlLibrary().pressButton(Button::A);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::A); 
    SwitchControlLibrary().sendReport();

    delay(550);
    for (int i=0; i<3 ;i++){
        SwitchControlLibrary().pressHatButton(HatButton::UP);
        SwitchControlLibrary().sendReport();
        delay(time_push_release);
        SwitchControlLibrary().releaseHatButton(HatButton::UP); 
        SwitchControlLibrary().sendReport();
        delay(time_move_cursor);
    }
    delay(200);
    SwitchControlLibrary().pressButton(Button::A);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::A); 
    SwitchControlLibrary().sendReport();
    delay(850);//ここ長めにとる

    SwitchControlLibrary().pressButton(Button::B);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseButton(Button::B); 
    SwitchControlLibrary().sendReport();
    delay(450);

    // SwitchControlLibrary().pressHatButton(HatButton::RIGHT);
    // SwitchControlLibrary().sendReport();
    // delay(time_push_release);
    // SwitchControlLibrary().releaseHatButton(HatButton::RIGHT); 
    // SwitchControlLibrary().sendReport();
    delay(2000);

    SwitchControlLibrary().pressHatButton(HatButton::LEFT);
    SwitchControlLibrary().sendReport();
    delay(time_push_release);
    SwitchControlLibrary().releaseHatButton(HatButton::LEFT); 
    SwitchControlLibrary().sendReport();
    delay(800);
    // t = t+1;
    // // ちょっとずつずれていくのを修正
    // if (t==30){
    //     delay(3000);
    //     t=0;
    // }
}
