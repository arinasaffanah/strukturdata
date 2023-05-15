#include <iostream>
using namespace std;

int main()
{
    cout << "Latihan membuat matriks dengan C++" << endl;
    int matriks[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    cout << "tampilkan matriks : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}