
// АП_ІР-11_Озірковський_ЛР-02.1.doc.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Lab_2.1.cpp
//Озірковського Дениса Леонідовича
//Лабораторна робота №2.1
//Лінійні програми
//Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;   // Вхідний результат
    double z1;  // Значення першого виразу
    double z2;  // Значення другого виразу  
    //555
    cout << "x = ?";  cin >> x;

    z1 = (1 - 2 * (sin(x) * sin(x))) / (1 + sin(2 * x));

    z2 = (1 - tan(x)) / (1 + tan(x));

    cout << "z1 =" << z1 << endl;
    cout << "z2 =" << z2 << endl;

    cin.get();

    return 0;


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
