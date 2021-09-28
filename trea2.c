//program for multiple thread creation

#include<stdio.h>
#include<pthread.h>

void *thread1(void *arg)
{     printf("\n thread1 called with %d \n" ,*(int*)arg);
      pthread_exit(1);
}
void *thread2(void *arg)
{     printf("\n thread2 called with %s \n",(char *)arg);
      pthread_exit(2);
}

int main()
{   pthread_t t1,t2;
    int val1=100;
    char val2[]="suhani";

    pthread_create(&t1,NULL,thread1,&val1);
    pthread_create(&t2,NULL,thread2,&val2);

    int *retptr;
    pthread_join(t1,(void**)&retptr);
    printf("\n thread1 returned %d \n",retptr);
    pthread_join(t2,(void**)&retptr);
    printf(" \n thread2 returned %d\n",retptr);
}    
