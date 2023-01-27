#include "prefix_sum.h"

int prefix_sum(int array[], int length) {
    // var to hold prefix sum 
    int prefix_sum = 0;

    // loop through the array and keep adding to the prefi sum 
    for (int i = 0; i < length; i++) {
        prefix_sum += array[i];
    }

    // return prefix sum 
    return prefix_sum;

}

bool non_negative_prefix_sum(int array[], int length) {
    // base case
    // if array is empty return true 
    if (length == 0) {
        return true;
    }
    // use prefix sum func to make simpilar 
    // if all sequence’s prefix sums are positve return true else return false
    for (int i = 0; i < length; i++){
        // if 0 is greater than the sequence has a negative prefix sum 
        if (prefix_sum(array, i) < 0) {
            return false;
        }
    }
    // otherwise return positive
    return true;
}

// 
bool non_positive_prefix_sum(int array[], int length){
    // base case
    // if array is empty return true 
    if (length == 0) {
        return true;
    }
    // use prefix sum func to make simpilar 
    // if all sequence’s prefix sums are positve return true else return false
    for (int i = 0; i < length; i++){
        // if 0 is greater than the sequence has a positive prefix sum 
        if (prefix_sum(array, i) > 0) {
            return false;
        }
    }
    
    return true;
}
