#include <iostream>
#include <string>
using namespace std;
// creer une foction permet de afficher date et heure separez
void DateHeure(string s)
{
	//si le chaine de charactere qu'on a saisie != 12 on va afficher "chaine invalide" 
    if ( s.length() != 12 )
        cout << "Chaine invalide." << endl;
    else
    {
        cout << "Date  : " << s.substr(0,2) << "/" << s.substr(2,2) << "/" << s.substr(4,4)<< " a Heure : " << s.substr(8,2) << "h" << s.substr(10,2) << endl;
    }
}

int main()
{
	//on donne un exepmle "300520011342"
    string DATECOMPLET("300520011342");
    DateHeure(DATECOMPLET); 
    // la sortie va afficher comme ca    -----Date  : 30/05/2001 a Heure : 13h42-----
}
