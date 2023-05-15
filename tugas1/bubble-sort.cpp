#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "========= #1 Program Bubble Sort ========" << endl;
    cout << "| Arina Saffanah Zakiyyah - 20220801189 |" << endl;
    cout << "| Muhammad Noval Rais     - 20220801328 |" << endl;
    cout << "=========================================" << endl;

    int arr[] = {2, 0, 5, 8, 3, 6, 7, 1, -2, 4};
    int length = sizeof(arr) / sizeof(*arr);
    int temp = 0;

    // tampilkan jumlah data
    cout << "\nJumlah data : " << length << endl;

    // tampilkan data sebelum di-sort
    cout << "\n# Data sebelum dilakukan Bubble Sort : ";
    for (int i = 0; i < length; i++)
    {
        cout << setw(2) << arr[i] << " ";
    }
    cout << endl;
    cout << "# Data setelah dilakukan Bubble Sort : " << endl;

    // proses sorting data menggunakan metode bubble sort
    // ascending
    cout << "\nTahapan sort Ascending : " << endl;
    for (int i = 1; i < length; i++)
    {
        cout << "Langkah " << i << " : ";
        for (int j = 0; j < length - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        // tahapan sorting
        for (int k = 0; k < length; k++)
        {
            cout << setw(3) << arr[k] << " ";
        }
        cout << endl;
    }

    // tampilkan data setelah di-sort ascending
    cout << "\nHasil akhir data sort Ascending  : ";
    for (int a = 0; a < length; a++)
    {
        cout << setw(2) << arr[a] << " ";
    }
    cout << endl;

    // descending
    cout << "\nTahapan sort Descending : " << endl;
    for (int i = 1; i < length; i++)
    {
        cout << "Langkah " << i << " : ";
        for (int j = 0; j < length - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int k = 0; k < length; k++)
        {
            cout << setw(3) << arr[k] << " ";
        }
        cout << endl;
    }

    // tampilkan data setelah di-sort descending
    cout << "\nHasil akhir data sort Descending  : ";
    for (int b = 0; b < length; b++)
    {
        cout << setw(2) << arr[b] << " ";
    }

    return 0;
}