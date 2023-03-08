#include "week7.h"


int main_loop(vector<int> &vec){

    int total_perfect_number = 0;

    // lambda 
    for_each(vec.begin(), vec.end(), [&](int n) {
        bool result = check_int(n);

        if (result == true) {
            total_perfect_number += 1;
        }
    });

    return total_perfect_number;
};

bool check_int(int n){
    
    int sum = 0;
    // int i = 1;

    // while (i < n) {

    //     if (i % n == 0) {
    //         sum += i;
    //     }
    //     i++;
    // }

    // 1 cant be a perfect number
    if (n == 1) {
        return false;
    }

    for (int i = 0; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        return true;
    } else {
        return false;
    }
};