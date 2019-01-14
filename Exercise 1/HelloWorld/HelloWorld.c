#include <pthread.h>
#include <stdio.h>

void* ThreadFunction(){         // Return type: void* !!!
    printf("Hello World -  ThreadFunction!\n");
    return NULL;
}

int main(){
    pthread_t ThreadFunc;
    pthread_create(&ThreadFunc, NULL, ThreadFunction, NULL);
                     // Arguments to a thread ---------^

    pthread_join(ThreadFunc, NULL);
    printf("Hello world - Main Function!\n");
    return 0;

}