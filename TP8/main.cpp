#include <iostream>
#include <algorithm>
#include <queue>

class ZZ {
    public:
        std::string nom, prenom;
        double note;

        ZZ(std::string zznom, std::string zzprenom, double zznote): nom(zznom), prenom(zzprenom), note(zznote) {

        }

        bool operator<(const ZZ& other) const {
            // Utilisation de l'ordre croissant basé sur la valeur
            return note > other.note;
        }
        friend std::ostream& operator<<(std::ostream& os, const ZZ& student) {
            os << student.nom;
            return os;
        }
};


int main(int, char **) {
    typedef std::vector<ZZ *> vzz;
    vzz zz;

    // il faut mettre des elements
    zz.push_back(new ZZ("Mouad", "Kabouri", 13.5));
    zz.push_back(new ZZ("Ayoub", "SEDDIKI", 14));
    zz.push_back(new ZZ("Said", "Monji", 13));

    zz.clear();

    return 0;
}

