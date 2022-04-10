/*
 * Program that receives an integer
 * representing secontds. The program
 * should convert the given seconds to
 * hour, minutes and seconds and print
 * the result in following format
 * hh:mm:ss format.
 */

#include <stdio.h>

int main()
{
	int totalSeconds;
	int hours, minutes, seconds;
	
	/*user input*/
	printf("Enter the amount of seconds: ");
	scanf("%d", &totalSeconds);
	
	/*calculating the hours, minutes and seconds*/
	hours = totalSeconds / 3600;
	minutes = (totalSeconds - hours*3600) / 60;
	seconds = (totalSeconds - hours*3600) % 60;
	
	/*printing the result in format hh:mm:ss*/
	if(hours < 10)
		printf("0");
	printf("%d:", hours);
	if(minutes < 10)
		printf("0");
	printf("%d:", minutes);
	if(seconds < 10)
		printf("0");
	printf("%d", seconds);
	
	return 0;
}