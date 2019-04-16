#include <iostream>
#include <queue>
#include <stack>
#include <list>
#include<unordered_map>
#include "arete.h"
#include "Sommet.h"

Arete::Arete(std::string id,double s1,double s2):m_id_arete{id},m_s1{s1},m_s2{s2}
{
}
void Arete::ajouterVoisin(const Arete* voisin){
    m_voisins_arete.push_back(voisin);
}
 void Arete::afficherData() const{
     std::cout<<"  arete numero  "<<m_id_arete<<" : "<<"Sommet Initiale "<<m_s1<<", Sommet Finale "<<m_s2<<std::endl;

 }

//je rajoute encore un commentaire pour souler le monde hehe


Arete::~Arete()
{
    //dtor
}
