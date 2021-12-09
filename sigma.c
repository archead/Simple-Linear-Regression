#include <math.h>
#include "sigma.h"

int sumx(int data[N][2]){
    int x_sum = 0;
    for (int j = 0; j < N; j++)
        x_sum += data[j][0];
    return x_sum;
}

int xy(int data[N][2]){
    int x_y = 0;
    for (int i = 0; i < N; i++) 
        x_y += (data[i][0] * data[i][1]);
    return x_y;
}

int x_squared(int data[N][2]){
    int x2 = 0;
    for (int i = 0; i < N; i++)
        x2 += pow(data[i][0], 2);
    return x2;
}

int sumy(int data[N][2]){
    int y_sum = 0;
    for (int i = 0; i < N; i++)
        y_sum += data[i][1];
    return y_sum;
}
