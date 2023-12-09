#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//questo programma stampa un array di 30 numeri randomici compresi tra 0 e 99

int main () {
    // Definizione dell'array
    int dim=30;
    int num[dim];
   
    //numeri tra 0 e 99
    srand(time(NULL));
    for (int i=0; i<dim; i++) {      
        num[i]= rand()%100;         //perche %100? perche il resto di un numero diviso 100 è sicuramente compreso tra 0 e 99, altrimenti si potrebbe dividere ancora per 100
    }
    
    // Stampa dell'array
    for (int j=0; j<dim; j++ ) {
        cout<<num[j];
        cout<<" ";
    }
    
return 0;

}