// 2doAvance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<stdio.h>

using namespace std;

struct Tienda
{
	//declaracion de variable

	int NumeroArticulo, Anio;
	string Nombre, Caracteristicas, Descripcion,Genero, Clasificacion;
	float PrecioUnitario, Impuesto, Total;
};

int main()
{
	Tienda Videojuegos[3];
	//string Nombre, Caracteristicas, Descripcion, Clasificacion, Genero;
	int Opcion, Opcion2, Salida2 = 1, val;
	string Busqueda, Busqueda2;
	//int NumeroArticulo, Anio;
	//float PrecioUnitario, Impuesto, Total;
	do
	{
		printf("\t      Tienda de videojuegos\n \t---------Menu de opciones---------\n");
		//cout << "\t      Tienda de videojuegos\n" << "\t---------Menu de opciones---------\n";
		printf("\t| (1) Agregar articulo           |\n \t| (2) Modificar articulo         |\n \t| (3) Eliminar articulo          |\n \t| (4) Lista de articulos vigentes|\n \t| (5) Limpiar pantalla           |\n \t| (6) Salir                      |\n \t----------------------------------\n");
		//cout << "\t| (1) Agregar articulo           |\n" << "\t| (2) Modificar articulo         |\n" << "\t| (3) Eliminar articulo          |\n" << "\t| (4) Lista de articulos vigentes|\n" << "\t| (5) Limpiar pantalla           |\n" << "\t| (6) Salir                      |\n" << "\t----------------------------------\n";
		scanf_s("%d", &Opcion);
		//cin >> opc;
		switch (Opcion)
		{
		case 1: //Agregar articulo
			for (int i = 0; i < 3; i++)
			{

				//printf("Ingrese el numero del articulo:\n"); //cout << "Ingrese el numero del articulo:\n";
				//scanf_s("%d", &NumeroArticulo); //cin >> NumeroArticulo;
				int Salida = 1;
				do
				{
					printf("Ingrese el Numero del Articulo \n:");
					scanf_s("%d", &Videojuegos[i].NumeroArticulo);
					if (Videojuegos[i].NumeroArticulo == Videojuegos[i - 1].NumeroArticulo || Videojuegos[i].NumeroArticulo == Videojuegos[i - 2].NumeroArticulo)
					{
						printf("El numero del articulo ya existe, vuelva a ingresar: \n");

					}
					else
					{
						Salida = 2;
					}
				} while (Salida == 1);

				printf("Ingrese el Nombre del videojuego:\n"); //cout << "Ingrese el nombre del videojuego:\n";
				cin.ignore();
				getline(cin, Videojuegos[i].Nombre);
				printf("Ingrese el a%co de lanzamiento:\n", 164); //cout << "Ingrese el a" << char(164) << "o de lanzamiento:\n";
				scanf_s("%d", &Videojuegos[i].Anio); //cin >> Anio;
				printf("Ingrese la clasificacion:\n"); //cout << "Ingrese la clasificacion:\n";
				cin.ignore();
				getline(cin, Videojuegos[i].Clasificacion);
				printf("Ingrese las caracteristicas:\n"); //cout << "Ingrese las caracterisitcas:\n";
				cin.ignore();
				getline(cin, Videojuegos[i].Caracteristicas);
				printf("Ingrese la descripcion:\n"); //cout << "Ingrese la descripcion:\n";
				cin.ignore();
				getline(cin, Videojuegos[i].Descripcion);
				printf("Ingrese el genero:\n"); //cout << "Ingrese el genero:\n";
				getline(cin, Videojuegos[i].Genero); //cin >> Genero;
				printf("Ingrese el precio unitario:\n"); //cout << "Ingrese el precio unitario:\n";
				scanf_s("%f", &Videojuegos[i].PrecioUnitario); //cin >> PrecioUnitario;
				Videojuegos[i].Impuesto = Videojuegos[i].PrecioUnitario * 0.16;
				Videojuegos[i].Total = Videojuegos[i].PrecioUnitario + Videojuegos[i].Impuesto;
				printf("Impuesto: %f \n", &Videojuegos[i].Impuesto); //cout << "Impuesto: " << Impuesto << endl;
				printf("Total: %f \n", &Videojuegos[i].Total); //cout << "Total: " << Total << endl;
			}
			break;

		case 2: //Modificar articulo
			break;

		case 3: //Eliminar articulo
			break;

		case 4: //Lista de articulos vigentes
			do
			{
				printf("1.- Buscar por Genero\n2.- Buscar por Clasificacion");
				scanf_s("%d", &Opcion2);
				if (Opcion2 != 1 and Opcion2 != 2)
				{
					printf("Opcion incorrecta, vuelva a ingresar:\n");
				}
				if (Opcion2 == 1)
				{
					Salida2 = 2;
					printf("Ingrese el Genero:\n");
					cin.ignore();
					getline(cin, Busqueda);
					for (int i = 0; i < 3; i++)
					{
						val = Busqueda.compare(Videojuegos[i].Genero);
						if (val == 0)
						{
							printf("\nNumero del Articulo:%d\n", Videojuegos[i].NumeroArticulo);
							printf("Nombre del VideoJuego:%s\n", Videojuegos[i].Nombre.c_str());
							printf("A%co de Lanzamiento:%d\n", 164, Videojuegos[i].Anio);
							printf("Clasificacion:%s\n", Videojuegos[i].Clasificacion.c_str());
							printf("Descripcion: %s\n", Videojuegos[i].Descripcion.c_str());
							printf("Caracteristias: %s\n", Videojuegos[i].Caracteristicas.c_str());
							printf("Genero:%s\n", Videojuegos[i].Genero.c_str());
							printf("Precio Unitario:%f\n", Videojuegos[i].PrecioUnitario);
							printf("Impuesto:%f\n", Videojuegos[i].Impuesto);
							printf("Total:%f\n", Videojuegos[i].Total);
						}
					}
				}

				if (Opcion2 == 2)
				{
					Salida2 = 2;
					printf("Ingrese la Clasificacion:\n");
					cin.ignore();
					getline(cin, Busqueda);
					for (int i = 0; i < 3; i++)
					{
						val = Busqueda.compare(Videojuegos[i].Clasificacion);
						if (val == 0)
						{
							printf("\nNumero del Articulo:%d\n", Videojuegos[i].NumeroArticulo);
							printf("Nombre del VideoJuego:%s\n", Videojuegos[i].Nombre.c_str());
							printf("A%co de Lanzamiento:%d\n", 164, Videojuegos[i].Anio);
							printf("Clasificacion:%s\n", Videojuegos[i].Clasificacion.c_str());
							printf("Descripcion: %s\n", Videojuegos[i].Descripcion.c_str());
							printf("Caracteristias: %s\n", Videojuegos[i].Caracteristicas.c_str());
							printf("Genero:%s\n", Videojuegos[i].Genero.c_str());
							printf("Precio Unitario:%f\n", Videojuegos[i].PrecioUnitario);
							printf("Impuesto:%f\n", Videojuegos[i].Impuesto);
							printf("Total:%f\n", Videojuegos[i].Total);
						}
					}
				}

			} while (Salida2 == 1);
			break;

		case 5: //Limpiar pantalla
			system("cls");
			break;

		case 6: //Salir
			printf("Saiendo...\n");
			break;

		default:
			printf("Ingrese una opcion correcta\n"); //cout << "Ingrese una opcion correcta\n";
			system("pause");
			system("cls");
			break;

		}
	} while (Opcion != 6);
	system("pause");
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
