// Miguel Mares, mares112358@gmail.com
// metodo de ordenamiento: Burbuja bidireccional

#include <iostream>
using namespace std;

int main(){
    // numero de elementos que contendra el arreglo
    int nElementos;
    cout  << "Numero de elementos: " << flush;
    cin >> nElementos;

    // reservamos memoria para el numero de elementos
    int *Elements = new int[nElementos];

    // ciclo para agregar los valores al arreglo
    for(int i = 0; i < nElementos; i++){
        cout << "Elemento [" << i << "]: " << flush;
        cin >> Elements[i];
    }

/* inicia metodo de ordenamiento */

    // valores de los indices iniciales
    int izquierda = 0;
    int derecha = nElementos - 1;
    int auxiliar = 0;

    // en este punto se sabe cuando los indices se cruzan y termina el ciclo
    while(izquierda <= derecha){
        // ciclo for para colocar los numeros mas grandes al final del arreglo
        for(int j = izquierda; j < derecha; j++){
            if(Elements[j] > Elements[j+1]){
                auxiliar = Elements[j];
                Elements[j] = Elements[j+1];
                Elements[j+1] = auxiliar;
            }
        }

        // ciclo for para colocar los numeros mas pequeños al inicio del arreglo
        for(int k = derecha; k > izquierda; k--){
            if(Elements[k] < Elements[k-1]){
                auxiliar = Elements[k];
                Elements[k] = Elements[k-1];
                Elements[k-1] = auxiliar;
            }
        }

        // disminuimos y aumentamos los idices inferior y superior para no volver
        // a repasar todo el arreglo, ya que los valores extremos se van acomodando
        // en su lugar correcto al terminar cada uno de los ciclos anteriores
        izquierda++;
        derecha--;
    }
/* fin del metodo */

    // imprime los valores ordenamos
    cout << "\n" << "Arreglo ordenado" << endl;
    cout << "[" << flush;
    for(int i = 0; i < nElementos; i++){
        if(i < nElementos - 1)
            cout << Elements[i] << ", " << flush;
        else
            cout << Elements[i] << "]" << endl;
    }

    // borramos el espacio de memoria que se reservo, ¡¡ importante no olvidar !!
    delete [] Elements;
    return 0;
}
