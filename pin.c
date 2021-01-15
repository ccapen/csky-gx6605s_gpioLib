#include "pin.h"
int openPin(int PinNum,Direction dir){
	int fd;
	char sf[100];
	if(PinNum>13||PinNum<5) return -1;
	fd=open("/sys/class/gpio/export",O_WRONLY);
	write(fd,PinNum,sizeof(int);
	close(fd);
	sprintf(sf,"/sys/class/gpio/gpio%d/direction",PinNum);
	fd=open(sf,O_WRONLY);
	if(dir==in)
		write(fd,"in",sizeof("in"));
	else
		write(fd,"out",sizeof("out"));
	close(fd);
	return 0;
}
int setPin(int PinNum,bool val){
	int fd;
	char sf[100];
	if(PinNum>13||PinNum<5) return -1;
	sprintf(sf,"/sys/class/gpio/gpio%d/value",PinNum);
	fd=open(sf,O_WRONLY);
	if(val)
		write(fd,"1",1);
	else
		write(fd,"0",1);
	close(fd);
	return 0;
}
int closePin(int PinNum){
	int fd;
	if(PinNum>13||PinNum<5) return -1;
	fd=open("/sys/class/gpio/unexport",O_WRONLY);
	write(fd,PinNum,sizeof(int);
	close(fd);
	return 0;
}

