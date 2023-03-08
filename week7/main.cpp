#include "week7.h"


int main() {

    vector<int> vec{1, 2, 3, 4, 5, 6};

    int amt = main_loop(vec);
    
    cout << "The number of perfect numbers in the vector is: " << amt << endl;
    
    return 0;
}