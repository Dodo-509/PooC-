Limites du Nombre de Paramètres dans une Fonction en C++
Dans ce devoir, l’objectif est d’étudier les limites du nombre de paramètres qu'une fonction peut prendre en C++ et d'examiner les conséquences d'un grand nombre de paramètres sur les performances du compilateur. 
 Description du Problème :
Au cours de l'exécution du programme, une erreur avec le code de retour -1073741819 (erreur Windows équivalente à une violation d'accès mémoire 0xC0000005) a été rencontrée. 
 
Le programme initial a été conçu pour tester la capacité du compilateur à accepter un grand nombre de paramètres dans une fonction. Voici le prototype de la fonction :
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

On a fait appel à la fonction dans la fonction principale depuis une boucle de manière à  augmenter progressivement le nombre de paramètres. On n’a pas donné de manière explicite pour chaque paramètre une valeur, l’appel étant fait dans une boucle, on a préféré utiliser la valeur qui était dans cette espace mémoire. À partir de 10 308 paramètres, une erreur d'exécution s'est produite.
Ce que l’on a observés :
•	Le programme compile mais plante lors de l'exécution.
•	Le code de retour de l’erreur (-1073741819) indique une violation d’accès à la mémoire.
Explication des Résultats :
Le nombre de paramètres est directement lié à l'utilisation de la pile mémoire (stack) pendant l'appel de la fonction. Chaque paramètre passé à une fonction consomme de la mémoire sur la pile. Lorsque le nombre de paramètres devient trop élevé, la pile se remplit et dépasse la capacité allouée par le système d'exploitation, ce qui cause un stack overflow.
Conclusion :
Le test a permis d'identifier une limite pratique quant au nombre de paramètres qu'une fonction peut prendre en C++. Un nombre de paramètres excessif peut entraîner une surcharge de la pile et provoquer une violation d'accès mémoire.
