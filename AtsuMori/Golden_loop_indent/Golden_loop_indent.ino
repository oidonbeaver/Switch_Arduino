
#include <SwitchControlLibrary.h>
#include <vector>

std::vector<std::vector<int>> direc_mat = {{128, 0}, {255, 0}, {255, 128}, {255, 255}, {128, 255}, {0, 255}, {0, 128}, {0, 0}};
//int a = direc_mat.at(0).at(1);

int onestep = 260; //ステップ
int turn90 = 250;  //ターン
int turn0 = 250;
int turn180 = 350;
int pickdelay = 100;

int scopnum = 0;
int scopx = 0;
int scopy = 0;
int hitnum = 0;
int resetnum = 0;
//2000年１月1日 4:59に設定

int daynum = 1;   // 1月2日から始める
int monthnum = 1; //1月から始める

int yearnum = 2000;
int daymonth = 1; //何日繰り上げるか

void hitstone();
void pickstone(int repeat, int x, int y);
void movestep(int st, int x, int y, int turndirec);

void setup()
{
  // put your setup code here, to run once:
  SwitchControlLibrary().PressButtonB();
  delay(200);
  SwitchControlLibrary().ReleaseButtonB();
  delay(50);
  SwitchControlLibrary().PressButtonB();
  delay(200);
  SwitchControlLibrary().ReleaseButtonB();
  delay(50);
  SwitchControlLibrary().PressButtonB();
  delay(50);
  SwitchControlLibrary().ReleaseButtonB();
  delay(500);
  SwitchControlLibrary().ReleaseButtonB();
  delay(50);
  SwitchControlLibrary().PressButtonB();
  delay(50);
  SwitchControlLibrary().ReleaseButtonB();
  delay(500);
  //
}

void loop()
{
  // put your main code here, to run repeatedly:

  //7日ごとにゴミを捨てる
  if (daynum % 7 == 0)
  {
    movestep(1, 128, 255, 0); //下
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(3500);
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(1500);
    SwitchControlLibrary().MoveHat(4); //下
    delay(50);
    SwitchControlLibrary().MoveHat(8);
    delay(200);
    for (int i = 0; i < 9; i++)
    {
      SwitchControlLibrary().PressButtonA();
      delay(50);
      SwitchControlLibrary().ReleaseButtonA();
      delay(200);
      SwitchControlLibrary().MoveHat(2); //右
      delay(50);
      SwitchControlLibrary().MoveHat(8);
      delay(200);
    }
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(200);
    SwitchControlLibrary().MoveHat(4); //下
    delay(50);
    SwitchControlLibrary().MoveHat(8);

    for (int i = 0; i < 9; i++)
    {
      SwitchControlLibrary().PressButtonA();
      delay(50);
      SwitchControlLibrary().ReleaseButtonA();
      delay(200);
      SwitchControlLibrary().MoveHat(6); //左
      delay(50);
      SwitchControlLibrary().MoveHat(8);
      delay(200);
    }
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(200);
    SwitchControlLibrary().PressButtonPlus();
    delay(50);
    SwitchControlLibrary().ReleaseButtonPlus();
    delay(1000);
    SwitchControlLibrary().PressButtonB();
    delay(50);
    SwitchControlLibrary().ReleaseButtonB();
    delay(200);
  }

  movestep(3, 0, 128, 90); //左
  movestep(3, 128, 0, 90); //上
  movestep(6, 0, 128, 90);
  movestep(8, 128, 0, 90);
  //最初の石に到着

  //1石を叩く
  SwitchControlLibrary().MoveLeftStick(255, 255); // 右下
  delay(400);
  SwitchControlLibrary().MoveLeftStick(128, 128); //
  delay(50);
  hitstone();

  //1石を拾う
  delay(300);
//  pickstone(3, 0, 128); // 左その場で
  pickstone(4, 128, 0); // 上その場で
  delay(100);
  pickstone(17.7, 128, 255); //下
  delay(pickdelay);
//  pickstone(20, 255, 128); // 右
  pickstone(19, 255, 128); // 右
  delay(pickdelay);
  pickstone(25, 128, 0); // 上
  delay(pickdelay);
  pickstone(24, 0, 128); // 左
  delay(pickdelay);

  //２つ目の石に移動
  movestep(3.6, 255, 129, 180); //右
  movestep(9, 128, 255, 90);    //下
  movestep(3, 255, 128, 180);   //右 ミスるときがあるので
  //2つ目の石を叩く
  SwitchControlLibrary().MoveLeftStick(0, 0); // 左上
  delay(400);
  SwitchControlLibrary().MoveLeftStick(128, 128); //
  delay(50);
  hitstone();

  //2つ目の石を拾う
  delay(300);

  pickstone(3, 255, 128); // 右(その場で)
//  pickstone(3, 128, 255); // 下(その場で)
  delay(100);
  pickstone(18, 0, 128); // 左
  delay(pickdelay);
  pickstone(23, 128, 0); //上
  delay(pickdelay);
  pickstone(18, 255, 128); // 右
  delay(pickdelay);
  pickstone(23, 128, 255); // 下
  delay(pickdelay);
  pickstone(10, 255, 128); // 右
  delay(pickdelay);

  //3つ目の石に移動
  //  movestep(3, 128, 255, 180);
  movestep(3, 128, 0, 180);
  movestep(2, 255, 128, 90);
  movestep(2, 128, 0, 180);
  //3つ目の石を叩く
  SwitchControlLibrary().MoveLeftStick(255, 255); // 右下
  delay(400);
  SwitchControlLibrary().MoveLeftStick(128, 128); //
  delay(50);
  hitstone();

  //3つ目の石を拾う
  delay(300);

//  pickstone(3, 128, 0); // 上その場で
  pickstone(4, 0, 128); // 左その場で
  delay(100);
  pickstone(18, 255, 128); // 右
  delay(pickdelay);
  pickstone(26, 128, 255); //下
  delay(pickdelay);
  pickstone(18, 0, 128); // 左
  delay(pickdelay);
  pickstone(25, 128, 0); // 上
  delay(pickdelay);

  //4つ目の石に移動
  movestep(2, 255, 128, 90);
  movestep(9, 255, 50, 0);
  //4つ目の石を叩く
  SwitchControlLibrary().MoveLeftStick(0, 255); // 左下
  delay(400);
  SwitchControlLibrary().MoveLeftStick(128, 128); //
  delay(50);
  hitstone();

  //4つ目の石を拾う
  delay(300);
//  pickstone(3, 255, 128); // その場で
  pickstone(3, 128, 0); // 上その場で
  delay(100);
  pickstone(23, 128, 255); // 下
  delay(pickdelay);
  pickstone(18, 0, 128); //左
  delay(pickdelay);
  pickstone(18.5, 128, 0); // 上
  delay(pickdelay);
  pickstone(25, 255, 128); // 右
  delay(pickdelay);

  //5つ目の石に移動
  movestep(2.5, 0, 128, 90);
  movestep(2.5, 128, 0, 90);
  movestep(1.5, 255, 0, 90);
  movestep(2.5, 128, 0, 90);

  //5つ目の石を叩く
  SwitchControlLibrary().MoveLeftStick(0, 255); // 左下
  delay(400);
  SwitchControlLibrary().MoveLeftStick(128, 128); //
  delay(50);
  hitstone();

  //5つ目の石を拾う
  delay(300);

//  pickstone(3, 128, 0); // その場で
  pickstone(3, 255, 128); // 右その場で
  delay(100);
  pickstone(20, 0, 128); // 左
  delay(pickdelay);
  pickstone(19, 128, 255); //下
  delay(pickdelay);
  pickstone(23, 255, 128); // 右
  delay(pickdelay);
  pickstone(23, 128, 0); // 上
  delay(pickdelay);

  //6つ目の石に移動
  movestep(2.5, 0, 128, 90);
  movestep(2.5, 128, 255, 90);
  movestep(1.5, 0, 128, 90);
  movestep(1.5, 128, 0, 90);
  movestep(2.5, 0, 128, 90);

  //6つ目の石を叩く
  SwitchControlLibrary().MoveLeftStick(255, 255); // 右下
  delay(400);
  SwitchControlLibrary().MoveLeftStick(128, 128); //
  delay(50);
  hitstone();

  //6つ目の石を拾う
  delay(300);

//  pickstone(3, 0, 128); // 左その場で
  pickstone(3, 128, 0); // 上その場で
  delay(100);
  pickstone(23, 128, 255); // 下
  delay(pickdelay);
  pickstone(19, 255, 128); //右
  delay(pickdelay);
  pickstone(19, 128, 0); // 上
  delay(pickdelay);
  pickstone(23, 0, 128); // 左
  delay(pickdelay);

  resetnum++;
  hitnum = hitnum + 8 * 6;
  daynum++;

  //スコップ壊れる対策
  if (hitnum == 96)
  {
    hitnum = 0;
    scopnum = scopnum + 1;
    if (scopnum > 7)
    {
      scopnum = scopnum - 8;
    }
    //  SwitchControlLibrary().MoveHat(4);//下
    //  delay(50);
    //  SwitchControlLibrary().MoveHat(8);
    //  delay(1200);

    SwitchControlLibrary().MoveHat(0); //上
    delay(50);
    SwitchControlLibrary().MoveHat(8);
    delay(900);
    scopx = direc_mat.at(scopnum).at(0);
    scopy = direc_mat.at(scopnum).at(1);

    SwitchControlLibrary().MoveLeftStick(scopx, scopy); //  ここ変える
    delay(50);
    SwitchControlLibrary().MoveLeftStick(128, 128); //
    delay(100);

    SwitchControlLibrary().ReleaseButtonA();
    delay(50);
    SwitchControlLibrary().PressButtonA();
    delay(1500);
  }

  //お金が溢れる対策
  if (resetnum % 5 == 0)
  {
    SwitchControlLibrary().ReleaseButtonX();
    delay(50);
    SwitchControlLibrary().PressButtonX();
    delay(900);
    for (int i = 0; i < 4; i++)
    {
      SwitchControlLibrary().MoveHat(4); //下
      delay(50);
      SwitchControlLibrary().MoveHat(8);
      delay(50);
    }
    SwitchControlLibrary().ReleaseButtonA();
    delay(50);
    SwitchControlLibrary().PressButtonA();
    delay(500);
    SwitchControlLibrary().ReleaseButtonA();
    delay(50);
    SwitchControlLibrary().PressButtonA();
    delay(2000);
    SwitchControlLibrary().ReleaseButtonB();
    delay(50);
    SwitchControlLibrary().PressButtonB();
    delay(1000);
  }

  //ゲーム終了
  SwitchControlLibrary().PressButtonL();
  delay(50);
  SwitchControlLibrary().PressButtonMinus();
  delay(50);
  SwitchControlLibrary().ReleaseButtonMinus();
  delay(50);
  for (int i = 0; i < 17; i++)
  {
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(150);
  }
  SwitchControlLibrary().ReleaseButtonL();

  delay(11.5 * 1000);

  //ホームボタン
  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(300);

  SwitchControlLibrary().MoveHat(4); //下
  delay(50);
  SwitchControlLibrary().MoveHat(8);
  delay(50);
  for (int i = 0; i < 4; i++)
  {
    SwitchControlLibrary().MoveHat(2); //右
    delay(50);
    SwitchControlLibrary().MoveHat(8);
    delay(50);
  }

  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(500);

  SwitchControlLibrary().MoveLeftStick(128, 255); // 下
  delay(1900);
  SwitchControlLibrary().MoveLeftStick(128, 128); // 止める
  delay(50);
  SwitchControlLibrary().PressButtonA(); //本体
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(500);

  for (int i = 0; i < 4; i++)
  {
    SwitchControlLibrary().MoveHat(4); //下
    delay(50);
    SwitchControlLibrary().MoveHat(8);
    delay(50);
  }
  SwitchControlLibrary().PressButtonA(); //日付と時刻
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(200);
  for (int i = 0; i < 2; i++)
  {
    SwitchControlLibrary().MoveHat(4); //下
    delay(50);
    SwitchControlLibrary().MoveHat(8);
    delay(50);
  }
  SwitchControlLibrary().PressButtonA(); //現在の日付と時刻
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(120);
  if (daynum > 28)
  { //毎月２8日

    //12月だった場合
    if (monthnum == 12)
    {
      monthnum = 1;                      //1月に戻す
      yearnum++;                         //
      SwitchControlLibrary().MoveHat(0); //上 年を上げる //12月の場合
      delay(50);
      SwitchControlLibrary().MoveHat(8);
      delay(120);

      SwitchControlLibrary().PressButtonA(); //
      delay(50);
      SwitchControlLibrary().ReleaseButtonA();
      delay(120);

      SwitchControlLibrary().MoveHat(0); //上 月を上げる　//12月の場合
      delay(50);
      SwitchControlLibrary().MoveHat(8);
      delay(120);
      SwitchControlLibrary().PressButtonA(); //
      delay(50);
      SwitchControlLibrary().ReleaseButtonA();
      delay(120);

      daymonth = 4;
      for (int i = 0; i < daymonth; i++)
      {
        SwitchControlLibrary().MoveHat(0); //上 日を上げる　//12月の場合
        delay(50);
        SwitchControlLibrary().MoveHat(8);
        delay(120);
      }
      //日程変更完了
      for (int i = 0; i < 4; i++)
      {
        SwitchControlLibrary().PressButtonA(); //
        delay(50);
        SwitchControlLibrary().ReleaseButtonA();
        delay(120);
      }
    }
    else
    {                                        //12月以外の場合
      SwitchControlLibrary().PressButtonA(); //
      delay(50);
      SwitchControlLibrary().ReleaseButtonA();
      delay(120);

      SwitchControlLibrary().MoveHat(0); //上 月を上げる
      delay(50);
      SwitchControlLibrary().MoveHat(8);
      delay(120);

      SwitchControlLibrary().PressButtonA(); //
      delay(50);
      SwitchControlLibrary().ReleaseButtonA();
      delay(120);

      daynum = 1;
      monthnum++;
      //何月か　西向く侍
      if (monthnum == 2)
      {
        if (yearnum % 4 == 0)
        {
          daymonth = 2; //何日繰り上げるか
        }
        else
        {
          daymonth = 1;
        }
      }
      else if (((monthnum == 4) || (monthnum == 6)) || ((monthnum == 9) || (monthnum == 11)))
      {
        daymonth = 3;
      }
      else
      {
        daymonth = 4;
      }

      for (int i = 0; i < daymonth; i++)
      {
        SwitchControlLibrary().MoveHat(0); //上 日を上げる
        delay(50);
        SwitchControlLibrary().MoveHat(8);
        delay(120);
      }

      //日程変更完了
      for (int i = 0; i < 4; i++)
      {
        SwitchControlLibrary().PressButtonA(); //
        delay(50);
        SwitchControlLibrary().ReleaseButtonA();
        delay(120);
      }
    }

    //    daynum=1;
    //    monthnum++;
  }
  else
  { //28日以外
    for (int i = 0; i < 2; i++)
    {
      SwitchControlLibrary().PressButtonA(); //
      delay(50);
      SwitchControlLibrary().ReleaseButtonA();
      delay(120);
    }
    SwitchControlLibrary().MoveHat(0); //上
    delay(50);
    SwitchControlLibrary().MoveHat(8);
    delay(120);
    for (int i = 0; i < 4; i++)
    {
      SwitchControlLibrary().PressButtonA(); //
      delay(50);
      SwitchControlLibrary().ReleaseButtonA();
      delay(120);
    }
  }

  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(500);
  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(50);

  for (int i = 0; i < 50; i++)
  {
    SwitchControlLibrary().PressButtonA(); //ゲーム起動
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(100);
  }

  //起動ロード時間31秒
  delay((30 - 10) * 1000);

  SwitchControlLibrary().PressButtonL();
  for (int i = 0; i < 120; i++)
  {
    SwitchControlLibrary().PressButtonA(); //ゲーム開始
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(100);
  }
  //7.5秒

  //起動ロード時間しずえ開始17秒
  delay(2 * 1000);

  delay(50);
  //19秒間Bボタン連打
  for (int i = 0; i <= 170; i++)
  {
    SwitchControlLibrary().PressButtonB();
    delay(50);
    SwitchControlLibrary().ReleaseButtonB();
    delay(100);
  }

  SwitchControlLibrary().ReleaseButtonL();
}

void movestep(int st, int x, int y, int turndirec)
{
  int turntime;
  if (turndirec == 180)
  {
    turntime = turn180;
  }
  else if (turndirec == 0)
  {
    turntime = turn0;
  }
  else if (turndirec == 90)
  {
    turntime = turn90;
  }

  SwitchControlLibrary().MoveLeftStick(x, y); //
  delay(onestep * st + turntime);
  SwitchControlLibrary().MoveLeftStick(128, 128); //
  delay(50);
}

void hitstone()
{
  //  for (int i = 0; i<90; i++){
  for (int i = 0; i < 80; i++)
  { //7回叩くと壊れないらしい
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(50);
  }
}

void pickstone(int repeat, int x, int y)
{
  for (int i = 0; i < repeat; i++)
  {
    SwitchControlLibrary().PressButtonY();
    delay(50);
    SwitchControlLibrary().ReleaseButtonY();
    delay(50);
    SwitchControlLibrary().MoveLeftStick(x, y); // 下
    delay(50);
  }
  SwitchControlLibrary().MoveLeftStick(128, 128); //
  delay(50);
}
