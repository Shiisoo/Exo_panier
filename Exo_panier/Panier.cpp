#include "Panier.h"

// Constructeur
/*Panier::Panier() {
	
}*/

// Destructeur
Panier::~Panier(){}

//Méthode ajout d'article
void Panier::ajoutArticle(Article* art){
	this->tabArticle.push_back(*art);                                               //Ajout de l'objet article dans le tableau d'article
}

// Fonction de suppression d'un article dans le panier
void Panier::supprArticle(Article* art){                                            //On passe en paramétre l' objet art de la classe Artcle 
	for (int i = 0; i < this->tabArticle.size(); i++)                               //boucle  à l'index 0 jusqu'à la taille du tableau article 
	{
		if (this->tabArticle[i].get_nom() == art->get_nom()                         //Si le nom d'un article dans le tableau est == 
			&& this->tabArticle[i].get_description() == art->get_description()
			&& this->tabArticle[i].get_prix() == art->get_prix())
		{
			this->tabArticle.erase(this->tabArticle.begin() + i);

			//delete art;
		}
	}
}

// Calcul du prix moyen du panier
float Panier::prixMoyen(){
	return (sommePanier() / (float)this->tabArticle.size());
}

// Calcul de la somme du prix des articles du panier
float Panier::sommePanier(){
    float som = 0.;
	for (int i = 0; i < this->tabArticle.size(); i++){
        //cout << "\n- " << this->tabArticle[i].get_prix() << endl;
        som += this->tabArticle[i].get_prix();
	}
    return som;
}

// Donne le nombre d'articles dans le panier
int Panier::nbArticles(){
	return this->tabArticle.size();
}

// Retourne la liste des articles
vector<Article> Panier::getPanier(){
	return this->tabArticle;
}

