/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int global[2];
void *sum_th(void *arg)
{
	int n1, n2, sum;
	n1 = global[0];
	n2 = global[1];
	sum = n1=n2;
	printf("%d\n",sum);
	
	renturn NULL;
}
int main()
{
	printf("number one: ");
	scanf("%d", &global[0]);
	
	printf("number two: ");
	scanf("%d", &global[1]);
	
	pthread_t th_sum;
	pthread_create(&th_sum, NULL,th_sum,global);
	pthread_join(th_sum,NULL);
	
	return 0;
}
