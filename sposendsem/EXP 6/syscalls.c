#include <stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
pid_t cpid;
int *status=NULL;
cpid = fork();
if( cpid == 0 ) {
printf("\n*************** This is child process ***************\n ");
printf("\n\t Process id is : %d", getpid());
printf("\n\t Parent's process id is : %d", getppid());
sleep(15);
printf("\n*************Child process terminates ***************\n");
}
else {
printf("\n\t My process id is : %d", getpid());
printf("\n\t My Parent process id is : %d", getppid());
cpid = wait(status);
cpid
printf("\n\n\t Parent process collected the exit status of child process with PID
%d\n\n", cpid);
}
return 0;
}
