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

/* inicia metodo de ordenamiento */
    int izquierda = 0;
    int derecha = nElementos - 1;
    while(izquierda <= derecha){
        for(int j = izquierda; j < derecha; j++){
            if(Elements[j] > Elements[j+1]){
                int aux = Elements[j];
                Elements[j] = Elements[j+1];
                Elements[j+1] = aux;
            }
        }

        for(int k = derecha; k > izquierda; k--){
            if(Elements[k] < Elements[k-1]){
                int aux = Elements[k];
                Elements[k] = Elements[k-1];
                Elements[k-1] = aux;
            }
        }
        izquierda++;
        derecha--;
    }
/* fin del metodo */

    for(int i = 0; i < nElementos; i++){
        cout << Elements[i] << ", " << flush;
    }
    return 0;
}
