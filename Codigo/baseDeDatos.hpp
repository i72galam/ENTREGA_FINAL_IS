

#ifndef BASEDEDATOS_HPP
#define BASEDEDATOS_HPP

#include <sstream>
#include "agenda.cpp"
#include <fstream>
#include <cstring>
#include <cstdlib>


class BaseDeDatos:public Agenda
{
private:
	string _nombre;

public:
	BaseDeDatos(string n)
	{
		_nombre=n;
	}

	vector <Contacto> cargarContactosBaseDatos() {
		vector <Contacto> contactos;
		vector <Cita> citas;
		vector <Tratamiento> tratamientos;
		vector <Medicamento> medicamentos;
		ifstream fich(_nombre.c_str());
		string nombre, apell1, apell2, fn;
		int dni,telefono,numeroCitas, numeroTratamientos, numeroMedicamentos;
		Contacto aux;
		Cita aux2;
		

		int x=0;
		int y = 0;

		string linealeida;

		while (!fich.eof())
		{
			
			getline(fich,linealeida,'\n');
			aux.setNombre(linealeida);

			getline(fich,linealeida,'\n');
			aux.setApellido1(linealeida);

			getline(fich,linealeida,'\n');
			aux.setApellido2(linealeida);

			getline(fich,linealeida,'\n');
			aux.setDNI(linealeida);

			getline(fich,linealeida,'\n');
			aux.setFechaNac(linealeida);

			getline(fich,linealeida,'\n');
			aux.setTelefono(atoi(linealeida.c_str()));

			//CITAS
			getline(fich,linealeida,'\n');
			aux.setNumCitas(atoi(linealeida.c_str()));

			citas.clear();

			if (aux.getNumCitas() > 0)
			{
				// Realizo la carga de las citas.
				for (int i=0;i<aux.getNumCitas();i++)
				{
					getline(fich,aux2.fecha,'\n');
					getline(fich,aux2.hora,'\n');
					getline(fich,aux2.motivo,'\n');

					citas.push_back(aux2);
				}
			}
			
			//Guarda el vector de citas en el vector de aux(Contacto)
			aux.setCitas(citas);
			

			//TRATAMIENTOS
			getline(fich,linealeida,'\n');
			aux.setNumTratamientos(atoi(linealeida.c_str()));
			int x = 0;
			//cout << "Numero de tratamiento:" << aux.getNumTratamientos() << endl;

			if (aux.getNumTratamientos() > 0)
			{
				//Realizo la carga de los tratamientos.
				for (int i=0;i<aux.getNumTratamientos();i++)
				{
					Tratamiento aux3;
					
					getline(fich,aux3.fechaInicio,'\n');
					getline(fich,aux3.fechaFinal,'\n');
					getline(fich,aux3.num_Medicamentos,'\n');

					istringstream(aux3.num_Medicamentos.c_str()) >> x;
					
					for (int j = 0; j < x ; j++)
					{
						//Relleno (aux4) vector de medicamentos de aux3.
						Medicamento aux4;

						getline(fich,aux4.nombre,'\n');
						getline(fich,aux4.dosis,'\n');
						//medicamentos.push_back(aux4);
						aux3.vector_medicamentos.push_back(aux4);
					}

					tratamientos.push_back(aux3);
				}
			}
			
			aux.setTratamientos(tratamientos);
			tratamientos.clear();
			
			contactos.push_back(aux);
		}

		fich.close();
		//contactos.pop_back();
		return contactos;
	}

// Funcion que guarda la agenda virtual en un fichero de texto plano.
void realizarCopiaDeSeguridad(const vector <Contacto> contactos) {
	Contacto aux;
	int it =0;
	vector <Cita> citas;
	vector <Tratamiento> tratamientos;
	ofstream fich("aux.txt");
	if (fich) {
		for (int i=0; i<contactos.size();i++) {
			aux=contactos[i];

			fich << aux.getNombre()<< endl;
			fich << aux.getApellido1() << endl;
			fich << aux.getApellido2() << endl;
			fich << aux.getDNI() << endl;
			fich << aux.getFechaNac() << endl;
			fich << aux.getTelefono() << endl;
			fich << aux.getNumCitas() << endl;

			citas=aux.getCitas();
			tratamientos = aux.getTratamientos();

			//cout << "Numero de citas: " << aux.getNumCitas();
			//cout << "Numero de tratamientos: " << aux.getNumTratamientos();

			if (aux.getNumCitas() > 0)
			{
				for (int j=0; j< aux.getNumCitas();j++) {
					fich << citas[j].fecha << endl;
					fich << citas[j].hora << endl;
					fich << citas[j].motivo << endl;
				}
			}
			
			if (aux.getNumTratamientos() == 0)
			{
				fich << aux.getNumTratamientos();
			} else if (aux.getNumTratamientos() > 0)
			{
				// Grabo en el fichero los tratamientos correspondientes.
				fich << aux.getNumTratamientos() << endl;

				//TRATAMIENTOS
				for (int z = 0; z < aux.getNumTratamientos(); z++) {
					if (z == aux.getNumTratamientos() - 1)
					{
						// El tratamiento es el ultimo.
						fich << tratamientos[z].fechaInicio << endl;
						fich << tratamientos[z].fechaFinal << endl;
						fich << tratamientos[z].num_Medicamentos << endl;
							
						istringstream(tratamientos[z].num_Medicamentos) >> it;
						for (int x = 0; x < it ; x++) {
							fich << tratamientos[z].vector_medicamentos[x].nombre << endl;
							fich << tratamientos[z].vector_medicamentos[x].dosis;						
						}
					} else {
						// El tratamiento no es el ultimo.
						fich << tratamientos[z].fechaInicio << endl;
						fich << tratamientos[z].fechaFinal << endl;
						fich << tratamientos[z].num_Medicamentos << endl;
							
						istringstream(tratamientos[z].num_Medicamentos) >> it;
						for (int x = 0; x < it ; x++) {
							fich << tratamientos[z].vector_medicamentos[x].nombre << endl;
							fich << tratamientos[z].vector_medicamentos[x].dosis << endl;						
						}
					}
				}
			}
			
			
			tratamientos.clear();
			citas.clear();

			if(i != contactos.size()-1){
				fich << endl;
			}
		}

		fich.close();
		remove(_nombre.c_str());
		rename("aux.txt",_nombre.c_str());

	}
	else {
		cout<<"ERROR. No se pudo realizar la copia de seguridad..."<<endl;
	}
}
};

#endif