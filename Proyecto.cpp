//Project created by Kevin Ramirez
//ig @kevin_ramirezz1

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <locale.h>

using namespace std;

//Factores primos 

void primos()
{
	system("cls");
	
	
	int n;
	
	cout<<"Ingresar un numero entero: ";
	cin>>n;
	
	for (int i = 2; n > 1 ; i++)
	{
		while (n%i == 0)
		{
			
			n = n/i;
			
			if (n>1)cout<<i<<"x";
			
			
			else cout<<i;
		}
	}
	
	
	getch();
}

//maximo comun divisor

void maxdivsor()
{
	system("cls");
	
	int n1, n2;
	int residuo, mcd;
	
	cout<<"Ingrese valor 1 : ";
	cin >>n1;
	
	cout<<"Ingrese valor 2 : ";
	cin >>n2;
	
	do{
		residuo = n1 % n2;
		
		if(residuo = 0)
		{
			n1 = n2;
			n2 = residuo;
		}
		else
		{
			mcd = n2;
		}

		
	}while (residuo= 0);
	
	cout<<"MCD:"<<mcd;
	
	getch();

}

//Algoritmo de la division
void algodivicion()
{
	system("cls");
	
	cout <<"MANENIMIENTO";
	
	getch();

}
	


//Algoritmo de euclides 
void algoeuclides()
{
	system("cls");
	
	int b, a, r;
	
	cout <<"Ingrese numero 1:";
	cin >>a;
	cout <<"Ingrese numero 2:";
	cin >>b;	
	
	if (a>b)
	{
		r=a%b;
		cout <<"\na = "<<a<<"; b = "<<b<<": q = "<<a/b<<"; r = "<<r<<endl; 
		a=b;
	}
	
	if (a<b)
	{
		r=b%a;
		cout <<"\na = "<<b<<"; b = "<<a<<"; q ="<<b/a<<"; r = "<<r<<endl; 
		a=b;
	}
	
	if (r==0)
	{
		b=a;
	}
	
	while (r !=0)
	{
		b=r;
		r=a%b;
		cout <<"a ="<<a<<"; b = "<<b<<"; q = "<<a/b<<"; r = "<<r<<endl; 
		a=b; 
	}
	
	cout<<"/MCD: "<<b;
	
	getch();
	
		
}


//Menu 

void menu ()
{
	setlocale(LC_CTYPE, "Spanish");
	
	system ("cls");
	cout << "1. PRODUCTO DE FACTORES PRIMOS" <<endl;
	cout << "2. MÁXIMO COMÚN DIVISOR" <<endl;
	cout << "3. ALGORITMO DE LA DIVISIÓN" <<endl;
	cout << "4. ALGORITMO DE EUCLIDES" <<endl;
	cout << "5. salir" <<endl;
	cout << "Ingrese opcion" <<endl;
	

}


//Funcion opcion
main ()
{
	int opcion;
	do 
	{
		menu();
		cin >> opcion;
		switch (opcion)
		{
			case 1:
				primos();
			break;
			
			case 2:
				maxdivsor();
			break;
				
			case 3:
				algodivicion();
			break;
			
			case 4:
				algoeuclides();
			break;
			
			case 5:
				cout<<"Hazta pronto";
			break;
			
			default:
				cout <<"Opcion invalida";
				getch();
			break;
			
			
		}
	} while (opcion!=5);

}

//Â© Todos los derechos reservados
