#include <iostream>
#include "../week02/prefix_sum.h"
#include "./fisher_yates.h"
#include "./generate_list.h"

using namespace std;


int do_all_work(int n, int repeat) {

    int good_lists= 0;
    int twon = 2*n; 
    int arr[twon];

    // run r times 
    for (int i = 0; i < repeat; i++) {

        // generate the list
        generate_list(arr, twon);

        // scramble list 
        fisher_yates(arr, 2*n);

        if (non_negative_sum(arr, n) == true) {
            good_lists += 1; 
        }
    }

    return good_lists;
}
