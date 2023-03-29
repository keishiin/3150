#include "week9.h"


int main() {
    List list;

    for(int i = 0; i < 10; ++i) {
        list.push(i);
    };

    // cout << "The list with 10 nodes: " << list << endl;

    list.clean();

    // cout << "The list after clean(): " << list << endl;

    return 0;
}