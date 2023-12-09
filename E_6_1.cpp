#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {
    // Definizione dell'array
    int dim=30;
    int num[dim];
   
    //numeri tra 0 e 99
    srand(time(NULL));
    for (int i=0; i<dim; i++) {      //int i=0; i != '\0'; i++
        num[i]= rand()%100;         //perche %100?
    }
    
    // Stampa dell'array
    for (int j=0; j<dim-1; j++ ) {
        cout<<num[j];
        cout<<" ";
    }
    cout<<num[dim-1]<<endl;
return 0;

}