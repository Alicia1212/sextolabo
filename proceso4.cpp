#include "iostream"

using namespace std;

void leerArreglo(int arr[] , int n){
    for(int i = 0; i<n; i++){
        cout<< "ingrese un numero"<<i<<endl;
        cin>> arr[i];
    }  
}

void sumadeArreglo(int arr1[], int arr2[], int n, int resultantes[]){
    for(int i = 0; i<n; i++){
        resultantes[i] = arr1[i] + arr2[i];

    }
}

void desplegarResultado(int resultantes[], int n){
    cout<< "Su resultado es:" <<endl;
    for(int i = 0; i<n; i++){
        cout<< resultantes[i]<<endl;
    }
}

int main(){
    int n = 5;
    int arr1[n];
    int arr2[n];
    int resultantes[n];
    leerArreglo(arr1, n);
    leerArreglo(arr2, n);
    sumadeArreglo(arr1, arr2, n, resultantes);
    desplegarResultado(resultantes, n);
}