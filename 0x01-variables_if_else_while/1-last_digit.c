#include <stdio.h>
#include <stdilb.h>
#include <time.h>
/*main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;
	strand(time(0));
	n =rand() -RAND_MAX/2;
	/*your code goes here */
	if(n>0)
	{
	prinf("%d is positive\n",n);
	}
	if(n<0)
	{
	prinf("%d is negative\n",n);
	}
	if(n==0)
	{
	printf("%d is zero\n",n);
	}
	return(0)

}
