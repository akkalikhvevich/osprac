#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
  pid_t pid, ppid;
  int a = 0;

  pid = fork();
   
  if(pid ==-1){
   printf("Ошибка"); 
  }
  else if (pid == 0){
   printf("Привет из процесса-ребенка \n"); 
  }
  else {
   printf("Привет из процесса-родителя \n"); 
  }

  pid  = getpid();
  ppid = getppid();

  printf("My pid = %d, my ppid = %d\n", (int)pid, (int)ppid, a);

  return 0;
}
