#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int secret = rand() % 50 + 1;
    int guess;
    bool won = false;

    for(int i = 1; i <= 5; i++){
        cout << "Попытка " << i << "/5: ";
        cin >> guess;

        if(guess == secret){
            cout << "Поздравляю! Вы угадали!" << endl;
            won = true;
            break;
        } else if(guess < secret){
            cout << "Загаданное число больше" << endl;
        } else {
            cout << "Загаданное число меньше" << endl;
        }
    }

    if(!won){
        cout << "Попытки закончились. Загаданное число: " << secret << endl;
    }

    return 0;
}