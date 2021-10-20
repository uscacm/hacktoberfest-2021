#include<iostream>

using namespace std;

bool rotateString(char* s, char* goal, int length) {
    char* result;
    //initialize result
    result[length - 1] = s[0];
    for (int i = 0; i < length-1; i++) {
        result[i] = s[i+1]
    }

    //compare with goal
    for (int i = 0; i < length; i++) {
        if (result[i] != goal[i]) {
            return false;
        }
    }
    return true;
}