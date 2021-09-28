// program for multiple threads and simultaneous execution

#include<stdio.h>
#include<pthread.h>
#include<signal.h>

void * thread1(void *arg)
{     	int i;
	printf("\n thread id is %u\n",pthread_self());
      	while(1) { printf("\n thread1 "); sleep(1); }
	pthread_exit(0);
}
void *thread2(void *arg)
{	int i;
	printf("\n thread id is %u\n",pthread_self());
      	while(1) { printf("\n thread2 "); sleep(1); }
	pthread_exit(0);
}

void sighandler()
{
	printf("\n signal handler called from %u\n ",pthread_self());
}

int main()
{   pthread_t   t1,t2;
    printf("\n main thread id is %u\n",pthread_self());
    signal(SIGUSR1,sighandler);
    
    pthread_create(&t1,NULL,thread1,NULL);
    pthread_create(&t2,NULL,thread2,NULL);
    pthread_kill(t2,SIGUSR1);
    sleep(10);

    pthread_cancel(t1);
    pthread_cancel(t2);

    printf("\n thread cancelled\n ");
    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
}    
