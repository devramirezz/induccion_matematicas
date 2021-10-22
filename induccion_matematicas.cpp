//Project created by Kevin Ramirez
//ig @kevin_ramirezz1

#include <stdio.h>
#include <conio.h>
#include <iostream>

#include <locale.h>

using namespace std;


//__________________________________________________________________________________________________________________________________________________________

//Factores primos 

//__________________________________________________________________________________________________________________________________________________________
void primos()
{
	system("cls");
	
	
	int n;
	
	cout<<"\t\t PRODUCTO DE FACTORES PRIMOS \n\n"<<endl<<endl<<endl;
	
	cout<<endl;
	cout<<endl;
	
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

//__________________________________________________________________________________________________________________________________________________________

//maximo comun divisor

//__________________________________________________________________________________________________________________________________________________________

void maxdivsor()
{
	system("cls");
	
	int n1, n2;
	int residuo, mcd;
	
	cout<<"\t\t MÁXIMO COMÚN DIVISOR \n\n"<<endl<<endl<<endl;
	
	cout<<endl;
	cout<<endl;
	
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

//__________________________________________________________________________________________________________________________________________________________

//Algoritmo de la division

//__________________________________________________________________________________________________________________________________________________________

void algodivicion()
{
	system("cls");
	
	int n, l, q, r;
	
	cout<<"\t\t ALGORITMO DE LA DIVISIÓN \n\n"<<endl<<endl<<endl;
	
	cout<<endl;
	cout<<endl;
	
	
	cout <<"Ingrese un numero dividendo";
	cin >>n;
	cout <<"Ingrese un numero divisor";
	cin >>l;
	cout <<"Ingrese un numero cociente";
	cin >>q;
	
	r=n-(q*l);
	
	cout <<"Resultado es: "<<r<<endl;
	
	cout<<n<<"="<<" ("<<l<<"x"<<q<<" )+"<<r<<endl;
	cout<<n<<"="<<n;
	
	getch();
}
	
//__________________________________________________________________________________________________________________________________________________________

//Algoritmo de euclides 

//__________________________________________________________________________________________________________________________________________________________

void algoeuclides()
{
	system("cls");
	
	int b, a, r;
	
	cout<<"\t\t ALGORITMO DE EUCLIDES \n\n"<<endl<<endl<<endl;
	
	cout<<endl;
	cout<<endl;
	
	
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

//__________________________________________________________________________________________________________________________________________________________

//Menu 

//__________________________________________________________________________________________________________________________________________________________

void menu ()
{
	system ("cls");
	setlocale(LC_CTYPE, "Spanish");
	
	cout<<endl<<endl;
	
	cout<<"\t----------------------------MENÚ----------------------------\n\n"<<endl;
	
	cout<<"\t --------------------ELIGE UNA OPCIÓN--------------------"<<endl; 
	
	cout<<endl;
	
		
	cout << "\t 1. PRODUCTO DE FACTORES PRIMOS" <<endl;
	cout << "\t 2. MÁXIMO COMÚN DIVISOR" <<endl;
	cout << "\t 3. ALGORITMO DE LA DIVISIÓN" <<endl;
	cout << "\t 4. ALGORITMO DE EUCLIDES" <<endl;
	cout <<endl;
	cout << "\t 5. salir" <<endl<<endl<<endl;
	
	cout << "\t\t __________________________________________"<<endl<<endl;
	
	cout << "\t  -  Seleccionar opción  ->";
}

//__________________________________________________________________________________________________________________________________________________________
//Funcion opcion
//__________________________________________________________________________________________________________________________________________________________
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
			system("cls");
			cout<<"-------------------------------------------------"<<endl<<endl;	
			cout<<"\t\t Hasta pronto..."<<endl<<endl;	
			cout<<"-------------------------------------------------"<<endl<<endl<<endl<<endl;
			
			getch();
			
			cout<<"_______________________________________________________________________________"<<endl;
			
			system("cls");
			cout<<"-------------------------------------------------"<<endl<<endl;	
			cout<<"\t\t SIGUEME..."<<endl<<endl;	
			cout<<"-------------------------------------------------"<<endl<<endl<<endl<<endl;
			
			cout<<"\t\t Github"<<endl;  cout <<"\t @kevinramirezz1"<<endl<<endl;
			cout<<endl;
			cout<<"\t\t Repositorio"<<endl; cout <<"\t https://github.com/kevinramirezz1/induccion_matematicas"<<endl;
			cout<<endl;
			cout<<"\t\t Instagram"<<endl;  cout <<"\t @kevin_ramirezz1"<<endl<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout <<"\t© Todos los derechos reservados";
			
			getch();
			break;
			
			default:
				cout <<"Opcion invalida";
				getch();
			break;
			
			
		}
	} while (opcion!=5);

}

//© Todos los derechos reservados
