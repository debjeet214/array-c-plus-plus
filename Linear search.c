#include <stdio.h>
int main() {
    int size, target, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++){
        if (arr[i] == target) {
            found = 1;
            printf("Element %d found at index %d.\n", target, i);
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}
