#include <iostream>

using namespace std;

void addOne(int& ref)
{
    ref = ref + 1;
}

int main()
{
    int value { 5 };

    cout << "value = " << value << '\n';
    addOne(value);
    cout << "value = " << value << '\n';
    return 0;
}