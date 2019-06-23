#include <stdio.h>

int listSize = 5;
int numberArray[5];
int valueConsideredEmpty = 0;

void sendRepeatingChars(int count, char *charToRepeat) {
    int i = 0;
    for (i = 1; i <= count; i++) {
        printf("%s", charToRepeat);
    }
    i = 0;
}

void setStackDefaultData (int passedArray[listSize]) {
    int i = 0;
    for (i = 0; i < listSize; i++) {
        passedArray[i] = valueConsideredEmpty;
    }
    i = 0;
}

void displayNumericArray(int passedArray[listSize]) {
    int i = 0;
    printf("\nArray data: ");
    for (i = 0; i < listSize; i++) {
        printf("%d", passedArray[i]);
        if (i < (listSize - 1)) {
            printf(", ");
        }
    }
    i = 0;
}

int popStackData(int passedArray[listSize]) {
    int i = 0;
    for (i = 0 - 1; i <= listSize; i++) {
        int idx = listSize - i;
        if (passedArray[idx] > valueConsideredEmpty) {
            int poppedData = passedArray[idx];
            passedArray[idx] = valueConsideredEmpty;
            i = 0;
            return poppedData;
        }
    }
    i = 0;
    return valueConsideredEmpty;
}

void pushStackData(int passedArray[listSize], int dataEntry) {
    int i = 0;
    for (i = 0; i < listSize; i++) {
        if (passedArray[i] == valueConsideredEmpty) {
            passedArray[i] = dataEntry;
            i = 0;
            return;
        }
    }
    i = 0;
}

int stackIsFull(int passedArray[listSize]) {
    int isFull = 1;
    int i = 0;
    for (i = 0; i < listSize; i++) {
        if (passedArray[i] == valueConsideredEmpty) {
            i = 0;
            return 0;
        }
    }
    i = 0;
    return 1;
}

int stackIsEmpty(int passedArray[listSize]) {
    int i = 0;
    for (i = 0; i < listSize; i++) {
        if (passedArray[i] != valueConsideredEmpty) {
            i = 0;
            return 0;
        }
    }
    i = 0;
    return 1;
}

int main () {
    int choice = 0;
    sendRepeatingChars(3, "*");
    printf(" Stack in C ");
    sendRepeatingChars(3, "*");
    setStackDefaultData(numberArray);
    int newStackInput = 0;
    while (choice != 4) {
        sendRepeatingChars(2, "\n");
        sendRepeatingChars(20, "-");
        printf("\n");
        printf("Choose what to do:");
        sendRepeatingChars(2, "\n");
        printf("(1) Push data to stack\n(2) Pop data from stack\n(3) Diplay stack data\n(4) Exit program");
        sendRepeatingChars(2, "\n");
        printf("What to do? : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice) {
            case 1:
                if (stackIsFull(numberArray) > 0) {
                    printf("ERROR: Stack is full.");
                    continue;
                }
                printf("Key in the numeric value you want to add to the stack: ");
                scanf("%d", &newStackInput);
                if ( newStackInput == valueConsideredEmpty ) {
                    printf("\nERROR: Entered value is considered empty.");
                    continue;
                }
                pushStackData(numberArray, newStackInput);
                displayNumericArray(numberArray);
                break;
            case 2:
                if (stackIsEmpty(numberArray)) {
                    printf("ERROR: Stack is empty.");
                    continue;
                }
                int popped = popStackData(numberArray);
                printf("Popped data: %d \n", popped);
                displayNumericArray(numberArray);
                break;
            case 3:
                displayNumericArray(numberArray);
                break;
            case 4:
                printf("Thank you.");
                break;
            default:
                printf("ERROR: Invalid choice");
                break;
        }
    }
    sendRepeatingChars(2, "\n");
    return 0;
}
