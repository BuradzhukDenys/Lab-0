#include <iostream>
#include <ctime>

using namespace std;

void ShowMenu()
{
    //Панель меню
    cout << "Choose the way to fill the array: " << endl;
    cout << "1. Fill the array with ranom numbers." << endl;
    cout << "2. Fill the array with numbers from keyboard." << endl;
    cout << "0. Exit." << endl;
}

void FillRandom(int *Arr, int size)
{
    //Заповнюємо масив випадковими числами від -10 до 10
    for (int i = 0; i < size; i++)
    {
        Arr[i] = rand() % 21 - 10;
    }
}

void FillWithKeyboard(int *Arr, int size)
{
    //Заповнюємо масив числами з клавіатури
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
}

void ShowArray(int *Arr, int size)
{
    //Вивід масиву
    for (int i = 0; i < size; i++)
    {
        cout << "Arr[" << i << "] = " << Arr[i] << endl;
    }
}

void Menu(int *Arr, int size)
{
    //Вибираємо спосіб заповнення масиву
    ShowMenu();
    int option;
    cin >> option;
    switch (option)
    {
    case 1:
        FillRandom(Arr, size);
        ShowArray(Arr, size);
        break;
        
    case 2:
        FillWithKeyboard(Arr, size);
        ShowArray(Arr, size);
        break;
    
    case 0:
        break;
    
    default:
        break;
    }
}

int main()
{
    srand(time(NULL));
    int size; //Вводимо розмір масиву
    cout << "Enter a size of the array: ";
    cin >> size;
    int Arr[size];
    Menu(Arr, size);
}