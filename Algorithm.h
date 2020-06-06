//
// Created by liza on 5/4/20.
//

#ifndef LABA1_ALGORITHM_H
#define LABA1_ALGORITHM_H
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Algorithm {
private:
    struct container { bool arr[8]; };
    vector<container> vect;

    int firstN;
    int secondN;
    int Result;
    bool firstNumber[4];
    bool secondNumber[4];
public:
    void setVectorValue();
    void additional(bool[8], int);
    void leftShift(bool[8]);
    void showVector(int);
    void push(bool[8]);
    void showInitialCondition();
    void showFirst();
    void showSecond();
    void showTable(int);
    void setResult();
    void showResult(int);
    Algorithm() {
        for (int i = 0; i < 4; i++) {
            firstNumber[i] = 0;
            secondNumber[i] = 0;
        }
        firstN = 0;
        secondN = 0;
        Result = 0;
    };
    Algorithm(int firstNum, int secondNum) {
        firstN = firstNum;
        secondN = secondNum;
        for (int i = 3; i >= 0; i--) {
            firstNumber[i] = firstNum % 2;
            firstNum /= 2;
            secondNumber[i] = secondNum % 2;
            secondNum /= 2;
        }
        setVectorValue();
        setResult();
    };
};


#endif //LABA1_ALGORITHM_H
