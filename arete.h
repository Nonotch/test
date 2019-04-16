#ifndef ARETE_H_INCLUDED
#define ARETE_H_INCLUDED
#include"Sommet.h"
class Arete
{
    public:
        ///constructeur qui reçoit en params les données du sommet
        Arete (std::string,double,double);
        void ajouterVoisin(const Arete*);
        void afficherData() const;
        ~Arete();

    protected:

    private:
        /// Voisinage : liste d'adjacence
        std::vector<const Arete*> m_voisins_arete;

        /// Données spécifiques du sommet
        std::string m_id_arete; // Identifiant
        double m_s1;
        double m_s2; // Sommets qui doivent etre relie par larete

};


#endif // ARETE_H_INCLUDED
