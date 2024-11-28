#include <iostream>
using namespace std;
void sortArray(int* arr, int size);
void printArray(int* arr, int size);

int main() 
{
    int n;
    cout << "�����������Ԫ�ظ���: ";
    cin >> n;
    int* array = new (nothrow) int[n];// ��̬�����ڴ�
    if (array == nullptr) 
    {
        cerr << "�ڴ����ʧ�ܣ�" << endl;
        return 1;
    }
    cout << "������ " << n << " ������:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> array[i];
    }
    sortArray(array, n);
    cout << "����������Ϊ: ";
    printArray(array, n);
    delete[] array;
    return 0;
}
void sortArray(int* arr, int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - 1 - i; ++j) 
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int* arr, int size) // ʹ��ָ�뷽ʽ�������Ԫ��
{
    for (int i = 0; i < size; ++i) 
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}