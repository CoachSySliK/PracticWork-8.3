#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float length, width, height;
    int sizeCub = 5;
    cout << "Введите размеры бруска:\n";
    cin >> length >> width >> height;
    cin.ignore(100, '\n');
    int numberCub = ((int)length / sizeCub) * ((int)width / sizeCub) * ((int)height / sizeCub);
    //int numderSets = sbrt(numberCub); не работает, видать у меня что-то старое, эта функция вроде как после 2011ого появилась, а как обновить я не знаю.
    // скоро тема про установку vs code и git, может там будет. 
    int numberSet = pow(numberCub, 1 / (float)3); //подсказали в чате

    cout << numberCub << endl;
    //cout << numberSets << endl;
    cout << numberSet << endl;

}