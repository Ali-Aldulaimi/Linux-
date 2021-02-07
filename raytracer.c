#include <unistd.h>    
#include <sys/types.h> 
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>  
#include <pthread.h> 
#include <string.h>

/* prototype for out threads */
void print_thread(void *ptr);

/* Struct to hold data to be passed to a thread */
typedef struct
{
    int thread_no;
    char message[100];
}tdata;

int main(int argc, char *argv[])
{
    pthread_t thread1, thread2;  /* Thread variables */
    tdata data1, data2;          /* Structs to be passed to threads */
    
    /* Initialize data to pass to thread 1 */
    data1.thread_no = 1;
    strcpy(data1.message, "Ping");

    /* Initialize data to pass to thread 2 */
    data2.thread_no = 2;
    strcpy(data2.message, "Pong");
    
    /* Create threads 1 and 2 */    
    pthread_create (&thread1, NULL, (void *) &print_thread, (void *)&data1);
    pthread_create (&thread2, NULL, (void *) &print_thread, (void *)&data2);

    /* Main blocks now and waits for both threads to finish before it exits */ 
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
              
 
return 0;
}


/* Print_thread is used for both threads */
void print_thread(void *ptr)
{
    tdata *data;            
    data = (tdata *)ptr;  /* Type cast to a pointer to tdata */
    
    /* Do the work */
    printf("Thread %d has the message %s \n", data->thread_no, data->message);
    
    pthread_exit(0); /* Exit */
}
