# SIM900
Sim900 
AT指令基本講解
By 游照臨 2016/03/05

自行用TTL線連接後!!!!!
如果並非插版式的
請把Jumper取下
直接接在中間腳位TX與RX
使用USB to TTL 線
連接進入電腦使用AT指令調試

如使用RealTerm
請選擇COM port後
Desplay As Ansi
Baud(鮑率) 19200
Send EOL +CR

一.基本設定指令

指令:AT
回應:OK
代表通訊成功!!

如果丟AT給他 沒有回應OK的話
那就不用往下測試了
因為根本連接失敗

指令:AT+CPIN?
回應:+CPIN: READY 
代表抓到SIM卡 OK
如果回應:+CPIN: PH-NET PIN
代表卡片可能被鎖ㄌ
也有可能是模組被鎖定了
需要刷新韌體


指令:AT+CSQ  
回應:+CSQ: 數字,0
這個指令是在查詢網路訊號強度
範圍0~31

指令:AT+COPS?
回應:+COPS: 0,0,"Chunghwa Telecom"  
查詢SIM卡的通訊業者
範例為台灣的種花電信

指令:AT+CGMM                                                                         
回應:SIMCOM_SIM900  
查詢卡片的型號

二.CALL指令
1.
接電話相關
如果打電話給裝在模組內的手機號碼
此時AT模式會出現
RING
RING
RING
約每三秒出現一次

如果回應ATA
可以接起手機
如果回應ATH
可以掛斷手機

2.打電話
(在台灣)
假設要打的手機是
0912345678
那請輸入
ATD+886912345678;
也就是要包含國碼
然後第一個0不要寫

最後記得一定要分號!
最後記得一定要分號!!
最後記得一定要分號!!!
因為很重要所以要說三次

掛斷同上 輸入ATH

3.SMS(簡訊)
AT+CMGF=1 
AT+CGMS="+88612345678" 
HelloWorld
0x1A


