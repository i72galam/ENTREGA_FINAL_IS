

#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <iostream>
using namespace std;
#include <vector>
#include <cstring>
#include <sstream>
//ESTRUCTURA PARA LAS CITAS DE CADA PACIENTE
typedef struct cita
{
	string fecha;
	string hora;
	string motivo;
}Cita;

typedef struct medicamento {
	string nombre;
	string dosis;
}Medicamento;

typedef struct tratamiento {
	string fechaInicio;
	string fechaFinal;
	string num_Medicamentos;
	vector <Medicamento> vector_medicamentos;
}Tratamiento;

//CLASE CONTACTO
class Contacto
{
private:
	string _nombre;
	string _apellido1;
	string _apellido2;
	string _dni;
	string _fechaNac;
	int _telefono;
	int _numCitas;
	int _numTratamientos;
	vector <Cita> _citas;
	vector <Tratamiento> _tratamientos;

public:
	string getNombre()
	{
		return _nombre;
	}

	string getApellido1()
	{
		return _apellido1;
	}

	string getApellido2()
	{
		return _apellido2;
	}

	string getDNI()
	{
		return _dni;
	}

	string getFechaNac()
	{
		return _fechaNac;
	}

	int getTelefono()
	{
		return _telefono;
	}

	int getNumCitas()
	{
		return _numCitas;
	}

	int getNumTratamientos() {
		return _numTratamientos;
	}

	vector <Cita> getCitas()
	{
		return _citas;
	}

	vector <Tratamiento> getTratamientos() {
		return _tratamientos;
	}

	void setNombre(string nombre)
	{
		_nombre=nombre;
	}

	void setApellido1(string apellido1)
	{
		_apellido1=apellido1;
	}

	void setApellido2(string apellido2)
	{
		_apellido2=apellido2;
	}

	void setDNI(string dni)
	{
		_dni=dni;
	}

	void setFechaNac(string fn)
	{
		_fechaNac=fn;
	}

	void setTelefono(int telefono)
	{
		_telefono=telefono;
	}

	void setNumCitas(int num)
	{
		_numCitas=num;
	}

	void setNumTratamientos(int num) {
		_numTratamientos = num;
	}

	void setNumMedicamentos(string num){
		
	}

	void setCitas(vector <Cita> aux)
	{
		_citas=aux;
	}

	void setTratamientos(vector <Tratamiento> aux) {
		_tratamientos = aux;
	}

	//modificador del vector citas
	void insertarCita(const Cita &aux)
	{
		_citas.push_back(aux);
		_numCitas++;		
	}

	void insertarTratamiento(const Tratamiento &aux)
	{
		_tratamientos.push_back(aux);
		_numTratamientos++;		
	}

	Contacto &operator=(const Contacto &aux)
	{
		_nombre=aux._nombre;
		_apellido1=aux._apellido1;
		_apellido2=aux._apellido2;
		_dni=aux._dni;
		_telefono=aux._telefono;
		_numCitas=aux._numCitas;
		_numTratamientos = aux._numTratamientos;
		_fechaNac=aux._fechaNac;
		_citas=aux._citas;
		_tratamientos = aux._tratamientos;

		return *this;

	}

	void pedirDatosContacto()
	{
		Contacto aux;
		string nombre,ap1,ap2,fn;
		int tlf;
		string dni;
		

		//cout<<"Introducir los datos:"<<endl;
		//cout<<"----------------------------------------------"<<endl;
		cout<<"Introduce el nombre: ";
		cin>>nombre;
		cout<<"Introduce el primer apellido: ";
		cin>>ap1;
		cout<<"Introduce el segundo apellido: ";
		cin>>ap2;
		cout<<"Introduce el dni: ";
		cin>>dni;
		cout<<"Introduce la fecha de nacimiento (formato dd/mm/aaaa): ";
		cin>>fn;
		cout<<"Introduce el teléfono de contacto: ";
		cin>>tlf;

		(*this).setNombre(nombre);
		(*this).setApellido1(ap1);
		(*this).setApellido2(ap2);
		(*this).setDNI(dni);
		(*this).setFechaNac(fn);
		(*this).setTelefono(tlf);
		(*this).setNumCitas(0);

		//contacto=aux;
	}

	void pedirCita(Cita &cita)
	{
		string f,h,m;
		//cout<<"----------------------------------------------"<<endl;
		cout << "Introduce la fecha de la cita con formato dd/mm/aaaa: " ;
		cin >> f;
		cout << "Introduce la hora de la cita con formato hh:mm: ";
		cin >> h;
		cout << "Introduce el motivo de la cita: ";
		cin >> m;

		cita.fecha=f;
		cita.hora=h;
		cita.motivo=m;

	}

	
	void pedirTratamiento(Tratamiento &tratamiento){
		string Inicio;
		string Final;
		string nombre;
		string dosis;
		//vector <Medicamento> vector_medicamentos;
		Medicamento aux;
		string num;
		int it = 0;

		cout << "Introduce la fecha de inicio del tratamiento: " ;
		cin >> Inicio;
		cout << "Introduce la fecha de finalización del tratamiento: ";
		cin >> Final;

		cout << "Introduce el numero de medicamentos del tratamiento:";
		cin >> num;

		tratamiento.fechaInicio = Inicio;
		tratamiento.fechaFinal = Final;
		tratamiento.num_Medicamentos = num;
		
		istringstream(tratamiento.num_Medicamentos) >> it;

		for (int i = 0; i < it; i++)
		{
			cout << "Introduce el nombre del medicamento: " ;
			cin >> nombre;
			aux.nombre = nombre;
			cout << "Introduce la dosis del medicamento: ";
			cin >> dosis;
			aux.dosis = dosis;

			tratamiento.vector_medicamentos.push_back(aux);
		}
	}

	void imprimirContacto()
	{
			//cout<<"----------------------------------------------"<<endl;
			cout<<"Datos del paciente "<<(*this).getNombre()<<" "<<(*this).getApellido1()<<" "<<(*this).getApellido2()<<":\n";
			cout<<"DNI: "<<(*this).getDNI()<<"\n";
			cout<<"Fecha de naciemiento: "<<(*this).getFechaNac()<<"\n";
			cout<<"Teléfono de contacto: "<<(*this).getTelefono()<<"\n\n";
			//cout<<"----------------------------------------------" << endl;
			int x = 1;
			int y = 1;

			vector<Cita>::const_iterator it;
			vector <Tratamiento>::const_iterator it2;

			vector <Cita> citas=(*this).getCitas();
			vector <Tratamiento> tratamientos = (*this).getTratamientos();

			cout << "CITAS:" << endl << endl;
			for (it =citas.begin(); it != citas.end(); ++it)
			{
				cout << "---Fecha: "<<it->fecha<<"\n";
				cout << "---Hora: "<<it->hora<<"\n";
				cout << "---Motivo: "<<it->motivo<<"\n\n";
				cout << " ";
			}

			//cout<<"----------------------------------------------"<<endl;
			cout << "TRATAMIENTOS:" << endl << endl;
			for (it2 =tratamientos.begin(); it2 != tratamientos.end(); ++it2)
			{
				cout << "---N° Tratamiento: " << x << "\n" ;
				cout << "---Fecha de Inicio: " << it2->fechaInicio << "\n";
				cout << "---Fecha de Finalización: " << it2->fechaFinal << "\n";
			
				//Bucle para los medicamentos.
				cout << "---MEDICAMENTOS" << endl;
				for (int i = 0; i < it2->vector_medicamentos.size(); i++)
				{
					cout<<"------ID: " << y << "\n" ;
					cout<<"------Nombre: "<<it2->vector_medicamentos[i].nombre<<"\n";
					cout<<"------Dosis: "<<it2->vector_medicamentos[i].dosis<<"\n";
					cout <<" ";	
					y++;				
				}

				cout << "\n";
				x++;
				y = 1;
			}
	}
};


#endif