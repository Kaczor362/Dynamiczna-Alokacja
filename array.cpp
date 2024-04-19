//
// Created by student on 19.04.2024.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "array.h"


void wpisywanie(int array[])
{

    for (int i = 0; i < *SIZE; ++i) {
        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }
}

void displayArray(int array[]){
    for (int i = 0; i < *SIZE; ++i) {
        printf("array [%d] = %d\n", i, array[i]);
    }
}
int findMaximumValue(int array[]){
    int max = array[0];
    for (int i = 0; i < *SIZE; ++i) {
        if (array[i]>max)
        {
            max = array[i];
        }
    }
    return max;
}
int findMinimumValue(int array[]){
    int min = array[0];
    for (int i = 0; i < *SIZE; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}
int findSumValue(int array[])
{
    int sum = 0;

    for (int i = 0; i < *SIZE; ++i) {
        sum += array[i];
    }
    float ave = (float) sum / *SIZE;
    return ave;
}
float Average(int *array){
    int sum = 0;
    for (int i = 0; i< *SIZE; i++){
        printf("array[%d]= ", i);
        scanf("%d",(array+1));
    }
}

