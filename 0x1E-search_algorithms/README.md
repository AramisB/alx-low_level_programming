Search Algorithms in C
This document provides a brief overview of common search algorithms implemented in C, along with their space and time complexities.

1. Linear Search

Description:
Linear search iterates through an array element by element, comparing each element with the target value.

C Implementation:

int linear_search(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; // Element found at index i
        }
    }

    return -1; // Element not found
}
Space Complexity: O(1) - Uses a constant amount of extra space (fixed-size variables).
Time Complexity: O(n) - Grows linearly with the number of elements (worst case: compares all elements).

Advantages:
Simple to understand and implement.
Works with unsorted data.

Disadvantages:
Inefficient for large datasets.

2. Binary Search
Description:
Binary search works on sorted arrays. It repeatedly halves the search interval by comparing the target value with the middle element of the remaining sub-array.

C Implementation:
int binary_search(int arr[], int size, int value) {
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == value) {
            return mid;
        } else if (arr[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Not found
}
Space Complexity: O(1) - Uses a constant amount of extra space (fixed-size variables).
Time Complexity: O(log n) - Grows logarithmically with the number of elements (highly efficient for large sorted arrays).

Advantages:
Very efficient for large sorted arrays.
Simpler to implement compared to some other efficient search algorithms.

Disadvantages:
Requires the array to be sorted beforehand.

3. Jump Search
Description:
Jump Search is a search technique for sorted arrays. It works by jumping ahead fixed distances in the array, effectively reducing the number of elements compared to linear search.

C Implementation:

int jump_search(int arr[], int n, int x) {
    int jump = sqrt(n);
    int current = 0;

    // Find the block where x should be located
    while (current <= n - 1 && arr[current] < x) {
        current += jump;
    }

    // If x is found before or at the found block
    current = current - jump;
    for (int i = current; i <= current + jump && i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }

    return -1; // Not found
}
Space Complexity: O(1) - Uses a constant amount of extra space (fixed-size variables).
Time Complexity: O(√n) - Lies between linear search (O(n)) and binary search (O(log n)).

Advantages:
Faster than linear search for large sorted arrays.
Simpler to implement compared to Binary Search in some cases.

Disadvantages:
Not as efficient as Binary Search for very large arrays.
Requires the array to be sorted.

4. Interpolation Search
Description:
Interpolation Search is an improvement over linear search for uniformly distributed data. It estimates the position of the target value based on its value and the positions of elements around it.

C Implementation:

int interpolation_search(int arr[], int size, int value) {
    int low = 0;
    int high = size - 1;

    while (low <= high && value >= arr[low] && value <= arr[high]) {
        int pos = low + (value - arr[low]) * (high - low) / (arr[high] - arr[low]);

        if (arr[pos] == value) {
            return pos;
        }

        if (arr[pos] < value) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1; // Not found
}
Space Complexity: O(1) - Uses a constant amount of extra space (fixed-size variables).
Time Complexity: O(log log n) (average case for uniformly distributed data) - Can be faster than binary search in specific cases, but the worst-case complexity is O(n).

Advantages:
Potentially faster than binary search for uniformly distributed data.

Disadvantages:
Requires uniformly distributed data for optimal performance.
More complex to implement compared to linear or binary search.

5. Exponential Search
Description:
Exponential Search is suitable for sorted but potentially infinite arrays. It repeatedly jumps by powers of 2 until the target value is found or the jump exceeds the array size. Then, a binary search is performed within the identified sub-array.

C Implementation:
int exponential_search(int arr[], int size, int value) {
    if (arr[0] == value) {
        return 0;
    }

    int i = 1;
    while (i < size && arr[i] <= value) {
        i = i * 2;
    }

    return binary_search(arr, size > i ? i / 2 : 0, value); // Binary search within sub-array
}
Space Complexity: O(1) - Uses a constant amount of extra space (fixed-size variables and the binary search call).
Time Complexity: O(log n) (average case) - Efficient for sorted arrays with an upper bound on the element's position.

Advantages:
Efficient for sorted arrays with a potentially large upper bound on the element's position.
Disadvantages:
Not suitable for finite arrays where the size is known beforehand.
Can be less efficient than binary search for smaller arrays.

6. Advanced Binary Search Variations
Binary search can be further optimized for specific scenarios. Here are two examples:

a) Recursive Binary Search
The standard binary search implementation is iterative. However, it can also be implemented recursively, breaking down the search space into sub-problems:

C
int binary_search_recursive(int arr[], int low, int high, int value) {
    if (low > high) {
        return -1; // Not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == value) {
        return mid;
    } else if (arr[mid] < value) {
        return binary_search_recursive(arr, mid + 1, high, value);
    } else {
        return binary_search_recursive(arr, low, mid - 1, value);
    }
}
Space Complexity: O(log n) due to function call stack (worst case).
Time Complexity: Same as iterative binary search (O(log n)).

b) Ternary Search
Ternary search is a variation of binary search that divides the search space into three parts instead of half. It can be slightly faster for specific data distributions.

Implementation details are beyond the scope of this document, but the space and time complexities remain O(log n).

Choosing the Right Search Algorithm
The choice of search algorithm depends on the characteristics of your data and the performance requirements:
For unsorted data, linear search is the simplest option.
For large sorted arrays, binary search offers the best efficiency (O(log n)).
For very large sorted arrays where simplicity is a factor, jump search can be a compromise between linear search and binary search.

This overview provides a starting point for understanding and selecting the appropriate search algorithm for your C programs.

