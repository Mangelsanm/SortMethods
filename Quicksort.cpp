/****************************/
// Miguel Mares
// Quicksort
// progrma de ordenamiento usando el metodo de quicksort
// solo corre el programa introduce el numero de elementos,
// coloca los valores y listo, tendras una lista ordenada.
/****************************/

#include <iostream>
using namespace std;

int divide(int *Elementos, int inicio, int fin);
void quickSort(int *Elementos, int inicio, int fin);

int main(){
    int nElements;
    cout << "Numero de elementos en el arreglo: " << flush;
    cin >> nElements;

    int Elements[nElements];

    for(int i = 0; i < nElements; i++){
        cout << "Elemento [" << i << "]: " << flush;
        cin >> Elements[i];
    }

    quickSort(Elements, 0, nElements);

    for(int j = 0; j < nElements; j++){
        cout << Elements[j] << ", " << flush;
    }
    return 0;
}

int divide(int *Elements, int start, int fin){
    int pivote = fin - 1;
    int i = start;
    int j = fin - 2;

    while(i <= j){
        if(i == j) break;
        while(Elements[i] < Elements[pivote]){
            i++;
        }
        while(Elements[j] > Elements[pivote] && (j > i)){
            j--;
        }
        if(i < j){
            int auxiliar = Elements[i];
            Elements[i] = Elements[j];
            Elements[j] = auxiliar;
        }
    }
    if(i != j) j = i;

    int auxiliar = Elements[i];
    Elements[i] = Elements[pivote];
    Elements[pivote] = auxiliar;

    return j;
}

void quickSort(int *Elements, int start, int fin){
    int pivote;

    if(start < fin){
        pivote = divide(Elements, start, fin);
        quickSort(Elements, start, pivote);
        quickSort(Elements, pivote + 1, fin);
    }
}
