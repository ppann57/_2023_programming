#include <stdio.h>

// Function to swap two integers
void swap(int a, int b, int arr[]) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

// Function to sort an array based on the rules mentioned
void customSort(int arr[], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int mod_i = arr[i] % M;
            int mod_j = arr[j] % M;

            // If modulo values are different, swap if needed
            if (mod_i > mod_j || (mod_i == mod_j && (arr[i] % 2 == 0 && arr[j] % 2 == 1 || (arr[i] % 2 == 1 && arr[j] % 2 == 1 && arr[i] < arr[j]) || (arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] > arr[j])))) {
                swap(i, j, arr);
            }
        }
    }
}

int main() {
    int N, M;

    while (1) {
        // Read N and M
        scanf("%d %d", &N, &M);

        // Terminate if N and M are both zero
        if (N == 0 && M == 0) {
            break;
        }

        // Read N numbers
        int numbers[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &numbers[i]);
        }

        // Use customSort function to sort the numbers
        customSort(numbers, N, M);

        // Print the results
        printf("%d %d\n", N, M);
        for (int i = 0; i < N; i++) {
            printf("%d\n", numbers[i]);
        }

        // Print the last two zeroes
        printf("0 0\n");
    }

    return 0;
}
