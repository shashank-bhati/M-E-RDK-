#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void handler(int num){
    write(STDOUT_FILENO,"Do not want to stop\n",1);
    
}
void seghandler(int num){
    write(STDOUT_FILENO,"Seg Faut\n",10);
}
int main(){
    struct sigaction sa;
    sa.sa_handler = handler;
    sigaction(SIGINT,&sa,NULL);
    // sigaction(SIGTERM,&sa,NULL);

    while (1)
    {
        printf("Learning the signal handling %d\n",getpid());
        sleep(100);
    }
    

}