
#include <iostream> 

using namespace std ;

void suma (float x, float y );
void resta (float x, float y );
void multiplicacion (float x, float y );
void division  (float x, float y );
void pedirdato (float x , float y);
	float num1,num2;


main (){
	
	int opcion;
	
	do{
		cout<<"\tMenu de opciones"<<endl;
		cout<<"1. suma"<<endl;
		cout<<"2. resta"<<endl;
		cout<<"3. multiplicacion"<<endl;
		cout<<"4. division"<<endl;
		cout<<"su opcion elegida: ";
		cin>>opcion;
		
		switch (opcion){
			case 1: pedirdato ();
			suma(num1,num2);
			break;
				case 2: 
			resta(num1,num2);
			break;
				case 3: 
			multiplicacion(num1,num2);
			break;
				case 4: 
			division(num1,num2);
			break;
			default : cout << "opcion invalidad";
		}
		system("cls");
		while(opcion<=1);
		
	}
	
		void pedirdato(){
		cout<<"ingrese numero 1: ";
		cinn>>num1 ;
		cout << "ingrese numero 2 : ";
		cinn>>num2;
		
	
	
	void suma (float x, float y){
	
	float suma = x + y ;
	
	cout<<"resultado = "<< suma << endl ;
}
			void resta (float x, float y){
	
	float resta = x - y ;
	
	cout<<"resultado = "<< resta << endl ;
}
			void multiplicacion (float x, float y){
	
	float multiplicacion = x * y ;
	
	cout<<"resultado = "<< multiplicacion << endl ;
}
		
			void division (float x, float y){
	
	float division = x / y ;
	
	cout<<"resultado = "<< division<< endl ;
}
		
	
