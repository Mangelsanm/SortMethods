#include <iostream>
using namespace std;


int main(){
    int nElements;
    cout << "Size array: " << flush;
    cin >> nElements;
    int arrayOfElements[nElements] = {};
    for(int i = 0; i < nElements; i++){
        cout << "Element[" << i << "]: " << flush;
        cin >> arrayOfElements[i];
    }
    for(int i = 0; i < nElements; i++){
        cout << arrayOfElements[i] << flush;
    }



    return 0;
}
