//
// Created by student on 19.04.2024.
//
#include <iostream>
#include "array.h"
using namespace std;

void displayArray(int array[]){
    for (int i = 0; i < SIZE; ++i) {
        cout<<("array [%d] = %d\n", i, array[i]);
    }
}
int findMaximumValue(int array[]){
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i]>max)
        {
            max = array[i];
        }
    }
    return max;
}
int findMinimumValue(int array[]){
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}
int findSumValue(int array[])
{
    int sum = 0;

    for (int i = 0; i < SIZE; ++i) {
        sum += array[i];
    }
    float ave = (float) sum / SIZE;
    return ave;
}
void wpisywanie(int array[])
{
    for (int i = 0; i < SIZE; ++i) {
        cout<<("array[%d]=", i);
        scanf("%d", &array[i]);
    }
}

