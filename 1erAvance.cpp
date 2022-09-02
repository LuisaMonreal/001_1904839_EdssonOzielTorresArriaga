// 1erAvance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	string Nombre, Caracteristicas, Descripcion, Clasificacion;
	char Genero[20];
	int opc, NumeroArticulo, Anio;
	float PrecioUnitario, Impuesto, Total;
	cout << "\t      Tienda de videojuegos\n" << "\t---------Menu de opciones---------\n";
	cout << "\t| (1) Agregar articulo           |\n" << "\t| (2) Modificar articulo         |\n" << "\t| (3) Eliminar articulo          |\n" << "\t| (4) Lista de articulos vigentes|\n" << "\t| (5) Limpiar pantalla           |\n" << "\t| (6) Salir                      |\n" << "\t----------------------------------\n";
	cin >> opc;
	switch (opc)
	{
	case 1: //Agregar articulo
		cout << "Ingrese el numero del articulo:\n";
		cin >> NumeroArticulo;
		cout << "Ingrese el nombre del videojuego:\n";
		cin.ignore();
		getline(cin, Nombre);
		cout << "Ingrese el a"<<char(164)<<"o de lanzamiento:\n";
		cin >> Anio;
		cout << "Ingrese la clasificacion:\n";
		cin.ignore();
		getline(cin,Clasificacion);
		cout << "Ingrese las caracterisitcas:\n";
		cin.ignore();
		getline(cin, Caracteristicas);
		cout << "Ingrese la descripcion:\n";
		cin.ignore();
		getline(cin, Descripcion);
		cout << "Ingrese el genero:\n";
		cin >> Genero;
		cout << "Ingrese el precio unitario:\n";
		cin >> PrecioUnitario;
		Impuesto = PrecioUnitario * 0.16;
		Total = PrecioUnitario + Impuesto;
		cout << "Impuesto: " << Impuesto << endl;
		cout << "Total: " << Total << endl;
	    return main();
		break;

	case 2: //Modificar articulo
		return main();
		break;

	case 3: //Eliminar articulo
		return main();
		break;

	case 4: //Lista de articulos vigentes
		return main();
		break;

	case 5: //Limpiar pantalla
		system("cls");
		return main();
		break;

	case 6: //Salir
		return 0;
		break;

	default:
		cout << "Ingrese una opcion correcta\n";
		system("pause");
		system("cls");
		return main();

	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
