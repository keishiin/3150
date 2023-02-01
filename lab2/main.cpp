#include <iostream>
#include "./do_all_work.h"

using namespace std;

int main () {

    // request 2 numbers one n and one r 
    int n, r; 

    cout << "Enter a number n: " << endl;
    cin >> n;
    cout << "Enter a number r: " << endl;
    cin >> r; 
    
    // call the do all work funtion and store its success rate 
    int well_balanced_lists = do_all_work(n, r);
    cout << "number of well balanced lists: "<< well_balanced_lists << endl;
    cout << "Percentage is: " << (well_balanced_lists / float(r)) * 100 << "%" << endl;

    return 0; 
}
