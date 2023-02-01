#include <iostream>
#include "fisher_yates.h"

using namespace std;

/*
https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
-- To shuffle an array a of n elements (indices 0..n-1):
for i from n−1 downto 1 do
     j ← random integer such that 0 ≤ j ≤ i
     exchange a[j] and a[i]
*/

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