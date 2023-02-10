#include <iostream>
#include "lab3.h"

using namespace std; 

int main () {
    // request 2 numbers one n and one r 
    int n, r; 

    cout << "Enter a number n: " << endl;
    cin >> n;
    cout << "Enter a number r: " << endl;
    cin >> r; 

    int wbList = do_all_work(n, r);
    cout << "wb_list: " << wbList << endl;
    cout << "wb_list percent: " << float(wbList)/100000 << endl;

    return 0;
}