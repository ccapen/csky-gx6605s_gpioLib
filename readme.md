# simple pin lib for csky-gx6605s
- int openPin(int PinNum,Direction dir);
	- open pin(5 to 13),return 0 when success,-1 when fail
- int setPin(int PinNum,int val);
	- set value of pin(5 to 13),return 0 when success,-1 when fail
- int readPin(int PinNum);
	- read pin(5 to 13),return value when success,-1 when fail
- int closePin(int PinNum);
	- close pin(5 to 13),return 0 when success,-1 when fail