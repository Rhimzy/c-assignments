// int getFirstItem(int array[], int size) {
//     return array[0];  // Always takes one step, no matter the size
// }


// int findNumber(int array[], int size, int target) {
//     for(int i = 0; i < size; i++) {
//         if(array[i] == target) {
//             return 1;  // Found it!
//         }
//     }
//     return 0;  // Didn't find it
// }

// int binarySearch(int array[], int left, int right, int target) {
//     while(left <= right) {
//         int middle = left + (right - left) / 2;
        
//         if(array[middle] == target) {
//             return 1;  // Found it!
//         }
        
//         if(array[middle] < target) {
//             left = middle + 1;  // Look in right half
//         } else {
//             right = middle - 1;  // Look in left half
//         }
//     }
//     return 0;  // Didn't find it
// }

// void findPairs(int array[], int size) {
//     for(int i = 0; i < size; i++) {
//         for(int j = 0; j < size; j++) {
//             if(i != j && array[i] + array[j] == 10) {
//                 printf("Found pair: %d and %d\n", array[i], array[j]);
//             }
//         }
//     }
// }

// int main() {
//     int size = 100;
//     int array[100];
    
//     // O(1) - Always takes 1 step
//     int first = getFirstItem(array, size);
    
//     // O(n) - Takes up to 100 steps
//     int found = findNumber(array, size, 42);
    
//     // O(log n) - Takes about 7 steps
//     int found_binary = binarySearch(array, 0, size-1, 42);
    
//     // O(n²) - Takes 10,000 steps! 😱
//     findPairs(array, size);
    
//     return 0;
// }

#include <stdio.h>

int list[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 12}; // 15bytes, 1byte

// len now takes the array's size as an integer argument
int len(int size) {
    return size;
}

int main() {
    int size = sizeof(list) / sizeof(list[0]);  // Calculate the array size
    int arrsize = len(size);  // Pass the size of the array to len
    printf("%d is the size of List\n", arrsize);  // Print the size

    return 0;
}


// sdawdasdwasdw
