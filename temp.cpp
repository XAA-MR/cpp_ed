#include <iostream>
using namespace std;
int main(){
    int const size=10;
    int arr[size]{};
    for(int i=0; i<size; i++){
         cout << "День " << i+1 << ": ";
        cin>>arr[i];
    }
    int max=arr[0], maxd=0;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
            maxd=i;
        }
    }
    cout << "Максимальное значение: " << max << " (День " << maxd+1 << ")" << endl;
     int sum = 0;
    for(int i=0; i<10; i++) sum += arr[i];
    cout << "Средняя температура: " << sum/10.0 << endl;
     cout << "Temperatures: ";
    for(int i=0; i<10; i++){
        if(arr[i] < 0) cout << "Мороз ";
        else cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}