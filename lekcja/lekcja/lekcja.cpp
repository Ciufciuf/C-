#include <iostream>
using namespace std;

int main()
{
    int tab[2][2];

    for (int i = 0; i < 10; i++) {

        for (int x = 0; x < 10; x++) {

            if (i == x) {
                tab[i][x] = x;
            }
            else {
                tab[i][x] = 0;
            }
            cout << tab[i][x] << " ";
        }
        cout << endl;
    }


}

