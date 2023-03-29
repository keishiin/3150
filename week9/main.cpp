#include "week9.h"


int main() {
    List list;

    for(int i = 0; i < 10; ++i) {
        list.push(i);
    };

    cout << "after 10 inserts : " << list << endl;

    list.clean();

    cout << "after clean up : " << list << endl;

    return 0;
}