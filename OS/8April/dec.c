#define PROCESS 5
#define RESOURCES 4
#include <time.h>


int Avail[RESOURCES];
int Max[PROCESS][RESOURCES];
int Alloc[PROCESS][RESOURCES];
int Need[PROCESS][RESOURCES];