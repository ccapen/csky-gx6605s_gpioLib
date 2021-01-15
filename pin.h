#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
enum Direction{
	in,
	out
};
/*open pin(5 to 13),return 0 when success,-1 when fail*/
int openPin(int PinNum,Direction dir);
/*set value of pin(5 to 13),return 0 when success,-1 when fail*/
int setPin(int PinNum,bool val);
/*close pin(5 to 13),return 0 when success,-1 when fail*/
int closePin(int PinNum);

