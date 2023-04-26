#include "Article.h"

//Implémente le construteur par défaut
Article::Article()
{
    string nom, description;
    float prix;

    nom = entree_utilisateur_str("Entrer le nom de l'article ");
    description = entree_utilisateur_str("puis sa description ");
    prix = entree_utilisateur_int("et son prix ");

    // appelle premier contructeur
    Article(nom, description, prix);
}

//Implémente le constructeur
Article::Article(string nom, string description, float prix)
{
    this->Nom = nom;
    this->Description = description;
    this->Prix = prix;
}

//Implémente le destructeur Article
Article::~Article()
{

}

//Méthode qui permet d'être appelé 
string Article::entree_utilisateur_str(string texte){
    string s;
    cout << texte << endl;
    cin >> s;
    return s;
}


int Article::entree_utilisateur_int(string texte){
    int a;
    cout << texte << endl;
    scanf_s("%d", &a);
    //scanf("%d", &a);
    return a;
}

void Article::afficheInformations()
{
    cout << "Nom : " << this->get_nom() << " / Desc : " << this->get_description() << " / Prix : " << this->get_prix() << "EUR." << endl;
}

// On récupére le nom, description, le prix
string Article::get_nom() const { return this->Nom; }
string Article::get_description() const { return this->Description; }
float  Article::get_prix() const { return this->Prix; }

// On modifier le nom, description, le prix
void Article::set_nom(string nom){this-> Nom = nom;}
void Article::set_description(string description){this-> Description = description;}
void Article::set_prix(float prix){this-> Prix = prix;}

