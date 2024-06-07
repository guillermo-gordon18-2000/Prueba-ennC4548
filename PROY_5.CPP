#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
//#include<ncurses.h>
//#include<conio.h>
#include<math.h>
using namespace std;
string pause="l";
void Presentacion()
{
	cout << "\t\t       Universidad Tecnologica de Panama ";
	cout << "\n\t         Facultad de Ing. en Sistemas Computacionales ";
	cout << "\n\t\t         Departamento de Programacion\n\n ";
	cout << "\n\t\t       Carrera: Desarrollo de Software I\n\n ";
	cout << "\n\t\t       Proyecto 5:  Desarrollo de Soft I\n\n ";
	cout << "\n\t\t\t         Integrantes: ";
	cout << "\n\t\t         Guillermo Gordon, 8-959-2011 ";
	cout << "\n\t\t\t          Profesora: ";
	cout << "\n\t\t           Rosa Dutari de Samaniego\n\n ";
	cout << "\n\t\t\t          25/06/2020";
	cout << "\n\t\t\t         PANAMA, 2020";
	cout << "\n <!--======================= introduzca cualquiera tecla =====================  -->\n";
	cin >> pause;
	//getc();
}

void Intrucciones()
{
	cout << "\n\n\n\n\t\tBIENVENIDO A LA SIMULACION DEL JUEGO PAR Y NOM\n";
	cout << "\n\t  Debe ingresar la opcion PAR o NOM";
	cout << "\n\n\t  Se generaran dos dados, si la suma de ambos es: ";
	cout << "\n\t  Un numero par,   y usted ingreso PAR, usted gana 5 puntos";
	cout << "\n\t  Un numero impar, y usted ingreso NOM, usted gana 5 puntos";
	cout << "\n\n\t  Si su pronostico no coincide? la maquina gana los 5 puntos!";
	cout << "\n\n\t  Gana el que tenga el mayor puntaje al finalizar las rondas.";
	cout << "\n\n\t\t################### Suerte! ##################";
	cout << "\n <!--======================= introduzca cualquiera tecla =====================  -->\n";
    cin >> pause;

	//getc();
}
int random (int d )
{

  int num=0;
  srand(time(NULL));
   num=1+rand()%(101-1);


return num;
}



void Juego()
  {
	int  rep1, aleat1=0, aleat2=0, sumusu, sumcom, verif, opt, tir;
	char nombre[10];
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t################## PAR Y NOM #################\n";
	cout << "\n\t\tIngrese su nombre: ";
	cin >> nombre;
	cout << "\n\t\tCuantas tiradas desea jugar? ";
	cin >> tir;
	system("clear");
	sumusu = 0;
	sumcom = 0;
	while (tir > 0)
	{
		rep1 = 1;
		while (rep1 == 1)
		{
			cout << "\n\t\t ############### PUNTUACIONES  ###############";
			cout << "\n\t\t "<<nombre<<": "<< sumusu<<" \t\t\t    Maquina: "<<sumcom;
			cout << "\n\t\t ############ TIROS RESTANTES: "<<tir<<" #############\n";
			cout << "\n\t\t ########### Ingrese su pronostico ###########";
			cout << "\n\t\t             PAR         Ingrese 1";
			cout << "\n\t\t             NOM         Ingrese 0 \n\t\t\t\t\t\t ";
			cin >> opt;
			if (opt == 1 || opt == 0)
			{
				rep1 = 2;
			}
			else
			{
				cout << "\n\t\t             OPCION NO DISPONIBLE";
				cout << "\n <!--======================= introduzca cualquiera tecla =====================  -->\n";
				cin >> pause;
				//			getc();
				system("clear");
			}
		}
		cout << "\n\t\t #############################################\n";



		srand(time(NULL));

		aleat1 = 1+rand()%(101-1);

		aleat2 = rand()%(101-1);
		cout << "\n\t\t DADO1 \t\t\t\t\t DADO2";
		cout << "\n\t\t ##### \t\t\t\t\t #####";
		cout << "\n\t\t # "<<aleat1<< " # \t\t\t\t\t # "<<aleat2<<" #";
		cout << "\n\t\t ##### \t\t La suma es: " << aleat1+aleat2<<"\t\t #####\n";
		verif = (aleat1 + aleat2)%2;
		if ((verif == 0 && opt == 1) || (verif != 0 && opt == 0))
		{
			cout << "\n\t\t\t    5 puntos para " << nombre << "!";
			sumusu = sumusu + 5;
		}
		else
		{
			cout << "\n\t\t\t    5 puntos para la maquina!";
			sumcom = sumcom + 5;
		}
		cout << "\n <!--======================= introduzca cualquiera tecla =====================  -->\n";
		cin >> pause;
		//	getc();
		system("clear");
		tir = tir - 1;
	}
	if (sumusu > sumcom)
	{
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t            Ganaste!";

	}
	else
	{
		if (sumusu < sumcom)
		{
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t    El ganador fue la maquina...";

		}
		else
		{
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t      Wow... Fue un empate!";
		}
	}
	cout << "\n\n\t\t\t        PUNTOS OBTENIDOS";
	cout << "\n\t\t\t       "<<nombre<<": "<<sumusu<<" puntos!";
	cout << "\n\t\t\t       Maquina: " << sumcom << " puntos!";
	//	getc();
	cout << "\n <!--======================= introduzca cualquiera tecla =====================  -->\n";
	cin >> pause;
}

int Salir()
{
	int r;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t       Gracias por jugar!";
	//	getc();
	cout << "\n <!--======================= introduzca cualquiera tecla =====================  -->\n";
	cin >> pause;
	r = 2;
	return r;
}

void Menu()
{
	int op, rep;
	rep = 1;
	system("clear");
	while (rep == 1)
	{
		cout << "\n\n\n\n\n\n\n\n\n\t\t\t    ###### MENU JUEGO ######";
		cout << "\n\t\t\t    1. Hoja de presentacion";
		cout << "\n\t\t\t    2. Instrucciones";
		cout << "\n\t\t\t    3. Juego";
		cout << "\n\t\t\t    4. Salir  \n\t\t\t    ";
		cin >> op;
		system("clear");
		switch (op)
		{
		case 1:
			Presentacion();
			system("clear");
			break;
		case 2:
			Intrucciones();
			system("clear");
			break;
		case 3:
			Juego();
			system("clear");
			break;
		case 4:
			rep = Salir();
			break;
		default:
			break;
		}
	}
}

int main()
{
//	randomize();
	Menu();
 return 0;
}
