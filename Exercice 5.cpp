#include<iostream>
#include<iterator>
#include<set>
#include<algorithm>
using namespace std;
bool rechercher(set<int> s, int valeur) {
	cout<<"premiere fonction  ";
 return s.find(valeur) != s.end();
}
bool recher(set<int> s,set<int>::iterator it,set<int>::iterator itr,int valeur){
	it=s.begin();
	itr=s.end();
	cout<<"deuzieme fonction  ";
	for ( set<int>::iterator iter=s.begin() ; iter!=s.end() ; ++iter ){
		if( *iter == valeur ){
			//cout<<*iter<<endl;
			return true;
		}else {
		//	cout<<*iter<<endl;
			return false;
		}
	}
}
int main(){
	 int b;
	set<int>s1;
	for( int i=1 ; i<=100 ; i++){
		s1.insert(i);
	}
	cout<<"entrez un nombre ";
	cin>>b;
	cout<<rechercher(s1,b)<<endl; 
	set<int>::iterator it1;
	set<int>::iterator itr;
	cout<<""<<recher(s1,it1,itr,b)<<endl;
	set<int>::iterator it;
	for(it=s1.begin() ; it!=s1.end(); ++it){
		cout<<*it<<" ";
	}
	return 0;
}
