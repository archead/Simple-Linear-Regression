#include "csv.h"
#include <stdlib.h>
#include <stdio.h>

void readCSV(char* filename, int data[N][2]){
    
    FILE * fpointer = fopen(filename, "r");

    for (int i = 0; i < N; i++)
        fscanf(fpointer, "%d %*c %d",&data[i][0], &data[i][1]);

    printf("Points found:\n");
    for (int i = 0; i < N; i++)
        printf("(%d, %d) ", data[i][0], data[i][1]);
    printf("\n\n");
        
    fclose(fpointer);
}