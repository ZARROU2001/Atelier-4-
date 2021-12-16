#include <iostream>
#include <list>
using namespace std;
// creer une foction permet d'afficher une liste
void showlist(list <int> g)
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout << '\t' << *it;
cout << '\n';
}
int main()
{
	//declare une liste
    list <int> liste1;
    int x;
    // on met 10 nombres dans ce liste d'une maniere aleatoire
    for ( int i=0 ; i<10 ; i++ ){
        cout<<"entrez le nombre "<<i<<" : \t";
        cin>>x;
        liste1.push_back(x);
    }
    //on affiche la liste 
    cout<< "la liste original est : "<<endl;
    showlist(liste1);
    liste1.sort();
    // la liste apres triee
    cout<< "la liste apres triee  est : "<<endl;
    showlist(liste1);

return 0;
}
