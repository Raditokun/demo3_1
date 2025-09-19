#include <iostream>

using namespace std;

int main()
{
    int n;
    int j = 0;

    cout << "masukkan suku ke n: ";
    cin >> n;

    do {
        j = j + 1;
        int i = 0;

        do {
            i = i + 1;
            cout << i;
        } while (i < j);
        cout << endl;
    } while (j < n);

    return 0;
}