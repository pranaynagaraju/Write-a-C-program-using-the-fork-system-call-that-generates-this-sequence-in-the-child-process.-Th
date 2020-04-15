#include<sys/wait.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
int n=0;
int l=0;
int f;
printf("Enter a number greater than zero\n"); 
scanf("%d", &l);	

if(l>0)
{
f= fork();
if (f == 0)
{
printf("Child1 with pid %d\n",getpid());
printf("%d\n",l);
while (1==1)
{
if (l%2 == 0)
{
l = l/2;
}
else 
if (l%2 == 1)
{
l = 3*(l)+1;
}	
printf("%d\n",l);
if (l==1)
{
break;			
}
}
}
else
{
wait(NULL);//to avoid orphan process here the parent process is waiting till the completion of child process.
}
return 0; 
}
else
if(f=!0)
{
printf("error! enter a valid number");
}
}
