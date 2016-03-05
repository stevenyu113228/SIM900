/*
SIM900傳遞簡訊程式
BY 游照臨 20160305
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
  sendSMS();
  //呼叫寄送簡訊函式
  while(1)
  {
	//無窮迴圈讓程式卡住
  }
}

//寄送簡訊函式
void sendSMS()
{
  SIM.print("AT+CMGF=1\r");
  //AT指令請見說明檔案
  delay(100);
  SIM.println("AT + CMGS =\"+886912345678\"");
  //AT指令請見說明檔案
  // \" 為跳脫字元
  
  delay(100);
  SIM.println("HelloWorld!");
  //簡訊內容
  
  delay(100);
  SIM.println((char)26);
  //0x1A
  
  delay(100); 
  SIM.println();
  delay(5000);
}
