#include <iostream>
using namespace std;
void sortArray(int* arr, int size);
void printArray(int* arr, int size);

int main() 
{
    int n;
    cout << "请输入数组的元素个数: ";
    cin >> n;
    int* array = new (nothrow) int[n];// 动态分配内存
    if (array == nullptr) 
    {
        cerr << "内存分配失败！" << endl;
        return 1;
    }
    cout << "请输入 " << n << " 个整数:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> array[i];
    }
    sortArray(array, n);
    cout << "排序后的数组为: ";
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
void printArray(int* arr, int size) // 使用指针方式输出数组元素
{
    for (int i = 0; i < size; ++i) 
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}