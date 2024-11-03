#include <iostream>
#include <cmath>

using namespace std;


class vecteur3d {
private :
    float x;
    float y;
    float z;

public:
    vecteur3d(): x(0.0), y(0.0), z(0.0){}

    vecteur3d(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    /*les accesseurs*/
    float getX() const {
    return x;
    }

    float getY() const {
    return y;
    }

    float getZ() const {
    return z;
    }


    void affichage_composant() {
        cout<<"( "<<x<<", "<<y<<", "<<z<<" )"<<endl;
    }

    static vecteur3d somme(vecteur3d v1, vecteur3d v2) {
        float x,y,z;

        x = v1.getX() + v2.getX();
        y = v1.getY() + v2.getY();
        z = v1.getZ() + v2.getZ();

        vecteur3d v3(x,y,z);
        return v3;
    }


    static vecteur3d somme_ref(const vecteur3d& vect1, const vecteur3d& vect2) {
        float x,y,z;

        x = vect1.getX() + vect2.getX();
        y = vect1.getY() + vect2.getY();
        z = vect1.getZ() + vect2.getZ();

        vecteur3d v3(x,y,z);
        return v3;
    }
    static vecteur3d* somme(vecteur3d *v1, vecteur3d *v2) {
        float x,y,z;

        x = v1->getX() + v2->getX();
        y = v1->getY() + v2->getY();
        z = v1->getZ() + v2->getZ();

        vecteur3d *v3 = new vecteur3d (x,y,z);
        return v3;
    }

    float norme() const {
        return sqrt(exp2(x)+exp2(y)+exp2(z));
    }

    static float produit_scalaire(vecteur3d v1, vecteur3d v2) {
        return v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ();
    }

    static float produit_scalaire_ref(const vecteur3d& v1, const vecteur3d& v2) {
        return v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ();
    }

    static float produit_scalaire(vecteur3d *v1, vecteur3d *v2) {
        return v1->getX() * v2->getX() + v1->getY() * v2->getY() + v1->getZ() * v2->getZ();
    }

    static bool coincide(vecteur3d v1, vecteur3d v2) {
        return v1.getX() == v2.getX() && v1.getY() == v2.getY() && v1.getZ() == v2.getZ();
    }

    static bool coincide_ref(const vecteur3d& v1, const vecteur3d& v2) {
        return v1.getX() == v2.getX() && v1.getY() == v2.getY() && v1.getZ() == v2.getZ();
    }

    static bool coincide(vecteur3d *v1, vecteur3d *v2) {
        return v1->getX() == v2->getX() && v1->getY() == v2->getY() && v1->getZ() == v2->getZ();
    }

    static vecteur3d normax( vecteur3d v1, vecteur3d v2) {
        if(v1.norme() >= v2.norme())
            return v1;
        else
            return v2;

    }

    static vecteur3d normax_ref(const vecteur3d& v1, const vecteur3d& v2) {
        if(v1.norme() >= v2.norme())
            return v1;
        else
            return v2;

    }

    static vecteur3d* normax(vecteur3d *v1, vecteur3d *v2) {
        if(v1->norme() >= v2->norme())
            return v1;
        else
            return v2;

    }

};


int main() {
    vecteur3d v1(1.3, 2.3, 1), v2(1.3, 2.3, 1);
    vecteur3d &ref_v1 = v1, &ref_v2 = v2;
    
    
    vecteur3d* v3 = vecteur3d::somme(&v1, &v2);
    
    cout<<v1.norme()<<endl<<vecteur3d::produit_scalaire(ref_v1, ref_v2)<<endl;

    v3->affichage_composant();
return 0;
}
