#include "./generate_list.h"
#include <iostream>

using namespace std;

void generate_list(int arr[], int n){
    int mid = n/2;
    
    // fill half the list with -1 and the other with 1

    for (int i = 0; i < mid; i++) {
        arr[i] = -1;
    }

    for (int j = mid; j < n; j++) {
        arr[j] = 1;
    }

}