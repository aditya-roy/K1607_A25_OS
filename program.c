#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
static const direction[]={'N','S','E','W'};
static const Turn[]={'L','R','S'};
static void straight(int, int);
static void leftturn(int, int);
static void rightturn(int, int);
static void * criticalsection(void*);
pthread_mutex_t NW ;
pthread_mutex_t NE ;
pthread_mutex_t SE ;
pthread_mutex_t SW ;

