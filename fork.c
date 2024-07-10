#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int 
main(){
int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
int O, E, n, i;
n = fork();
if (n > 0) 
{
printf("Parent process \n");
for (i = 0; i < 10; i++) 
{
if (a[i] % 2 != 0)
{
E = a[i];
printf("odd no. %d\n",E);
}
}
}
else if (n == 0)
{
printf("child process \n");
for (i = 0; i < 10; i++)
 {
if (a[i] % 2 == 0)
{
O = a[i];
printf("Even no.: %d\n",O);
}
}
}
return 0;
}


