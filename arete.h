#ifndef ARETE_H_INCLUDED
#define ARETE_H_INCLUDED
#include"Sommet.h"
class Arete
{
    public:
        ///constructeur qui re�oit en params les donn�es du sommet
        Arete (std::string,double,double);
        void ajouterVoisin(const Arete*);
        void afficherData() const;
        ~Arete();

    protected:

    private:
        /// Voisinage : liste d'adjacence
        std::vector<const Arete*> m_voisins_arete;

        /// Donn�es sp�cifiques du sommet
        std::string m_id_arete; // Identifiant
        double m_s1;
        double m_s2; // Sommets qui doivent etre relie par larete

};


#endif // ARETE_H_INCLUDED
