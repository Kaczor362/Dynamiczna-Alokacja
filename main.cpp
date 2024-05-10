#include <iostream>
#include "array.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>

using namespace std;


void menu(void){

    cout<<("\n1.enter data\n");
    cout<<("2. display the content of the array\n");
    cout<<("3. detemine the minimum value \n");
    cout<<("4. detemine the maximum value \n");
    cout<<("5. detemine the average value \n");
    cout<<("0.Exit\n");
    cout<<("Select an option:\n");
}

int main() {
    int array[SIZE] = {1, 2, 3, -4, 50, 6, 7, 8, 9, 10};
    cout<<("Simple array...\n");

    int option = 0;
    int max = findMaximumValue(array);
    int min = findMinimumValue(array);
    float avg = findSumValue(array);
    do {
        menu();
        cin>>option;
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
                cout<<("wynik = %d\n", min);
                break;
            case 4:
                findMaximumValue(array);
                cout<<("wynik = %d\n", max);
                break;
            case 5:
                findSumValue(array);
                cout<<("wynik = %f\n", avg);
                break;
            default:
                cout<<("Chose correct number...\n\n");
        }
    } while (option != 0);
    {
        cout<<("koniec : )\n");
    }
    return 0;
}