#include <pthread.h>
#include <stdio.h>


pthread_mutex_t mutex;

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    for (int j = 0;j < 1000000;j++) {
        pthread_mutex_lock(&mutex);
        i++;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

void* decrementingThreadFunction(){
    for (int j = 0;j < 1000000;j++) {
        pthread_mutex_lock(&mutex);
        i--;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main(){
    pthread_t incrementingThread, decrementingThread;
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
                   // Arguments to a thread would be passed here ---------^

    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    printf("Final value of i: %d\n", i);
    return 0;

}
