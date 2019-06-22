#include <stdio.h>

int listSize = 5;
int numberArray[5];

void displayNumericArray(int passedArray[listSize]) {
    int i = 0;
    printf("Array data: ");
    for (i = 0; i < listSize; i++)
    {
        printf(" %d", passedArray[i]);
    }
}

void populateArrayData(int passedArray[listSize]) {
    printf("Key in %d items to populate array.\n", listSize);
    int i = 0;
    for (i = 0; i < listSize; i++)
    {
        printf("For item at index %d :", i);
        scanf("%d", &passedArray[i]);
    }
}

void popStackData(int passedArray[listSize]) {

}

void pushStackData(int passedArray[listSize], int dataEntry) {
    int i = 0;
    for (i = 0; i < listSize; i++)
    {
    }

}

int main () {
    printf("Hello VSCode\n\n");
    printf("\n");
    displayNumericArray(numberArray);
    printf("\n\n");
    return 0;
}
