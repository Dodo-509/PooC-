#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string nom;
    int age;

public:
   virtual void set_value(string nom, int age){
        this->nom = nom;
        this->age = age;
    };
};

class Zebra : public Animal {
private:
    string lieu_origine;

public:
    void afficheMessage() {
    cout<<"L'age est de "<<age<<", le nom est "<<nom<<", l'origine est "<<lieu_origine<<endl;
    }

    void set_value(string nom, int age, string lieu_origine){
        this->nom = nom;
        this->age = age;
        this->lieu_origine = lieu_origine;
    }
};

class Dolphin : public Animal {
    private:
    string lieu_origine;

public:
    void afficheMessage() {
    cout<<"L'age est de "<<age<<", le nom est "<<nom<<", l'origine est "<<lieu_origine<<endl;
    }
    void set_value(string nom, int age, string lieu_origine){
        this->nom = nom;
        this->age = age;
        this->lieu_origine = lieu_origine;
    }
};
int main() {
    Zebra zebre;
    Dolphin dauphin;

    zebre.set_value("Martyr", 20, "Madagascar");
    dauphin.set_value("Dolphin", 10, "Atlantique");

    zebre.afficheMessage();
    dauphin.afficheMessage();

    return 0;
}
