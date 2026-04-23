#include <iostream>
using namespace std;
int main(){
    int kol;
    cout<<"Введите количество учеников (от 5 до 10): ";
    cin>>kol;
    int otl=0, dvo=0; bool tro=false;
    for(int i=1; i<=kol; i++){
        int bal;
        cout<<"Введите оценку ученика( от 2 до 5): ";
        cin>>bal;
        if(bal==5) otl++;
        if(bal==2) dvo++;
        if (bal==3) tro=true;
    }
    cout<<"Отличников: "<<otl<<endl;
    cout<<"Двоечников: "<<dvo<<endl;
    cout<<"Есть ли троечник? "<<(tro ? "Yes" : "No")<<endl;
}