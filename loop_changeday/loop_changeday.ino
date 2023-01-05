#include <SwitchFunctions.h>
#include <SwitchControlLibrary.h>
int loopnum=0;
int d=5;
// int time_push_release = 120;
// int time_move_cursor = 200;

int time_push_release = 100;
int time_move_cursor = 120;
void setup() {

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
 
}

void loop() {
    delay(800);

    changeday();
    delay(800);

}
