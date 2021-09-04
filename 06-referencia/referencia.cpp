#include <iostream>

using namespace std;

int main() {

    // - Las referencias no pueden reasignarse a otra variable -
    int x = 1;
    int y = 2;

    // - Los apuntadores pueden cambiar de valor en cualquier momento -
    int *ptr_n = &x; // "ptr_n" apunta a la variable "x"
    ptr_n = &y; // Ahora "ptr_n" apunta a la variable "y"

    return 0;
}