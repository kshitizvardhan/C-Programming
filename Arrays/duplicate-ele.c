#include <stdio.h>


void removeDuplicates(int arr[], int length) {
    int newArray[length]; // Assuming a new array of the same length
    int newIndex = 0;

    for (int i = 0; i < length; i++) {
        int check = arr[i];
        int isDuplicate = 0;
        for (int j = 0; j < newIndex; j++) {
            if (newArray[j] == check) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            newArray[newIndex++] = check;
        }
    }

    // Print array after removing duplicates
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newIndex; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 2, 3, 5, 5, 1, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicates
    removeDuplicates(arr, length);

    return 0;

}
