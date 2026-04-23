#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int m[4][4];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            m[i][j] = rand() % 90 + 10;
    cout << "Матрица:" << endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    int sum = 0;
    for(int i=0; i<4; i++) sum += m[i][i];
    cout << "Сумма диагонали: " << sum << endl;
    cout << "Вторая строка: ";
    for(int j=0; j<4; j++) cout << m[1][j] << " ";
    cout << endl;

    return 0;
}