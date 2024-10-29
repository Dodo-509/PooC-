#include <iostream>
#include <string>

using namespace std;

class date {
private:
    int jour;
    string mois;
    int annee;
    int heure;
    int minute;

public:
    date(string dateUtilisateur){
        jour = stoi(dateUtilisateur.substr(0,2));
        annee = stoi(dateUtilisateur.substr(4, 4));
        heure = stoi(dateUtilisateur.substr(8, 2));
        minute = stoi(dateUtilisateur.substr(10, 2));

        switch(stoi(dateUtilisateur.substr(2, 2))){
        case 1:
            {
                mois = "Janvier";
                break;
            }
        case 2:
            {
                mois = "Fevrier";
                break;
            }
        case 3:
            {
                mois = "Mars";
                break;
            }
        case 4:
            {
                mois = "Avril";
                break;
            }
        case 5:
            {
                mois = "Mai";
                break;
            }
        case 6:
            {
                mois = "Juin";
                break;
            }
        case 7:
            {
                mois = "Juillet";
                break;
            }
        case 8:
            {
                mois = "Aout";
                break;
            }
        case 9:
            {
                mois = "Septembre";
                break;
            }
        case 10:
            {
                mois = "Octobre";
                break;
            }

        case 11:
            {
                mois = "Novembre";
                break;
            }
        case 12:
            {
                mois = "Decembre";
                break;
            }
        default:
            {
                mois = "Invalid";
                break;
            }

        }
    }

    void affiche() {
        cout<<"Le "<< jour <<" "<<mois<<" "<<annee<<" a "<<heure<<" : "<<minute<<endl;
    }
};
int main() {
    date birthday("151020011530");

    birthday.affiche();
return 0;
}
