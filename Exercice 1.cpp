#include <iostream>
using namespace std;
//creer une classe nomme complexe 
class complexe{
	// declarer deux variable reele et imaginaire
    int Re,Img;
public:
	//initialisez les variables par constructeur
    complexe(int x=0,int y=0){
    Re=x;
    Img=y;
    }
    //redifinir l'operator + pour calculer les nombres complexes
    complexe operator+(complexe a)
    {
        complexe s;
        s.Re = Re + a.Re;
        s.Img = Img + a.Img;
        return s;
    }
    //redifinir l'operator - pour calculer les nombres complexes
    complexe operator-(complexe a)
    {
        complexe d;
        d.Re = Re - a.Re;
        d.Img = Img - a.Img;
        return d;
    }
    //redifinir l'operator x pour calculer les nombres complexes
    complexe operator*(complexe a)
    {
        complexe m;
        m.Re = (Re *a.Re) - (Img*a.Img);
        m.Img = ((Re*a.Img) + (Img*a.Re));
        return m;
    }
    //redifinir l'operator / pour calculer les nombres complexes
    complexe operator/(complexe a)
    {
        complexe u;
        u.Re  = ((Re*a.Re)+(Img*a.Img))/((a.Re*a.Re) + (a.Img*a.Img));
        u.Img = ((Img*a.Re)-(Re*a.Img))/((a.Re*a.Re) + (a.Img*a.Img));
        return u;
    }
    // fonction permet d'afficher un nombre complexe
    void afficher(){
        cout<<Re;
        if(Img>=0){
        	cout<<" + ";
		}
		cout<<Img<<"i"<<endl;
    }
};

int main()
{
	//initilaisez deux complexe
    complexe a(1,1), b(2,2);
    complexe c,d,m,u;
    // afficher le complexe a
    cout<<"Complexe a = ";
    a.afficher();
    // afficher le complexe b
    cout<<"Complexe b = ";
    b.afficher();
    // afficher le complexe c=a+b
    c=(a+b);
    cout<<"Complexe c = Complexe a + Complexe b  = ";
    c.afficher();
    // afficher le complexe d=a-b
    d=(a-b);
    cout<<"Complexe d = Complexe a - Complexe b  = ";
    d.afficher();
    // afficher le complexe m=a*b
    m=(a*b);
    cout<<"Complexe m = Complexe a x Complexe b  = ";
    m.afficher();
    // afficher le complexe u=a/b
    u=(a/b);
    cout<<"Complexe u = Complexe a / Complexe b  = ";
    u.afficher();
    return 0;
}
