#pragma once
#include <vector>
#include "Article.h"

using namespace std;

class Panier
{
private:
    //Tableau d'articles
    vector<Article> tabArticle;

public:
    // Constructeur par d�faut
    Panier() = default;

    // Destructeur
    ~Panier();

    // M�thodes
    float prixMoyen();
    float sommePanier();
    int nbArticles();
    void ajoutArticle(Article* art);
    void supprArticle(Article* art);

    // Getters
    vector<Article> getPanier();

    // Setters
    

protected:
    //
};

