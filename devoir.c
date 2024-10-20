#include <cstdarg>
#include <iostream>

int additionner(int nb_parametres, ...) {
    int somme = 0;
    va_list args; // Déclare une liste d'arguments
    va_start(args, nb_parametres); // Initialise la liste d'arguments

    for (int i = 0; i < nb_parametres; ++i) {
        somme += va_arg(args, int); // Récupère chaque argument en tant que 'int'
    }

    va_end(args); // Libère la mémoire utilisée par va_list
    return somme;
}

int main() {
 int i;
for(i=0; i < 2000000; i++) {

    std::cout << i << " paramètre(s)" <<std::endl<<"Somme :" << additionner(i,1,2,2) << std::endl;

}
    return 0;
}


