#ifndef SIGMA_H_
#define SIGMA_H_

#include<math.h>

#define N 20
#define H 30
#define W 32

int sumx(int data[N][2]);
int xy(int data[N][2]);
int x_squared(int data[N][2]);
int sumy(int data[N][2]);
float slope(int data[N][2]);
float intercept(int data[N][2]);

#endif
