#include <cmath>
#include "Algorithm.h"
using namespace std;



void Algorithm :: additional(bool value[8], int index) {
    int temp1[8], temp2[8];
    bool tempo[8];

    for (int i = 0; i < 8; i++) {
        temp1[i] = vect[index].arr[i];
        temp2[i] = value[i];
    }
    for (int i = 7; i >= 0; i--) {
        temp1[i] += temp2[i];
        if (temp1[i] == 2) {
            temp1[i - 1] += 1;
            temp1[i] = 0;
        }
        if (temp1[i] == 3) {
            temp1[i - 1] += 1;
            temp1[i] = 1;
        }
    }
    for (int i = 0; i < 8; i++) {
        tempo[i] = temp1[i];
    }
    if(index == 2 | index == 5 ){
        leftShift(tempo);
    }
    push(tempo);
}

void Algorithm :: setVectorValue() {
    bool temp[8];
    for (int i = 0; i < 8; i++) temp[i] = 0;
    for (int i = 0; i <= 3; i++) {
        if (secondNumber[0] == 1) {
            temp[i + 4] = firstNumber[i];
        }else {
            temp[i + 4] = 0;
        }
    }
    push(temp);
    push(temp);
    leftShift(temp);
    push(temp);

    for (int i = 0; i < 8; i++) temp[i] = 0;
    for (int i = 0; i <= 3; i++) {
        if (secondNumber[1] == 1) {
            temp[i + 4] = firstNumber[i];
        }else {
            temp[i + 4] = 0;
        }
    }
    push(temp);
    additional(temp, 1);
    additional(temp, 2);
    for (int i = 0; i < 8; i++) temp[i] = 0;
    for (int i = 0; i <= 3; i++) {
        if (secondNumber[2] == 1) {
            temp[i + 4] = firstNumber[i];
        }else {
            temp[i + 4] = 0;
        }
    }
    push(temp);
    additional(temp, 4);
    additional(temp, 5);

    for (int i = 0; i < 8; i++) temp[i] = 0;
    for (int i = 0; i <= 3; i++) {
        if (secondNumber[3] == 1) {
            temp[i + 4] = firstNumber[i];
        }else{
            temp[i + 4] = 0;
        }
    }
    push(temp);
    additional(temp, 7);
    additional(temp, 8);
}


void Algorithm :: showVector(int index) {
    for (int i = 0; i < 8; i++) {
        cout << vect[index].arr[i];
        if (i == 3) cout << " ";
    }
}


void Algorithm :: push(bool ar[8]) {
    container cont;
    for (int i = 0; i < 8; i++) {
        cont.arr[i] = ar[i];
    }
    vect.push_back(cont);
}

void Algorithm :: leftShift(bool mas[8]) {
    for (int i = 0; i < 7; i++) {
        bool temp = mas[i];
        mas[i] = mas[i + 1];
        mas[i + 1] = temp;
    }
}

void Algorithm :: showInitialCondition() {
    cout << "\nБинарное представление: " << setw(2) << firstN << " = ";
    showFirst();
    cout << endl;
    cout << "Бинарное представление: " << setw(2) << secondN << " = ";
    showSecond();
    cout <<endl;
}


void Algorithm ::showFirst() {
    for (int i = 0; i < 4; i++) {
        cout << firstNumber[i];
    }
}


void Algorithm ::showSecond() {
    for (int i = 0; i < 4; i++) {
        cout << secondNumber[i];
    }
}

void Algorithm ::showTable(int counter) {
    switch (counter) {
        default: cout << "  *****          |          *****          |          *****          |" << endl;
            break;
    }
}

void Algorithm ::setResult() {
    for (int i = 0, j = 0; i <= 7; i++, j++) {
        Result += vect[11].arr[i] * pow(2, j);
    }
}

void Algorithm ::showResult(int numOfpair) {
    cout << numOfpair + 1 << " пара: " << setw(2) << firstN << " * " << setw(2) << secondN << " = " << firstN * secondN << " = ";
    for (int i = 0; i < 8; i++) {
        cout << vect[11].arr[i];
        if (i == 3)cout << " ";
    }
    cout << endl;
}

