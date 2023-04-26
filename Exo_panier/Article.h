#pragma once

#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class Article{

private:
    // Attribut
    string Nom;
    string Description;
    float Prix;

    // Méthodes
    string entree_utilisateur_str(string texte);
    int entree_utilisateur_int(string texte);
    
public:
    // Constructeur
    Article();       // Constructeur par defaut.
    Article(string nom, string description, float prix);
    
    // Destructeur
    ~Article();

    // Méthodes
    void afficheInformations();

    // getters
    string get_nom() const;
    string get_description() const;
    float get_prix() const;
    
    // setters
    void set_nom(string nom);
    void set_description(string description);
    void set_prix(float prix);


    
};

