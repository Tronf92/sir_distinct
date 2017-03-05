//Nicorici Adrian, 09.03.2014
//Se citeste un sir de numere. Sa se elimine din sir numere astfel incat in final se obtine un sir cu numere distincte.

#include <iostream>

using namespace std;

int main(){
	int sir[100],sir2[100],contor=0,ultim,dim,d=0,c,contor2=0,dim2=0,i=0;
	int cod=0;
	cout << "Introduceti dimensiunea sirului de numere:" << endl;
	cin >> dim;
	
	while(contor<dim){
		cout << "sir[ " << contor << "]= ";
		cin >> sir[contor];
		contor++;
	}
	contor=0;
	ultim=sir[dim-1];
	c=sir[contor];
	contor++;
	while(c!=ultim || cod==0){
		for(;contor<dim;contor++){
			sir[i]=0;
			if(c==sir[contor]){
				d++;
			}
			if(contor==(dim-1) ){
				i++;
			}
		}
		if(d==1){
			sir2[contor2]=c;
			contor2++;
			dim2++;
		}
		
		d=0;
		contor=0;
		c=sir[contor+i];
		if(i==dim-1){
			cod++;
		}

	}
	if(cod==0 && c==ultim){
			sir2[contor2]=c;
			contor2++;
			dim2++;
		}
	contor2=0;
	while(contor2<dim2){
		cout <<"sir2[" << contor2 << "] = " <<  sir2[contor2]<<endl;
		contor2++;
	}

	system("pause");
	return 0;

}
