/*
Write a function that takes as argument an array of integers and the size of the array 
and returns the average of the input values. 
float = avrg(int * array, int size)
*/


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