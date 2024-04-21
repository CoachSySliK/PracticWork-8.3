#include <iostream>
#include <cmath>
#include <iomanip>
#include "functions.h"

using namespace std;

int main()
{
    float length, width, height;
    int sizeCub = 5;
    do {
        cout << "Введите размеры бруска:\n";
        cin >> length >> width >> height;
        cin.ignore(100, '\n');
        if (length < 0 || width < 0 || height < 0) cout << "Введите НЕ отрицательные значения!\n";
    } while (length < 0 || width < 0 || height < 0);
    

    int numberCub = ((int)length / sizeCub) * ((int)width / sizeCub) * ((int)height / sizeCub);
    //int numderSets = sbrt(numberCub); не работает, видать у меня что-то старое, эта функция вроде как после 2011ого появилась, а как обновить я не знаю.
    // скоро тема про установку vs code и git, может там будет. 
    int numberSet = pow(numberCub, 1 / (float)3); //подсказали в чате
    
    cout << "Вы сможете изготовить " << numberCub << ending(numberCub, 99) << endl;
    //cout << numberSets << endl;
    cout << "Вы сможете изготовить набор из " << numberSet << ending(numberCub, 99) << endl;

}