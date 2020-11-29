#include<stdio.h>
#include<windows.h>
int main()
{
	int hour,minute,second;
	int d=1000; // delay of 1000 milli sec i.e we add it too sleep
	printf("set time: \n");
	scanf("%d%d%d",&hour,&minute,&second);
	if(h>12||m>60||s>60)
   {
   	printf("ERROR...! \n");
   	exit(0);
   }
   while(1)
   {
   	s++;
   	if(second>59)
   	{
   		minute++;
   		second=0;
	   }
	   if(minute>59)
	   {
	   	hour++;
	   	minute=0;
	   }
	   if(hour>12)
	   {
	   	hour=1;
	   }
	   printf("\n CLOCK :");
	   printf("\n %02d:%02d:%02d",hour,minute,second); //for formate
	   sleep(d); // this to slow down the loop and make as a real
	   system("cls"); //clears the screen
	   
   }
}
