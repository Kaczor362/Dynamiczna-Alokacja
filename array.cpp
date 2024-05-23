
#include <iostream>
#include "array.h"

void displayArray(int array[]){
    for (int i = 0; i < SIZE; ++i) {
        printf("array [%d] = %d\n", i, array[i]);
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
    printf("wynik = %d\n", max);
    return max;
}
int findMinimumValue(int array[]){
    int min = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("wynik = %d\n", min);
    return min;
}
int findSumValue(int array[])
{
    int sum = 0;

    for (int i = 0; i < SIZE; ++i) {
        sum += array[i];
    }
    float avg = (float) sum / SIZE;
    printf("wynik = %f\n", avg);
    return avg;
}
void wpisywanie(int array[])
{
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }
}

void saveData(int array[]) {
    fptr = fopen("array.txt", "w");
    if (fptr != 0) {
        for (int i = 0; i < 10; i++) {
            fprintf(fptr, "%d\n", array[i]);
        }
        fclose(fptr);
        printf("Data saved to file successfully.\n");
    } else {
        printf("Error opening file!\n");
    }
}

void restoreDataFromFile (int array[]) {
    fptr = fopen("array.txt", "r");
    if (fptr != NULL) {
        char fileLine[50];
        while (fgets(fileLine, sizeof(fileLine), fptr) != 0) {
            printf("%s", fileLine);
        }
        fclose(fptr);
        printf("Data restored from file successfully.\n");
    } else {
        printf("Error opening file!\n");
    }
}