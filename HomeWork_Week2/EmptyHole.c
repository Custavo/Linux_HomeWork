#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ourhdr.h"

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main(void){
	int fd;
	if((fd = creat("file.hole",0644)) < 0)
		err_sys("creat error\n");
	if((write(fd,buf1,10)) != 10)
		err_sys("write error\n");
	if((lseek(fd,40,SEEK_SET)) == -1)
		err_sys("seek error\n");
	if((write(fd,buf2,10)) != 10)
		err_sys("write error\n");
	return 0;
}
