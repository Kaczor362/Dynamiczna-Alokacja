#include <iostream>
#include "array.h"

FILE *fptr;
void menu(void){

    printf("1.enter data\n");
    printf("2. display the content of the array\n");
    printf("3. detemine the minimum value \n");
    printf("4. detemine the maximum value \n");
    printf("5. detemine the average value \n");
    printf("6- save data into Array \n");
    printf("7- print data from Array \n");
    printf("0.Exit\n");
    printf("Select an option:\n");
}

int main() {
    int array[SIZE];
    printf("Simple array...\n");
    fptr=fopen("array.txt", "w");
    int option = 0;
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
                break;
            case 4:
                findMaximumValue(array);
                break;
            case 5:
                findSumValue(array);
                break;
            case 6:
                saveData(array);
                if(fptr!=0) {
                    printf("Array saved to the file \n \n");
                }
                break;
            case 7:
                restoreDataFromFile(array);
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