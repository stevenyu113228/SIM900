/*
SIM900撥打電話程式
BY StevenYU 20160305
*/
#include <SoftwareSerial.h>
//啟用軟序列阜
SoftwareSerial SIM(7, 8);
//設定序列阜7腳為RX，8腳為TX
void setup()
{
	SIM.begin(19200);
	//設定軟序列阜鮑率為19200
}

void loop()
{
  call();
  //呼叫打電話函式
  while (1)
  {
	 //無窮迴圈讓程式卡住
  }
}

//打電話函式
void call()
{
  SIM.println("ATD +886912345678;");
  //AT指令請見說明檔案
  delay(100);
  SIM.println();
  delay(30000);
  //等待30秒後
  SIM.println("ATH");
  //掛斷電話 請見說明檔案
}
