#include <iostream>
using namespace std;

int main(){
    int nElementos;
    cout  << "Numero de elementos: " << flush;
    cin >> nElementos;

    int Elements[nElementos];
    for(int i = 0; i < nElementos; i++){
        cout << "Elemento [" << i << "]: " << flush;
        cin >> Elements[i];
    }

    for(int j = 0; j < nElementos - 1; j++){
        if(Elements[j] > Elements[j+1]){
            int aux = Elements[j];
            Elements[j] = Elements[j+1];
            Elements[j+1] = aux;
        }
    }
    for(int k = nElementos - 1; k > 0; k--){
        if(Elements[k] < Elements[k-1]){
            int aux = Elements[k];
            Elements[k] = Elements[k-1];
            Elements[k-1] = aux;
        }
    }

    for(int i = 0; i < nElementos; i++){
        cout << Elements[i] << ", " << flush;
    }
    return 0;
}
