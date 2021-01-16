#ifndef CSKY_GX6605S_GPIOLIB_
#define CSKY_GX6605S_GPIOLIB_
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
typedef enum{
	in,
	out
}Direction;
/*open pin(5 to 13),return 0 when success,-1 when fail*/
int openPin(int PinNum,Direction dir);
/*set value of pin(5 to 13),return 0 when success,-1 when fail*/
int setPin(int PinNum,int val);
/*read pin(5 to 13),return value when success,-1 when fail*/
int readPin(int PinNum);
/*close pin(5 to 13),return 0 when success,-1 when fail*/
int closePin(int PinNum);
#endif

