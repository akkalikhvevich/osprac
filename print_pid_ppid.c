#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t pid = getpid();
pid_t ppid = getppid();

printf("Pid : %d, Ppid : %d \n",(int)pid,(int)ppid);

return 0;
}
