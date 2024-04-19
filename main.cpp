#include <iostream>
#include "array.h"

void menu(void){

    printf("1.enter data\n");
    printf("2. display the content of the array\n");
    printf("3. detemine the minimum value \n");
    printf("4. detemine the maximum value \n");
    printf("5. detemine the average value \n");
    printf("0.Exit\n");
    printf("Select an option:\n");
}
int main() {
    int array[SIZE] = {1, 2, 3, -4, 50, 6, 7, 8, 9, 10};
    printf("Simple array...\n");

    int option = 0;
    int max = findMaximumValue(array);
    int min = findMinimumValue(array);
    float avg = findSumValue(array);
    do {
        menu();
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;
            case 1:
                wpisywanie(array);
                break;
            case 2:
                displayArray(array);
                break;
            case 3:
                findMinimumValue(array);
                printf("wynik = %d\n", min);
                break;
            case 4:
                findMaximumValue(array);
                printf("wynik = %d\n", max);
                break;
            case 5:
                findSumValue(array);
                printf("wynik = %f\n", avg);
                break;
            default:
                printf("Chose correct number...\n\n");
        }
    } while (option != 0);
    {
        printf("koniec : )\n");
    }
    return 0;
}