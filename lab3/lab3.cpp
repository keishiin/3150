#include <iostream>
#include "lab3.h"
// #include "../week02/prefix_sum.h"
// #include "../lab2/fisher_yates.h"

using namespace std;

int prefix_sum(int array[], int length) {
    // var to hold prefix sum 
    if (length == 0) {
        return 0;
    }

    int prefix_sum = 0;

    // loop through the array and keep adding to the prefi sum 
    for (int i = 0; i < length + 1; i++) {
        prefix_sum += array[i];
    }

    // return prefix sum 
    return prefix_sum;

}

bool non_negative_sum(int array[], int length) {
    // base case
    // if array is empty return true 
    if (length == 0) {
        return true;
    }
    // use prefix sum func to make simpilar 
    // if all sequence’s prefix sums are positve return true else return false
    for (int i = 0; i < length + 1; i++){
        // if 0 is greater than the sequence has a negative prefix sum 
        if (prefix_sum(array, i) < 0) {
            return false;
        }
    }
    // otherwise return positive
    return true;
}

void make_list(int arr[], int n) {
    int mid = n/2;
    
    // fill half the list with -1 and the other with 1

    for (int i = 0; i < mid; i++) {
        arr[i] = -1;
    }

    for (int j = mid; j < n; j++) {
        arr[j] = 1;
    }
}

void fisher_yates(int arr[], int n) {

    // loop through array 
    for (int i = n - 1; i >= 1; i--) {

        // generate a random index to swap with
        int j = rand() % n;

        // perfom the swap at the given indexes
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int lowest_depth(int arr[], int len){
    int lowest_index = 0; 
    int lowest_sum = 0;  
    int curr_sum = 0;

    // if no sum is lower than 0 
    // loop throught the list and check curr_sum, lowest_sum and 
    for (int i = 0; i < len; i++) {
        curr_sum = prefix_sum(arr, i);
        // add to the current curr sum 
        if(curr_sum < lowest_sum) {
            lowest_index = i;
            lowest_sum = curr_sum;
        }
    }

    return lowest_index;
}

void new_array_gen(int arr[], int new_array[], int index, int len){
    
    for (int i = 0; i < (len - index - 1); i++) {
        new_array[i] = arr[index+1+i];
    }

    for (int i = 0; i < index; i++) {
        new_array[len-index+i-1] = arr[i];
    }
}

bool check_first_index(int arr[], int len) {
    if (len == 0) {
        return false; 
    }

    if (arr[0] == -1) {
        return true;
    }

    return false;
}

int do_all_work(int n, int r){
    int wb_list = 0; 

    for (int i = 0; i < r; i++ ) {
        
        int twoplusone = 2 * (n + 1);
        int arr[twoplusone];
        
        // make the list 
        make_list(arr, twoplusone);

        // scramble the list 
        fisher_yates(arr, twoplusone);

        // find lowest index
        int lowest_index = lowest_depth(arr, twoplusone);

        // remove any that start with -1 -> step 6
        if (check_first_index(arr, twoplusone) == true) {
            continue;
        }

        // make new arr 
        int new_arr[twoplusone - 1];
        new_array_gen(arr, new_arr, lowest_index, twoplusone);
        // check if list is valid 
        if (non_negative_sum(new_arr, twoplusone -1) == true) {
                wb_list += 1; 
        }

    }

    return wb_list; 
}