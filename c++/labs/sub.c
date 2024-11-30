#include <stdio.h>

// Function to print the subset
void printSubset(int subset[], int subsetSize) {
    printf("{ ");
    for (int i = 0; i < subsetSize; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
}

// Recursive function to find subset with sum equal to target
void findSubsetWithSum(int set[], int n, int subset[], int subsetSize, int index, int target) {
    // Base case: if target is 0, print the subset
    if (target == 0) {
        printSubset(subset, subsetSize);
        return;
    }

    // Base case: if we've gone through all elements or target becomes negative
    if (index == n || target < 0) {
        return;
    }

    // Include the current element and recurse
    subset[subsetSize] = set[index];
    findSubsetWithSum(set, n, subset, subsetSize + 1, index + 1, target - set[index]);

    // Exclude the current element and recurse
    findSubsetWithSum(set, n, subset, subsetSize, index + 1, target);
}

int main() {
    // Input set and target sum
    int set[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(set) / sizeof(set[0]);
    int target = 9;

    // Array to hold current subset
    int subset[n];
    
    // Find subsets with sum equal to target
    printf("Subsets with sum %d:\n", target);
    findSubsetWithSum(set, n, subset, 0, 0, target);

    return 0;
}