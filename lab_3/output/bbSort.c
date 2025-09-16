#include <stdio.h>
#include <time.h>

void insertion(int arr[], int n);

int main() {
    int arr[99999];
    int n = 99999;
    double cpu_time;
    FILE* file;
    clock_t start, end;

    file = fopen("best_case.txt", "r");

    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);

    start = clock();
    insertion(arr, n);
    end = clock();

    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", cpu_time);

    return 0;
}

void insertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}
