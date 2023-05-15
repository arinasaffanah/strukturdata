#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "PEMANASAN DULU EUY!" << endl;

    int data[] = {2, 3, 7, 4, 8, 6, 9, 0, 5, 3, 5};
    int length = sizeof(data) / sizeof(*data);
    int temp = 0;

    cout << "Sebelum sorting : ";
    for (int j = 0; j < length; j++)
    {
        cout << " " << data[j];
    }

    cout << endl;

    for (int a = 1; a < length; a++)
    {
        for (int b = 0; b < length - a; b++)
        {
            if (data[b] > data[b + 1])
            {
                temp = data[b];
                data[b] = data[b + 1];
                data[b + 1] = temp;
            }
        }
    }

    cout << "Hasil sorting : ";
    for (int i = 0; i < length; i++)
    {
        cout << " " << data[i];
    }
    return 0;
}