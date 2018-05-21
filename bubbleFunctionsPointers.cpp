#include <iostream>
using namespace std;
int *arrayOfElements;
    int nElements = 0;
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
}

int main(){
    cout << "Enter the array size: " << flush;
    cin >> nElements;
    arrayOfElements = new int[nElements];

    for(int i = 0; i < nElements; i++){
        cout << "Element[" << i << "]: " << flush;
        cin >> *(arrayOfElements+i);
    }

    /*for(int i = 0; i < nElements; i++){
        cout << arrayOfElements[i] << flush;
    }*/

    //bubbleSort(arrayOfElements, nElements);
    return 0;
}
