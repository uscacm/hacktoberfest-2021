#include<iostream>

using namespace std;

int[] twoSum(int arr[], int target, int length) {}
    int arr[length]
    int result[2];
    int target;

    for (int i = 0; i < length; i++) {
        int value = arr[i];
        for (int j = i + 1; j < length; j++) {
            int value1 = arr[j];
            if (value + value1 == target) {
                result[0] = i;
                result[1] = j;
            }
        }
    }
    return result;
}