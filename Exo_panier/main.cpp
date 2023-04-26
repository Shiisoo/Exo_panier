#include <iostream>
#include <string>

#include "Article.h"
#include "Panier.h"

using namespace std;

/*
Créer un programme qui va creer un nombre aléatoire d'articles (nom, description, prix)
Les stocks dans un objet panier.    

Et calcul :
prix moyen des articles
sommes prix des articles
nombre d'articles
*/

void affichePrix(float prix){
    printf_s("%.2fEUR\n", prix);
    // printf("%.2fEUR\n", prix);
}

void afficheResult(string texte, float prix){
    cout << texte;
    affichePrix(prix);
}

int main()
{
    // Instanciation de l'objet classe Panier
    Panier panier = Panier();

    // L'Instanciation des articles qui pointe vers la classe Article

    Article art1 = Article("Ordinateur", "Ordinateur g@m1ng", 1284.80);
    Article art2 = Article("Clavier", "Clavier mecanique qui brille", 75.90);
    Article art3 = Article("Souris", "Souris qui brille", 129.99);

    // Ajout des articles dans les panier
    panier.ajoutArticle(&art1);
    panier.ajoutArticle(&art2);
    panier.ajoutArticle(&art3);

    // Informations des articles
    cout << "Art1 -> ";
    art1.afficheInformations();
    cout << "Art2 -> ";
    art2.afficheInformations();
    cout << "Art3 -> ";
    art3.afficheInformations();

    cout << endl;

    // Affichage des informations du panier
    
    cout << "Nombre d'articles dans le panier : " << panier.nbArticles() << endl;
    afficheResult("Somme du panier                  : ", panier.sommePanier());
    afficheResult("Prix moyen du panier             : ", panier.prixMoyen());

    cout << endl;
    cout << "Suppression de l'article 2." << endl;
    // Suppression d'un article
    panier.supprArticle(&art2);

    cout << endl;

    // Réaffichage du panier
    cout <<       "Nombre d'articles dans le panier : " << panier.nbArticles() << endl;
    afficheResult("Somme du panier                  : ", panier.sommePanier());
    afficheResult("Prix moyen du panier             : ", panier.prixMoyen());

    system("pause");
    return 0;
}
