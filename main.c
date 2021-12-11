#include <stdio.h>
#include <math.h>
#include "sigma.h"
#include "csv.h"

int main(int arc, char **argv){
    
    int data[N][2];

    readCSV(argv[1], data);
    
    float m = slope(data);
    float b = intercept(data);
    char screen[H][W] ={{' '}}; // create screen buffer

    for (int i = 0; i < H; i++){ // fill the screen buffer with blanks
        for (int j = 0; j < W; j++)
            screen[i][j] = ' ';
    }

    for (int i = 0; i < N; i++) // replace blanks with '#' for each point
        screen[data[i][1]][data[i][0]] = 'x';
    
    for (int j = 0; j < W; j++) // replace blanks or '#'
        screen[(int)(m*j+b)][j] = '/';
    
    for (int i = H-1; i > 0; i--){ // print graph to console
        printf("|"); // create border (left side)
        for (int j = 0; j < W; j++)
            printf("%c ", screen[i][j]);
        printf("\n");
    }

    printf("L"); // create border (corner)
    for (int j = 0; j < W-1; j++)
        printf("--"); // create border (bottom)
        
    printf("\ny = %fX + %f\n", m, b); // print the slope
    return 0;
}
