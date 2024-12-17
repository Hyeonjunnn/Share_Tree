#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

// Researching, NOT YET
void find_os(){
    system("systeminfo");
}

// Start Getting Tree
void sys_tree(){
    printf("\n Getting Tree \n");
    
    char buffer[1000];
    char str[1000];
    int ret = system("tree");
    scanf("%s", str);
    // chk_end(ret);

    printf("\n---------------------\n");
    sprintf(buffer, "%s", str);
    return 0;
}

// Checking now, NOT USED
// Check Getting Tree
void chk_end(ret){
    printf("system 함수 종료 :%d\n", WEXITSTATUS(ret));
}

int main()
{
    find_os();
    sys_tree();

    return 0;
} 