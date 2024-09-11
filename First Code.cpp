#include <iostream>
#include <ctime>

using namespace std;

void ShowArray(int *Arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Arr[" << i << "] = " << Arr[i] << endl;
    }
}

int main()
{
    srand(time(NULL));
    int n; //Вводимо розмір масиву
    cout << "Enter a size of the array: ";
    cin >> n;
    int Arr[n];

    //Заповнюємо масив випадковими числами від -10 до 10
    for (int i = 0; i < n; i++)
    {
        Arr[i] = rand() % 21 - 10;
    }

    //Виводимо масив
    ShowArray(Arr, n);
}