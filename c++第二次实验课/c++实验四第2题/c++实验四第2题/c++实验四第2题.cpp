#include <iostream>
using namespace std;

void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}
int main()
{
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "������10��˫�������֣�" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cin >> numbers[i];
    }
    bubbleSort(numbers, SIZE);
    cout << "����������Ϊ��" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
