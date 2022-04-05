#include <iostream>
using namespace std;

int main() {
	int opc;
	do{
		cout<<"--------------------------------------"<<endl;
		cout<<"\tSeleccione una opción"<<endl;
		cout<<"\t1: Biografia"<<endl;
		cout<<"\t2: Salir"<<endl;
		cout<<"--------------------------------------"<<endl;
		cout<<" "<<endl;
		cin>>opc;
		switch (opc){
		case 1: cout<<" "<<endl;
			cout<<"Mi nombre es Kevin Adalid Basagoitia Salguero tengo 19"<<endl;
			cout<<"Soy estudiante de Ingenieria en Sistemas"<<endl;
		    cout<<"Naci en Chuquisaca-Sucre el 18 de Enero de 2003"<<endl;
			cout<<"Me mude a Santa Cruz cuando era muy pequeño"<<endl;
			cout<<"Volvi a Sucre cuando cumpli 6 "<<endl;
			cout<<"Curse primaria en la Escuela 23 de Marzo"<<endl;
			cout<<"Estuve en natacion durante 6 meses"<<endl;
			cout<<"Tambien entre voleibol durante 3 meses"<<endl;
			cout<<"Termine la primaria a la edad de 11 "<<endl;
			cout<<"Curse secundaria en el Col. Nacional Jaime de Zudañes"<<endl;
			cout<<"Termine el colegio a la edad de 17 "<<endl;
			cout<<"trabaje como ayudante de cocina durante 2 meses"<<endl;
			cout<<"Tengo como pasa tiempo jugar basquet y jugar en la PC"<<endl;
			cout<<"Y recientemente comence con un curso de Photoshop"<<endl;break;
		default: break;
		}
	} while(opc==1);
	return 0;
}