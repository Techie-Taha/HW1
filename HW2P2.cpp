#include <iostream>
using namespace std;

float avrg(int *array, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + *(array + i);
    }

    return (float)sum / size;
}

int main(){
    int arr[5] = {20, 30, 40, 50, 3};
    float avg = avrg(arr,5);
    cout << "Average = " << avg << endl;

    return 0;
}