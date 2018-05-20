#include <iostream>
using namespace std;

void bubbleSort(int nElements, int *arrayOfElements){
    int auxiliar;
    for(int i = 0; i < nElements; i++){
        for(int j = 0; j < nElements - 1; j++){
            if((arrayOfElements[j]) > (arrayOfElements[j+1])){
                auxiliar = (arrayOfElements[j]);
                (arrayOfElements[j]) = (arrayOfElements[j+1]);
                (arrayOfElements[j+1]) = auxiliar;
            }
        }
    }
    for(int i = 0; i < nElements; i++){
        cout << arrayOfElements[i] << flush;
    }
}

int main(){
    int nElements = 0;
    cout << "Enter the array size: " << flush;
    cin >> nElements;
    int arrayOfElements [nElements] = {};

    for(int i = 0; i < nElements; i++){
        cout << "Element[" << i << "]: " << flush;
        cin >> arrayOfElements[i];
    }

    for(int i = 0; i < nElements; i++){
        cout << arrayOfElements[i] << flush;
    }

    bubbleSort(nElements, &arrayOfElements[0]);
    return 0;
}
