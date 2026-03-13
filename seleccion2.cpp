#include <iostream>
using namespace std;

int main() {
int i = 0; // Se inicializa la variable fuera

// La condición: mientras i sea menor que 5
while (i < 5) {
cout << i << endl; // Imprime el valor actual
i++; // Incrementa la variable para evitar un ciclo infinito
}

return 0;
}
