#include <iostream>

using namespace std;

class Test {
private:
    static int compteur;

public:
    Test() {}

    void call() {
        cout<<"La fonction call a ete appelee"<<endl;
            ++compteur;
    }

    static void affiche_compteur() {
        cout<<"La fonction call a ete appelee "<<compteur<<" fois"<<endl;
    }
};
int Test::compteur = 0;

int main() {

    Test test;

    Test::affiche_compteur();
}
