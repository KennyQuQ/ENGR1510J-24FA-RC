#include <stdio.h>
#include <math.h>
#define SIZE 10

// Function prototypes
float calculateMean(int arr[], int size);
float calculateMedian(int arr[], int size);
float calculateVariance(int arr[], int size, float mean);
float calculateStdDev(float variance);

int main() {
    int marks[SIZE];
    float results[4];  // Array to store mean, median, variance, and standard deviation

    // Input marks
    printf("Enter 10 marks:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &marks[i]);
    }

    // Calculations
    results[0] = calculateMean(marks, SIZE);           // Mean
    results[1] = calculateMedian(marks, SIZE);         // Median
    results[2] = calculateVariance(marks, SIZE, results[0]); // Variance
    results[3] = calculateStdDev(results[2]);          // Standard Deviation

    // Output results
    printf("Results:\n");
    printf("Mean: %.2f\n", results[0]);
    printf("Median: %.2f\n", results[1]);
    printf("Variance: %.2f\n", results[2]);
    printf("Standard Deviation: %.2f\n", results[3]);

    return 0;
}

// Function definitions
float calculateMean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

float calculateMedian(int arr[], int size) {
    // Sort array
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Calculate median
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

float calculateVariance(int arr[], int size, float mean) {
    float variance = 0.0;
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / size;
}

float calculateStdDev(float variance) {
    return sqrt(variance);
}
