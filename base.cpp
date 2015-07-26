#include <stdio.h>

#include <stdlib.h>

#include <pthread.h>

 

void *t1 ( void *p ) {

    int i;

    for ( i = 0 ; i < 10 ; i++ ) {

        printf("This is thread1\n");

        system("sleep 2");

    }

    pthread_exit(NULL);

}

void *t2 ( void *p ) {

    int i;

    for ( i = 0 ; i < 10 ; i++ ) {

        printf("This is thread2\n");

       system("sleep 2");

    }

    pthread_exit(NULL);

}

 

int main(void)

{

    pthread_t   p1, p2;

    pthread_create(&p1,NULL,t1,NULL);

    pthread_create(&p2,NULL,t2,NULL);

		system("sleep 2");
    pthread_exit(NULL);

    return 0;

}
