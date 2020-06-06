#include <iostream>
#include "stdio.h"
#include "Algorithm.h"
#include <vector>

using namespace std;


int main() {
    setlocale(LC_ALL, "Rus");
    int numOfPairs, first, second, count = 0;
    vector <Algorithm> vector;
    cout << "Количество пар чисел: "; cin >> numOfPairs;

    while (count != numOfPairs) {
        cout << "\n" << count + 1 << " пара: " ;
        while (true) {
            cout << "Введите первое число: "; cin >> first;
            if (first >= 0 && first < 15){
                break;
            }else {
                cout << "Некоректный ввод!" << endl;
            }
        }
        while (true) {
            cout << "Введите второе число: "; cin >> second;
            if (second >= 0 && second < 15){
                break;
            }else {
                cout << "Некоректный ввод!" << endl;
            }
        }
        Algorithm pairs(first, second);
        vector.push_back(pairs);
        count++;
    }
    char choose;
    int counter = 1, tact = 0;
    while (true) {
        for (int i = 0; i < vector.size(); i++) {
            cout << "\n" << "***********************************";
            cout  << "\n" << i + 1 << " пара: ";
            vector[i].showInitialCondition();
            cout << "***********************************" << endl;
        }
        if (numOfPairs <= 3) {
            cout << "\n\n";
            cout << "-----------------------------------------------------------------------------------------" << endl;
            cout << "| # такта  | частичное  произведение |     частичная сумма     |  сдвиг частичной суммы  |" << endl;
            cout << "-----------------------------------------------------------------------------------------" << endl;
        }
        if (numOfPairs == 1) {
            if (tact == 0) {
                cout << "|  такт 1  |        "; vector[0].showTable(0);
                cout << "|  такт 2  |        "; vector[0].showTable(0);
                cout << "|  такт 3  |        "; vector[0].showTable(0);
                cout << "|  такт 4  |        "; vector[0].showTable(0);
                cout << "|  такт 5  |        "; vector[0].showTable(0);
                cout << "|  такт 6  |        "; vector[0].showTable(0);
                cout << "-----------------------------------------------------------------------------------------" << endl;
            }

            else if (tact > 0) {
                cout << "|  такт 1  |        ";
                if (tact - 1 >= 0 && tact == numOfPairs) {
                    vector[tact - 1].showVector(0);
                    cout << "        |          *****          |          *****          | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 2  |        ";
                if (tact - 2 >= 0 && tact - 1 == numOfPairs) {
                    vector[tact - 2].showVector(3);
                    cout << "        |        ";
                    vector[tact - 2].showVector(1);
                    cout << "        |          *****          | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 3  |        ";
                if (tact - 3 >= 0 && tact - 2 == numOfPairs) {
                    vector[tact - 3].showVector(6);
                    cout << "        |        ";
                    vector[tact - 3].showVector(4);
                    cout << "        |        ";
                    vector[tact - 3].showVector(2);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 4  |        ";
                if (tact - 4 >= 0 && tact - 3 == numOfPairs) {
                    vector[tact - 4].showVector(9);
                    cout << "        |        ";
                    vector[tact - 4].showVector(7);
                    cout << "        |        ";
                    vector[tact - 4].showVector(5);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 5  |        ";
                if (tact - 5 >= 0 && tact - 4 == numOfPairs) {
                    cout << "  *****          |        ";
                    vector[tact - 5].showVector(10);
                    cout << "        |        ";
                    vector[tact - 5].showVector(8);
                    cout << "        | "<< endl;
                }else vector[0].showTable(0);
                cout << "|  такт 6  |        ";
                if (tact - 6 >= 0 && tact - 5 == numOfPairs) {
                    cout << "  *****          |          *****          |        ";
                    vector[tact - 6].showVector(11);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "-----------------------------------------------------------------------------------------" << endl;
            }
        }

        if (numOfPairs == 2) {
            if (tact == 0) {
                cout << "|  такт 1  |        "; vector[0].showTable(0);
                cout << "|  такт 2  |        "; vector[0].showTable(0);
                cout << "|  такт 3  |        "; vector[0].showTable(0);
                cout << "|  такт 4  |        "; vector[0].showTable(0);
                cout << "|  такт 5  |        "; vector[0].showTable(0);
                cout << "|  такт 6  |        "; vector[0].showTable(0);
                cout << "|  такт 7  |        "; vector[0].showTable(0);
                cout << "|  такт 8  |        "; vector[0].showTable(0);
                cout << "|  такт 9  |        "; vector[0].showTable(0);
                cout << "|  такт 10 |        "; vector[0].showTable(0);
                cout << "-----------------------------------------------------------------------------------------" << endl;
            }
            else if (tact > 0) {
                cout << "|  такт 1  |        ";
                if (tact - 1 >= 0 && tact + 1 == numOfPairs) {
                    vector[tact - 1].showVector(0);
                    cout << "        |          *****          |          *****          | " << endl;
                }
                else vector[0].showTable(0);
                cout << "|  такт 2  |        ";
                if (tact - 2 >= 0 && tact == numOfPairs) {
                    vector[tact - 2].showVector(3);
                    cout << "        |        ";
                    vector[tact - 2].showVector(1);
                    cout << "        |          *****          | " << endl;
                }
                else vector[0].showTable(0);
                cout << "|  такт 3  |        ";
                if (tact - 3 >= 0 && tact - 1 == numOfPairs) {
                    vector[tact - 3].showVector(6);
                    cout << "        |        ";
                    vector[tact - 3].showVector(4);
                    cout << "        |        ";
                    vector[tact - 3].showVector(2);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 4  |        ";
                if (tact - 4 >= 0 && tact - 2 == numOfPairs) {
                    vector[tact - 4].showVector(9);
                    cout << "        |        ";
                    vector[tact - 4].showVector(7);
                    cout << "        |        ";
                    vector[tact - 4].showVector(5);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 5  |        ";
                if (tact - 5 >= 0 && tact - 3 == numOfPairs) {
                    vector[tact - 4].showVector(0);
                    cout << "        |        ";
                    vector[tact - 5].showVector(10);
                    cout << "        |        ";
                    vector[tact - 5].showVector(8);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 6  |        ";
                if (tact - 6 >= 0 && tact - 4 == numOfPairs) {
                    vector[tact - 5].showVector(3);
                    cout << "        |        ";
                    vector[tact - 5].showVector(1);
                    cout << "        |        ";
                    vector[tact - 6].showVector(11);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 7  |        ";
                if (tact - 7 >= 0 && tact - 5 == numOfPairs) {
                    vector[tact - 6].showVector(6);
                    cout << "        |        ";
                    vector[tact - 6].showVector(4);
                    cout << "        |        ";
                    vector[tact - 6].showVector(2);
                    cout << "        | " << endl;
                }
                else vector[0].showTable(0);
                cout << "|  такт 8  |        ";
                if (tact - 8 >= 0 && tact - 6 == numOfPairs) {
                    vector[tact - 7].showVector(9);
                    cout << "        |        ";
                    vector[tact - 7].showVector(7);
                    cout << "        |        ";
                    vector[tact - 7].showVector(5);
                    cout << "        | " << endl;
                }
                else vector[0].showTable(0);
                cout << "|  такт 9  |        ";
                if (tact - 9 >= 0 && tact - 7 == numOfPairs) {
                    cout << "  -----          |        ";
                    vector[tact - 8].showVector(10);
                    cout << "        |        ";
                    vector[tact - 8].showVector(8);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 10 |        ";
                if (tact - 10 >= 0 && tact - 8 == numOfPairs) {
                    cout << "  *****          |          *****          |        ";
                    vector[tact - 9].showVector(11);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "-----------------------------------------------------------------------------------------" << endl;
            }
        }

        if (numOfPairs == 3) {
            if (tact == 0) {
                cout << "|  такт 1  |        "; vector[0].showTable(0);
                cout << "|  такт 2  |        "; vector[0].showTable(0);
                cout << "|  такт 3  |        "; vector[0].showTable(0);
                cout << "|  такт 4  |        "; vector[0].showTable(0);
                cout << "|  такт 5  |        "; vector[0].showTable(0);
                cout << "|  такт 6  |        "; vector[0].showTable(0);
                cout << "|  такт 7  |        "; vector[0].showTable(0);
                cout << "|  такт 8  |        "; vector[0].showTable(0);
                cout << "|  такт 9  |        "; vector[0].showTable(0);
                cout << "|  такт 10 |        "; vector[0].showTable(0);
                cout << "|  такт 11 |        "; vector[0].showTable(0);
                cout << "|  такт 12 |        "; vector[0].showTable(0);
                cout << "|  такт 13 |        "; vector[0].showTable(0);
                cout << "|  такт 14 |        "; vector[0].showTable(0);
                cout << "-----------------------------------------------------------------------------------------" << endl;
            }
            else if (tact > 0) {
                cout << "|  такт 1  |        ";
                if (tact - 1 >= 0 && tact + 2 == numOfPairs) {
                    vector[tact - 1].showVector(0);
                    cout << "        |          *****          |          *****          | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 2  |        ";
                if (tact - 2 >= 0 && tact + 1 == numOfPairs) {
                    vector[tact - 2].showVector(3);
                    cout << "        |        ";
                    vector[tact - 2].showVector(1);
                    cout << "        |          *****          | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 3  |        ";
                if (tact - 3 >= 0 && tact == numOfPairs) {
                    vector[tact - 3].showVector(6);
                    cout << "        |        ";
                    vector[tact - 3].showVector(4);
                    cout << "        |        ";
                    vector[tact - 3].showVector(2);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 4  |        ";
                if (tact - 4 >= 0 && tact - 1 == numOfPairs) {
                    vector[tact - 4].showVector(9);
                    cout << "        |        ";
                    vector[tact - 4].showVector(7);
                    cout << "        |        ";
                    vector[tact - 4].showVector(5);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 5  |        ";
                if (tact - 5 >= 0 && tact - 2 == numOfPairs) {
                    vector[tact - 4].showVector(0);
                    cout << "        |        ";
                    vector[tact - 5].showVector(10);
                    cout << "        |        ";
                    vector[tact - 5].showVector(8);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 6  |        ";
                if (tact - 6 >= 0 && tact - 3 == numOfPairs) {
                    vector[tact - 5].showVector(3);
                    cout << "        |        ";
                    vector[tact - 5].showVector(1);
                    cout << "        |        ";
                    vector[tact - 6].showVector(11);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 7  |        ";
                if (tact - 7 >= 0 && tact - 4 == numOfPairs) {
                    vector[tact - 6].showVector(6);
                    cout << "        |        ";
                    vector[tact - 6].showVector(4);
                    cout << "        |        ";
                    vector[tact - 6].showVector(2);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 8  |        ";
                if (tact - 8 >= 0 && tact - 5 == numOfPairs) {
                    vector[tact - 7].showVector(9);
                    cout << "        |        ";
                    vector[tact - 7].showVector(7);
                    cout << "        |        ";
                    vector[tact - 7].showVector(5);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);

                cout << "|  такт 9  |        ";
                if (tact - 9 >= 0 && tact - 6 == numOfPairs) {
                    vector[tact - 7].showVector(0);
                    cout << "        |        ";
                    vector[tact - 8].showVector(10);
                    cout << "        |        ";
                    vector[tact - 8].showVector(8);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 10 |        ";
                if (tact - 10 >= 0 && tact - 7 == numOfPairs) {
                    vector[tact - 8].showVector(3);
                    cout << "        |        ";
                    vector[tact - 8].showVector(1);
                    cout << "        |        ";
                    vector[tact - 9].showVector(11);
                    cout << "        | " << endl;
                }else vector[0].showTable(0);
                cout << "|  такт 11 |        ";
                if (tact - 11 >= 0 && tact - 8 == numOfPairs) {
                    vector[tact - 9].showVector(6);
                    cout << "        |        ";
                    vector[tact - 9].showVector(4);
                    cout << "        |        ";
                    vector[tact - 9].showVector(2);
                    cout << "        | " << endl;
                }
                else vector[0].showTable(0);
                cout << "|  такт 12 |        ";
                if (tact - 12 >= 0 && tact - 9 == numOfPairs) {
                    vector[tact - 10].showVector(9);
                    cout << "        |        ";
                    vector[tact - 10].showVector(7);
                    cout << "        |        ";
                    vector[tact - 10].showVector(5);
                    cout << "        | " << endl;
                }
                else vector[0].showTable(0);
                cout << "|  такт 13 |        ";
                if (tact - 13 >= 0 && tact - 10 == numOfPairs) {
                    cout << "  -----          |        ";
                    vector[tact - 11].showVector(10);
                    cout << "        |        ";
                    vector[tact - 11].showVector(8);
                    cout << "        | " << endl;
                }
                else vector[0].showTable(0);
                cout << "|  такт 14 |        ";
                if (tact - 14 >= 0 && tact - 11 == numOfPairs) {
                    cout << "  *****          |          *****          |        ";
                    vector[tact - 12].showVector(11);
                    cout << "        | " << endl;
                }
                else vector[0].showTable(0);
                cout << "-----------------------------------------------------------------------------------------" << endl;
            }
        }

        if (tact == numOfPairs * 4 + 2) {
            cout << "Кол-во пар: " << numOfPairs << "\tКол-во тактов: " << tact;
            break;
        }
        tact++;
        cout << "\nСледующий такт - 1\nРезультат - 2\nВыход из программы - 3" << endl;
        cin >> choose;
        while (true) {
            if (choose == '1') break;
            if (choose == '2') {
                while (tact != numOfPairs * 4 + 2) {
                    tact++;
                }
                break;
            }
            if (choose == '3') exit(0);
        }
    }
    cout << "\n\nРезультаты вычислений:" << endl;
    for (int i = 0; i < vector.size(); i++) {
        vector[i].showResult(i);
    }
}