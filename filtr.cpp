#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Введите длину массива (не больше 10):";
    cin>>n;
    int matr[n];
    for(int i=0; i<n; i++){
        cout<<"Введите числа в массив: ";
        cin>>matr[i];
    }
cout << "Чётные: ";
for(int i=0; i<n; i++){
    if(matr[i] % 2 == 0) cout << matr[i] << " ";
}
cout << endl;
int sum = 0;
for(int i=0; i<n; i++){
    if(matr[i] > 0) sum += matr[i];
}
cout << "Сумма положительных: " << sum << endl;
for(int i=0; i<n; i++){
    if(matr[i] < 0) matr[i] = 0;
}
cout << "Массив после замены: ";
for(int i=0; i<n; i++){
    cout << matr[i] << " ";
}
cout << endl;
return 0;
}