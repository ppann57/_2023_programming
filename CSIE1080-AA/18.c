#include <stdio.h>

// Function to count the number of swaps needed to sort the train carriages
int countSwaps(int arr[], int length) {
    int swaps = 0;
    for (int i = 0; i < length; i++) {
        while (arr[i] != i + 1) {
            // Swap the current carriage with the one at its correct position
            int temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
            swaps++;
        }
    }
    return swaps;
}

int main() {
    int N; // Number of test cases
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int L; // Length of the train
        scanf("%d", &L);

        int carriages[L];
        for (int j = 0; j < L; j++) {
            scanf("%d", &carriages[j]);
        }

        // Count the swaps needed for the current test case
        int swaps = countSwaps(carriages, L);

        // Output the result for the current test case
        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}
