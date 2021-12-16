#include <iostream>
using namespace std;
class Test{
public:
	static int tableau[] ;
	 float division(int indice, int diviseur){
	return tableau[indice]/diviseur;
	}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
cout << "Entrez l’indice de l’entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
cout << "Le résultat de la division est: "<< endl;
Test t1;
cout <<t1.division(x,y) << endl;
return 0;
}
