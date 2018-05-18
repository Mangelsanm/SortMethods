#include<iostream>
using namespace std;

int main(){
    int nElements;
    cout << "Array size: " << flush;
    cin >> nElements;
    int arrayOfElements[nElements] = {};

    for(int i = 0; i < nElements; i++){
        cout << "Element" << "[" << i << "]: " << flush;
        cin >> arrayOfElements[i];
    }

    cout << "Elements no order" << endl;
    cout << "[";
    for(int i = 0; i < nElements; i++){
        cout <<  arrayOfElements[i] << ", " << flush;
    }
    cout << "]" << endl;

    for(int i = 0; i < nElements; i++){
        for(int j = 0; j < nElements - 1; j++){
            if(arrayOfElements[j] > arrayOfElements[j+1]){
                int auxiliar = arrayOfElements[j];
                arrayOfElements[j] = arrayOfElements[j+1];
                arrayOfElements[j+1] = auxiliar;
            }
        }
    }

    cout << "Elements in order" << endl;
    cout << "[";
    for(int i = 0; i < nElements; i++){
        cout <<  arrayOfElements[i] << ", " << flush;
    }
    cout << "]" << endl;

    return 0;
}
