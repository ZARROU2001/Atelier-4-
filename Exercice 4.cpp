#include <iostream>
#include <list>
using namespace std;
// creer une classe nomme personne
class personne {
	public:
		//declarer le variable nom et prenom  et age 
		string nom;
		string prenom;
		int age ;
		//initialiser les variables par le constructeur
		personne(string nom , string prenom , int age ) {
			this->nom=nom;
			this->prenom=prenom;
			this->age=age;
		}
};
int main() {
	//declarez une liste contient les le classe
	list<personne> liste ;
	//ajouter des personnes
	liste.push_back(personne("az","za",20));
	liste.push_back(personne("badr","elmar",22));
	liste.push_back(personne("taha","elamn",21));
	liste.push_back(personne("omar","fofo",16));
	list<personne>::iterator it ;
	//afficher la liste
	cout<<"nom : "<<"\t\t"<<"prenom : "<<"\t"<<"age : "<<endl; 
	for ( it = liste.begin() ; it != liste.end() ; ++it ) {
		cout<<it->nom<<"\t\t"<<it->prenom<<"\t\t"<<it->age<<endl;
	}
	return 0;
}
