#include<stdio.h>
#include<time.h>
int main()
{

	printf("Welcome to roclinux.cn\n");
	time_t mytime;
	struct tm *mylocaltime;
	mytime=time(NULL);
	mylocaltime=localtime(&mytime);
	printf("Year:%d\n",mylocaltime->tm_year+1900);
	printf("Month:%d\n",mylocaltime->tm_mon+1);
	printf("Day:%d\n",mylocaltime->tm_mday);
	printf("Hour:%d\n",mylocaltime->tm_hour);
	printf("Min:%d\n",mylocaltime->tm_min);
	printf("Second:%d\n",mylocaltime->tm_sec);
	printf("Version: 0.02\n");
	printf("Hello world!\n");
	return 0;
}
