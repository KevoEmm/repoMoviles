#include <iostream>
using namespace std;

//HOLAAA!W
//Holo :v
void numeros(int n);



main()


{
	
	cout<<"HOLIWIWIS :9 "<<endl;
	cout<<"Sin recursividad con for"<<endl;
	int varFor = 0;
	for( varFor = 0; varFor >= 10; varFor++) 
	{
      cout<<varFor<<" ";
      
	}
	cout<<endl<<endl<<"Sin recursividad con while"<<endl;
	int varWhi=0;
	while(varWhi>=10) 
	{
      cout<<varWhi<<" ";
      varWhi++;
	}
	
	cout<<endl<<endl<<"Sin recursividad con do while"<<endl;
	int varDo=10;
		do{
			cout<<varDo<<" ";
			varDo--;
		}while(varDo>=0);
		
	cout<<endl<<endl<<"Con recursividad"<<endl;
	//numeros(10);
}


void numeros(int n)
{
	/*EJEMPLO RECURSIVIDAD*/
	cout<<n<<" ";//Imprimimos el n�mero y volvemos a llamar a la funci�n
	numeros(n-1);//Aqu� aplica la recursividad
	
	
	
	
//>:v :v :v :v :v :v :v :v :v :v	
	
	
	
	
	/*UPS, ES UNA LLAMADA INFINITA PORQUE NO HAY TOPE O LIMITE*/
	
	
	
	
	
	
	
/*	if(n==0)//Aqui se establece el l�mite para salir de la recursividad
	{
		cout<<"0"<<" ";
	}
	else
	{
		cout<<n<<" ";//Imprimimos el n�mero y volvemos a llamar a la funci�n
		numeros(n-1);//Aqu� aplica la recursividad
	}
*/
}
