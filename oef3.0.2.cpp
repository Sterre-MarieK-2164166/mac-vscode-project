#include <iostream>

int main()
{
    const float inch{2.54};
    const int size{3};
    int array[size]{}; // initialize null

    using std::cerr;
    using std::cin;
    using std::cout;

    for (const auto element : array)
    {
        cout << "Give a length in cm: ";
        cin >> array[element];
        if (array[element] < 0)
            cerr << "Negative length!" << '\n';
        else
            cout << array[element] * inch << '\n';
    }
    return 0;
}
