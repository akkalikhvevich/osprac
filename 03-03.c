#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
   printf("Всего слов в командной строке : %d \n Сами слова : \n", argc); 
   for(int i = 0; i<argc ; i++){
        printf("%s \n", argv[i]); 
   }
    printf("Переменные окружения: \n"); 
    int i = 0;
    while(envp[i] != NULL){
         printf("%s \n", envp[i]); 
         i++;
    }

  return 0;
}
