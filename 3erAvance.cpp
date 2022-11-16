// 3erAvance1.2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<stdio.h>
#include<stdlib.h>//new delete punteros
#include<fstream>//archivos

using namespace std;

void alta();
void lista();
void archivos();
void modificar();
void eliminar();
int* NumeroArticulo, * Anio, registros, Salida2, Opcion2, val, Salida6, Busqueda2;
string* Nombre, * Caracteristicas, * Descripcion, * Genero, * Clasificacion, Busqueda;
float* PrecioUnitario, * Impuesto, * Total;

int main()
{
	int Opcion;
	printf("\t\t    GamePlanet\n \t---------Menu de opciones---------\n");
	//cout << "\t      Tienda de videojuegos\n" << "\t---------Menu de opciones---------\n";
	printf("\t| (1) Agregar articulo           |\n \t| (2) Modificar articulo         |\n \t| (3) Eliminar articulo          |\n \t| (4) Lista de articulos vigentes|\n \t| (5) Limpiar pantalla           |\n \t| (6) Salir                      |\n \t----------------------------------\n");
	//cout << "\t| (1) Agregar articulo           |\n" << "\t| (2) Modificar articulo         |\n" << "\t| (3) Eliminar articulo          |\n" << "\t| (4) Lista de articulos vigentes|\n" << "\t| (5) Limpiar pantalla           |\n" << "\t| (6) Salir                      |\n" << "\t----------------------------------\n";
	scanf_s("%d", &Opcion);
	switch (Opcion)
	{
	case 1: // Agregar articulo
		alta();
		system("pause");
		return main();
		break;

	case 2: // Modificar articulo 
		modificar();
		return main();
		break;

	case 3: // Eliminar articulo
		eliminar();
		return main();
		break;

	case 4: // Lista de articulos vigentes
		lista();
		system("pause");
		return main();
		break;

	case 5: // Limpiar pantalla
		system("cls");
		return main();
		break;

	case 6: // Salir
		archivos();
		exit(1);
		break;

	default:
		printf("Opcion ingresada erronea, vuelva a ingresar:\n");
		return main();
		break;
	}
}

void alta()
{
	printf("Ingrese el numero de registros que desea dar de alta \n");
	scanf_s("%d", &registros);
	NumeroArticulo = new int[registros];
	Anio = new int[registros];
	Nombre = new string[registros];
	Caracteristicas = new string[registros];
	Descripcion = new string[registros];
	Genero = new string[registros];
	Clasificacion = new string[registros];
	PrecioUnitario = new float[registros];
	Impuesto = new float[registros];
	Total = new float[registros];

	for (int i = 0; i < registros; i++)
	{
		int Salida = 1;
		do
		{
			if (Salida == 2)
			{
				printf("Numero de Articulo repetido, vuelva a ingresar:\n");
			}
			printf("Ingrese el numero del articulo %d:\n", i + 1);
			scanf_s("%d", &NumeroArticulo[i]);
			Salida = 1;
			for (int j = 0; j < i; j++)
			{
				if (NumeroArticulo[i] == NumeroArticulo[j])
				{
					Salida = 2;
				}
			}
		} while (Salida == 2);
		printf("Ingrese el Nombre del videojuego:\n");
		cin.ignore();
		getline(cin, Nombre[i]);
		printf("Ingrese la clasificacion:\n");
		getline(cin, Clasificacion[i]);
		printf("Ingrese el a%co de lanzamiento:\n", 164);
		scanf_s("%d", &Anio[i]);
		printf("Ingrese las caracteristicas:\n");
		cin.ignore();
		getline(cin, Caracteristicas[i]);
		printf("Ingrese la descripcion:\n");
		getline(cin, Descripcion[i]);
		printf("Ingrese el genero:\n");
		getline(cin, Genero[i]);
		printf("Ingrese el precio unitario:\n");
		scanf_s("%f", &PrecioUnitario[i]);
		Impuesto[i] = PrecioUnitario[i] * 0.16;
		Total[i] = PrecioUnitario[i] + Impuesto[i];
		/*if ((registros - 1) == i)
		{
			int Salida3 = 1;
			int Desicion;
			do
			{
				Salida3 = 1;
				printf("Desea ingresar otro articulo? \n 1.- Si \n 2.- No");
				scanf_s("%d", &Desicion);
				if (Desicion == 1)
				{
					registros = registros + 1;
				}
				if (Desicion != 1 and Desicion != 2)
				{
					Salida3 = 2;
					printf("Opcion ingresada erronea, vuelva a ingresar\n");
				}
			} while (Salida3 == 2);
		}
		*/
	}
	Salida6 = 1;
}

void modificar()
{
	if (Salida6 == 1)
	{
		int Modificacion;
		int Salida5 = 1;
		do
		{
			printf("Ingrese el numero del articulo a modificar:\n");
			scanf_s("%d", &Modificacion);
			Salida5 = 1;
			for (int i = 0; i < registros; i++)
			{
				if (Modificacion == NumeroArticulo[i])
				{
					printf("Ingrese el Nombre del videojuego:\n");
					cin.ignore();
					getline(cin, Nombre[i]);
					printf("Ingrese la clasificacion:\n");
					getline(cin, Clasificacion[i]);
					printf("Ingrese el a%co de lanzamiento:\n", 164);
					scanf_s("%d", &Anio[i]);
					printf("Ingrese las caracteristicas:\n");
					cin.ignore();
					getline(cin, Caracteristicas[i]);
					printf("Ingrese la descripcion:\n");
					getline(cin, Descripcion[i]);
					printf("Ingrese el genero:\n");
					getline(cin, Genero[i]);
					printf("Ingrese el precio unitario:\n");
					scanf_s("%f", &PrecioUnitario[i]);
					Impuesto[i] = PrecioUnitario[i] * 0.16;
					Total[i] = PrecioUnitario[i] + Impuesto[i];
					Salida5 = 2;
				}
			}
			if (Salida5 == 1)
			{
				printf("Numero de Articulo ingresado inexistente, vuelva a ingresar\n");
			}
		} while (Salida5 == 1);
	}
	else
	{
		printf("No se encuentra ningun articulo dado de alta\n");
	}
}

void eliminar()
{
	if (Salida6 == 1)
	{
		int Eliminacion;
		int Salida4 = 1;
		do
		{
			printf("Ingrese el numero del articulo a eliminar:\n");
			scanf_s("%d", &Eliminacion);
			Salida4 = 1;
			for (int i = 0; i < registros; i++)
			{
				if (Eliminacion == NumeroArticulo[i])
				{
					printf("Articulo %d eliminado\n", NumeroArticulo[i]);
					NumeroArticulo[i] = 0;
					Salida4 = 2;
				}
			}
			if (Salida4 == 1)
			{
				printf("Numero de Articulo ingresado inexistente, vuelva a ingresar\n");
			}
		} while (Salida4 == 1);
	}
	else
	{
		printf("No se encuentra ningun articulo dado de alta\n");
	}
}

void lista()
{
	if (Salida6 == 1)
	{
		do
		{
			printf("1.- Buscar por Genero\n2.- Buscar por Clasificacion\n");
			scanf_s("%d", &Opcion2);
			if (Opcion2 != 1 and Opcion2 != 2)
			{
				printf("Opcion incorrecta, vuelva a ingresar:\n");
				return lista();
			}
			if (Opcion2 == 1)
			{
				do
				{
					Busqueda2 = 1;
					Salida2 = 2;
					printf("Ingrese el Genero:\n");
					cin.ignore();
					getline(cin, Busqueda);
					for (int i = 0; i < registros; i++)
					{
						if (NumeroArticulo[i] != 0)
						{
							val = Busqueda.compare(Genero[i]);
							if (val == 0)
							{
								printf("\nNumero del Articulo:%d\n", NumeroArticulo[i]);
								printf("Nombre del VideoJuego:%s\n", Nombre[i].c_str());
								printf("Clasificacion:%s\n", Clasificacion[i].c_str());
								printf("A%co de Lanzamiento:%d\n", 164, Anio[i]);
								printf("Descripcion: %s\n", Descripcion[i].c_str());
								printf("Caracteristias: %s\n", Caracteristicas[i].c_str());
								printf("Genero:%s\n", Genero[i].c_str());
								printf("Precio Unitario:%f\n", PrecioUnitario[i]);
								printf("Impuesto:%f\n", Impuesto[i]);
								printf("Total:%f\n", Total[i]);
								Busqueda2 = 2;
							}
						}
					}
					if (Busqueda2 == 1)
					{
						printf("Genero ingresado erroneo, vuelva a ingresar\n");
					}
				} while (Busqueda2 == 1);
			}
			if (Opcion2 == 2)
			{
				do
				{
					Salida2 = 2;
					printf("Ingrese la Clasificacion:\n");
					cin.ignore();
					getline(cin, Busqueda);
					for (int i = 0; i < registros; i++)
					{
						if (NumeroArticulo[i] != 0)
						{
							val = Busqueda.compare(Clasificacion[i]);
							if (val == 0)
							{
								printf("\nNumero del Articulo:%d\n", NumeroArticulo[i]);
								printf("Nombre del VideoJuego:%s\n", Nombre[i].c_str());
								printf("Clasificacion:%s\n", Clasificacion[i].c_str());
								printf("A%co de Lanzamiento:%d\n", 164, Anio[i]);
								printf("Descripcion: %s\n", Descripcion[i].c_str());
								printf("Caracteristias: %s\n", Caracteristicas[i].c_str());
								printf("Genero:%s\n", Genero[i].c_str());
								printf("Precio Unitario:%f\n", PrecioUnitario[i]);
								printf("Impuesto:%f\n", Impuesto[i]);
								printf("Total:%f\n", Total[i]);
							}
						}
					}
					if (Busqueda2 == 1)
					{
						printf("Clasificacion ingresada erronea, vuelva a ingresar\n");
					}
				} while (Busqueda2 == 1);
			}
		} while (Salida2 == 1);
	}
	else
	{
		printf("No se encuentra ningun articulo dado de alta\n");
	}
}

void archivos()
{
	ofstream archivo; //clase ifstream para leer archivos
	string nombrearchivo;

	nombrearchivo = "GamePlanet.txt";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("ERROR NO SE PUDO CREAR EL ARCHIVO");
		system("pause");
		exit(1);
	}

	archivo << "NArticulo" << "\t";
	archivo << "A" << char(164) << "o" << "\t";
	archivo << "Nombre" << "\t";
	archivo << "Caracteristicas" << "\t";
	archivo << "Descripcion" << "\t";
	archivo << "Genero" << "\t";
	archivo << "Clasificacion" << "\t";
	archivo << "Precio Unitario" << "\t";
	archivo << "Impuesto" << "\t";
	archivo << "Total" << "\t";



	for (int i = 0; i < registros; i++)
	{
		if (NumeroArticulo[i] != 0)
		{
			archivo << "\n" << NumeroArticulo[i] << "\t";
			archivo << Anio[i] << "\t";
			archivo << Nombre[i] << "\t";
			archivo << Caracteristicas[i] << "\t";
			archivo << Descripcion[i] << "\t";
			archivo << Genero[i] << "\t";
			archivo << Clasificacion[i] << "\t";
			archivo << PrecioUnitario[i] << "\t";
			archivo << Impuesto[i] << "\t";
			archivo << Total[i] << "\t" << "\n";
		}
	}


	archivo.close();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
