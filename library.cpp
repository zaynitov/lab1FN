#include <sstream>
#include <iostream>
#include <string>

using namespace std;


void printStartTable() {
    string str1 = "+--------------------+--------------------+--------------------+";
    string str2 = "|  Номер члена ряда  |Значение члена ряда |  Частичная сумма   |";

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str1 << endl;
}


void printRow(int numOfElements, double curElement, double partSum) {
    std::stringstream buffer;

    buffer << " " << numOfElements;
    int numOfElementsSpaces = 20 - to_string(numOfElements).length();
    for (int i = 0; i <= numOfElementsSpaces; i++) {
        buffer << " ";
    }

    buffer << curElement;
    int curElemSpaces = 41 - buffer.str().length();
    for (int i = 0; i <= curElemSpaces; i++) {
        buffer << " ";
    }

    buffer << " " << partSum;
    buffer << " " << endl;

    cout << buffer.str() << endl;

}


int whileLoop(int doubleX, double doubleAccuracy, double sumWhile, double value) {
    int countInWhile = 1;

    printStartTable();
    printRow(countInWhile, value, value);

    while (value > doubleAccuracy) {
        value = value * doubleX / countInWhile;
        sumWhile += value;
        countInWhile++;
        printRow(countInWhile, value, sumWhile);

    }

    cout << "Сумма: ";
    cout << sumWhile << endl;

    return countInWhile;

}


void forLoop(double doubleX, double value, double doubleAccuracy, double sumFor, int countInWhile) {

    printStartTable();
    printRow(1, value, value);

    for (int count = 1; count < countInWhile; count++) {
        value = value * doubleX / count;
        sumFor += value;
        printRow(count + 1, value, sumFor);
    }

    cout << "Сумма: ";
    cout << sumFor << endl;


}


void doWhileLoop(double doubleX, double value, double doubleAccuracy, double sumDoWhile) {
    int temp = 1;

    printStartTable();
    printRow(temp, value, value);

    do {
        value = value * doubleX / temp;
        sumDoWhile += value;
        temp++;
        printRow(temp, value, sumDoWhile);
    } while (value > doubleAccuracy);

    cout << "Сумма: ";
    cout << sumDoWhile << endl;

}


int main() {
    setlocale(LC_ALL, "Russian");

    double doubleX;
    cout << "Введите х:";
    cin >> doubleX;

    double doubleAccuracy;
    cout << "Введите точность:";
    cin >> doubleAccuracy;

    double value = doubleX;

    double sumWhile = 2;
    double sumFor = 1;
    double sumDoWhile = 1;

    cout << "Сумма циклом while:" << endl;
    int countInWhile = whileLoop(doubleX, doubleAccuracy, sumWhile, value);
    cout << " " << endl;

    cout << "Сумма циклом for:" << endl;
    forLoop(doubleX, value, doubleAccuracy, sumFor, countInWhile);
    cout << " " << endl;

    cout << "Сумма циклом do while:" << endl;
    doWhileLoop(doubleX, value, doubleAccuracy, sumDoWhile);
    cout << " " << endl;

}