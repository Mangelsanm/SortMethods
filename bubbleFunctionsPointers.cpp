#include <iostream>
using namespace std;

int *getValues();
void bubbleSort(int *, int);

int main(){
    int *pElements;
    pElements = getValues();
    bubbleSort(pElements, 3);
    return 0;
}

int *getValues(){
    int nElements;
    cout << "Enter the array size: " << flush;
    cin >> nElements;
    int *arrayOfElements = new int[nElements];

    for(int i = 0; i < nElements; i++){
        cout << "Element[" << i << "]: " << flush;
        cin >> *(arrayOfElements+i);
    }

    for(int i = 0; i < nElements; i++){
        cout << arrayOfElements[i] << flush;
    }
    return arrayOfElements;
}

void bubbleSort(int *arrayOfElements, int nElements){
    int auxiliar;
    for(int i = 0; i < nElements; i++){
        for(int j = 0; j < nElements - 1; j++){
            if(*(arrayOfElements+j) > *(arrayOfElements+j+1)){
                auxiliar = *(arrayOfElements+j);
                *(arrayOfElements+j) = *(arrayOfElements+j+1);
                *(arrayOfElements+j+1) = auxiliar;
            }
        }
    }
    for(int i = 0; i < nElements; i++){
        cout << arrayOfElements[i] << flush;
    }
    delete[] arrayOfElements;
}
