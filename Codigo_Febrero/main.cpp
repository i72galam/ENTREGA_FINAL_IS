//#include "funciones.hpp"
#include "baseDeDatos.hpp"
#include "agenda.hpp"
#include <cstdlib>


int introducirValor()
{
	int opcion;

	cout<<"=============================================="<<endl;
	cout<<"------------------- MENÚ -------------------\n";
	cout<<"  1: Listar todos los pacientes del sistema.\n";
	cout<<"  2: Insertar un paciente nuevo.\n";
	cout<<"  3: Añadir cita a paciente\n";
	cout<<"  4: Modificar los datos de un paciente.\n";
	cout<<"  5: Borrar un paciente.\n";
	cout<<"  6: Buscar citas por fecha.\n";
	cout<<"  7: Mostrar datos de un paciente.\n";	
	cout<<"  8: Insertar tratamiento a un paciente.\n";
	cout<<"  9: Buscar citas de un paciente.\n";
	cout<<"  10: Modificar cita de un paciente.\n";
	cout<<"  11: Borrar cita de un paciente.\n";
	cout<<"  12: Borrar tratamiento de un paciente.\n";
	cout<<endl;
	cout<<"  0: Apagar sistema.\n\n";
	cout<<"----------------------------------------------"<<endl;

	cout<<"Introduce la opción que desee: ";
	cin>>opcion;
	cout<<endl;
	cout<<"==============================================";

	cout<<endl;

	return opcion;
}

int main()
{
	// Definición de variables.
	int opc,opc2,pos,encon;
	int paciente;
	Contacto aux;
	string nombre, apellido1, apellido2;
	bool encontrado;
	string fecha_buscar;

	// Cargo la base de datos del fichero de texto plano.
	BaseDeDatos bbdd("agenda2.txt");
	vector <Contacto> contactos=bbdd.cargarContactosBaseDatos();
	
	// Cargo la agenda con la que voy a trabajar en el programa.
	Agenda agenda_medica;
	agenda_medica.setContactos(contactos);

	do {
		// Introduzo la operacion con la función introducirValor().
		//system("clear");
		opc=introducirValor();

		switch(opc) {
			case 0:
				// Guardar y apagar el sistema.
				cout << "Apagando el sistema..." << endl;
				cout << "Realizando copia de seguridad..." << endl;
				bbdd.realizarCopiaDeSeguridad(agenda_medica.getContactos());
				cout << "Copia de seguridad realizada con exito..." << endl;
				cout << "Sistema apagado..." << endl << endl;
			break;

			case 1:
				// Mostrar todos los pacientes.
				agenda_medica.listarPacientes();

				// Salida al menú.
				cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
				getchar();
				getchar();
			break;

	
			case 2:
				// Introducir nuevo paciente.
				aux.pedirDatosContacto();
				if (agenda_medica.insertar(aux)==true) {
					cout << "Paciente insertado correctamente en el sisema..." << endl;
				} else {
					cout << "ERROR. El paciente no se ha insertado en el sistema..." << endl;
				}
					
				// Salida al menú.
				cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
				getchar();
				getchar();
			break;

		case 3:
			// Añadir una nueva cita.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			aux.setNombre(nombre);
			aux.setApellido1(apellido1);
			aux.setApellido2(apellido2);

			if (agenda_medica.insertarCitaContacto(aux)) {
				cout << "Cita insertada correctamente." << endl;
			} else {
				cout << "ERROR. La cita no ha sido modificada correctamente..." << endl;
			}
			
			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;


		case 4:
			// Modificar los datos de un paciente.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			aux.setNombre(nombre);
			aux.setApellido1(apellido1);
			aux.setApellido2(apellido2);

			if (agenda_medica.modificarDatosContacto(aux)) {
				cout << "El paciente se ha modificado correctamente..." << endl;
			} else {
				cout << "ERROR. El paciente no ha sido modificado correctamente..." << endl;
			}
			
			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		
		case 5:
			// Borrar un paciente introducido por el usuario.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			aux.setNombre(nombre);
			aux.setApellido1(apellido1);
			aux.setApellido2(apellido2);

			if (agenda_medica.borrarContacto(aux)) {
				cout << "El paciente ha sido eliminado correctamente..." << endl;
			} else {
				cout << "ERROR. El paciente no ha sido eliminado correctamente..." << endl;
			}
			
			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		case 6:
			// Buscar citas de hoy.
			cout << "Introduce la fecha con formato dd/mm/aaaa: " ;			
			cin >> fecha_buscar;
			agenda_medica.imprimirCitasHoy(fecha_buscar);

			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		case 7:
			// Buscar datos de un paciente.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			aux=agenda_medica.buscar(nombre,apellido1,apellido2,encontrado);

			if (encontrado) {
				aux.imprimirContacto();
			} else {
				cout << "ERROR. No se ha encontrado al paciente dentro del sistema..."<<endl;
			}
			
			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		case 8:
			// Introducir tratamiento a un paciente.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			aux.setNombre(nombre);
			aux.setApellido1(apellido1);
			aux.setApellido2(apellido2);

			if (agenda_medica.insertarTratamientoContacto(aux))
				cout << "Tratamiento insertado correctamente." << endl;
			else
				cout << "ERROR. El tratamineto no se ha insertado correctamente..." << endl;

			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		case 9:
			// Buscar datos de un paciente.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			agenda_medica.imprimirCitasPaciente(nombre, apellido1, apellido2);

			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		case 10:
			// Modificar una cita.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			agenda_medica.modificarCita(nombre, apellido1, apellido2);

			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		case 11:
			// Borrar una cita.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			agenda_medica.borrarCita(nombre, apellido1, apellido2);

			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		case 12:
			// Borrar una tratamiento.
			cout << "Nombre: ";
			cin >> nombre;
			cout << "Primer apellido: ";
			cin >> apellido1;
			cout << "Segundo apellido: ";
			cin >> apellido2;

			agenda_medica.borrarTratamiento(nombre, apellido1, apellido2);

			// Salida al menú.
			cout << endl << endl << "Pulse enter para volver al menú..." << endl << endl;
			getchar();
			getchar();
		break;

		default:
			cout<<"Opción incorrecta! Intentelo de nuevo\n";
			break;
		}
	}while(opc!=0);

	return 0;
} 
