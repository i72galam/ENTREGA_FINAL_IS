

#ifndef AGENDA_HPP
#define AGENDA_HPP

#include "contacto.cpp"

using namespace std;

class Agenda:public Contacto
{
	
private:
	vector <Contacto> _contactos;
public:
	Agenda(){};
	
	void setContactos(vector<Contacto> vector)
	{
		_contactos=vector;
	}

	vector<Contacto> getContactos()const
	{
		return _contactos;
	}
	
	bool insertar(const Contacto &aux)
	{
		_contactos.push_back(aux);
		return true;
	}
	
	Contacto buscar(string nombre, string ap1, string ap2, bool &encon)
	{
		Contacto contacto;
		vector <Contacto> aux=(*this).getContactos();

		for(int i=0; i<aux.size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				encon=true;
				return aux[i];
			}			
		}
		encon=false;
		return contacto;
	}

	bool borrarContacto(Contacto contacto)
	{
		vector <Contacto> aux = (*this).getContactos();
		string nombre=contacto.getNombre();
		string ap1=contacto.getApellido1();
		string ap2=contacto.getApellido2();
		int j;

		for(int i=0; i < (*this).getContactos().size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				for(j=i; j < (*this).getContactos().size()-1; j++)
				{
					aux[j]=aux[j+1];
				}
				aux[j]=aux[i];
				aux.pop_back();
				(*this).setContactos(aux);
				return true;
			}
		}
		return false;
	}

	bool insertarCitaContacto(Contacto contacto)
	{
		vector <Contacto> aux = (*this).getContactos();
		string nombre=contacto.getNombre();
		string ap1=contacto.getApellido1();
		string ap2=contacto.getApellido2();
		Cita cita;

		for(int i=0; i < (*this).getContactos().size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				cout<<endl;
				//cout << "Intro" << endl;
				aux[i].pedirCita(cita);
				aux[i].insertarCita(cita);
				(*this).setContactos(aux);
				return true;
			}
		}
		return false;
	}

	
	bool insertarTratamientoContacto(Contacto contacto) {
		vector <Contacto> aux = (*this).getContactos();
		string nombre=contacto.getNombre();
		string ap1=contacto.getApellido1();
		string ap2=contacto.getApellido2();
		Tratamiento tratamiento;

		for(int i=0; i < (*this).getContactos().size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				cout<<endl;
				//cout << "INTRODUZCA EL NUEVO TRATAMIENTO" << endl;
				aux[i].pedirTratamiento(tratamiento);
				aux[i].insertarTratamiento(tratamiento);
				(*this).setContactos(aux);
				return true;
			}
		}
		return false;
	}

	bool modificarDatosContacto(Contacto contacto)
	{
		vector <Contacto> aux = (*this).getContactos();
		string nombre=contacto.getNombre();
		string ap1=contacto.getApellido1();
		string ap2=contacto.getApellido2();
		int j;

		for(int i=0; i < (*this).getContactos().size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				cout<<endl;
				cout << "DATOS ACTUALES:"<<endl;
				aux[i].imprimirContacto();
				cout<<endl;
				cout<<"INTRODUZCA LOS NUEVOS DATOS"<<endl;
				aux[i].pedirDatosContacto();
				(*this).setContactos(aux);
				return true;
			}
		}
		return false;
	}

	void listarPacientes()
	{
		for (int i=0; i < (*this).getContactos().size(); i++)
		{
			(*this)._contactos[i].imprimirContacto();
		}
	}

	void imprimirCitasHoy(string fecha)
	{
		Contacto contacto;
		vector <Contacto> aux=(*this).getContactos();
		vector <Cita> vector_auxiliar_citas;

		for(int i=0; i<aux.size(); i++)
		{
			// Guardo el vector de citas en uno auxiliar.
			vector_auxiliar_citas = aux[i].getCitas();
						
			//Recorro el vector auxiliar para comparar
			for (int j = 0; j < aux[i].getNumCitas(); j++)
			{
				// Comparo la fecha indicada con la fecha del vector de contactos.
				if (fecha == vector_auxiliar_citas[j].fecha)
				{
					cout << " ";
					cout<<"Datos del paciente "<<aux[i].getNombre()<<" "<<aux[i].getApellido1()<<" "<<aux[i].getApellido2()<<":\n";
					cout << "---Fecha: "<<vector_auxiliar_citas[j].fecha<<"\n";
					cout << "---Hora: "<<vector_auxiliar_citas[j].hora<<"\n";
					cout << "---Motivo: "<<vector_auxiliar_citas[j].motivo<<"\n\n";
					cout << " ";					
				}
				
			}

			//Limpio el vector auxiliar.
			vector_auxiliar_citas.clear();	
		}
	}

	void imprimirCitasPaciente(string nombre, string ap1, string ap2)
	{
		Contacto contacto;
		vector <Contacto> aux=(*this).getContactos();
		vector <Cita> vector_auxiliar_citas;
		int flag = 0;
		for(int i=0; i<aux.size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				flag = 1;
				// Guardo el vector de citas en uno auxiliar.
				vector_auxiliar_citas = aux[i].getCitas();

				if (aux[i].getNumCitas() == 0)
				{
					flag = 2;
				}
							
				//Recorro el vector auxiliar para comparar
				for (int j = 0; j < aux[i].getNumCitas(); j++)
				{
					cout << " ";
					cout << "---Fecha: "<<vector_auxiliar_citas[j].fecha<<"\n";
					cout << "---Hora: "<<vector_auxiliar_citas[j].hora<<"\n";
					cout << "---Motivo: "<<vector_auxiliar_citas[j].motivo<<"\n\n";
					cout << " ";					
				}

				if (flag == 2)
				{
					cout << "El paciente no tiene citas disponibles." << "\n";
				}
				

				//Limpio el vector auxiliar.
				vector_auxiliar_citas.clear();									
			}

			if (flag == 0)
			{
				cout << "El paciente no se encuentra disponible." << "\n";
			}						
		}
	}

	void modificarCita(string nombre, string ap1, string ap2)
	{
		Contacto contacto;
		vector <Contacto> aux=(*this).getContactos();
		vector <Cita> vector_auxiliar_citas;
		int flag = 0;
		string fecha, fecha_aux, hora_aux, motivo_aux;
		int opt;

		cout << "Introduce la fecha de la cita que deseas modificar:";
		cin >> fecha;

		for(int i=0; i<aux.size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				flag = 1;
				// Guardo el vector de citas en uno auxiliar.
				vector_auxiliar_citas.clear();
				vector_auxiliar_citas = aux[i].getCitas();

				if (aux[i].getNumCitas() == 0)
				{
					flag = 2;
				}
							
				//Recorro el vector auxiliar para comparar
				for (int j = 0; j < aux[i].getNumCitas(); j++)
				{
					if (fecha == vector_auxiliar_citas[j].fecha)
					{
						//Switch Case
						cout << "Introduce 1 para modificar la fecha." << endl;
						cout << "Introduce 2 para modificar la hora." << endl;
						cout << "Introduce 3 para modificar el motivo." << endl;
						cout << "Introduce tu opción:";
						cin >> opt;

						switch (opt)
						{
						case 1:
							//Modificar la fecha.
							cout << "Introduce la nueva fecha con formato dd/mm/aa: ";
							cin >> fecha_aux;
							aux[i].modificarFecha(j,fecha_aux);
						break;

						case 2:
							//Modificar la fecha.
							cout << "Introduce la nueva hora con formato hh:mm: ";
							cin >> hora_aux;
							aux[i].modificarHora(j,hora_aux);
						break;

						case 3:
							//Modificar el motivo.
							cout << "Introduce el nuevo motivo: ";
							cin >> motivo_aux;
							aux[i].modificarMotivo(j,motivo_aux);
						break;
						
						default:
							break;
						}
					}
					
				}

				if (flag == 2)
				{
					cout << "El paciente no tiene citas disponibles." << "\n";
				}
				

				//Limpio el vector auxiliar.
				//aux[i].setCitas(vector_auxiliar_citas);
				(*this).setContactos(aux);									
			}

			if (flag == 0)
			{
				cout << "El paciente no se encuentra disponible." << "\n";
			}						
		}		
	}

	void borrarCita(string nombre, string ap1, string ap2)
	{
		Contacto contacto;
		vector <Contacto> aux=(*this).getContactos();
		vector <Cita> vector_auxiliar_citas;
		int flag = 0;
		string fecha, fecha_aux, hora_aux, motivo_aux;
		int opt;

		cout << "Introduce la fecha de la cita que deseas borrar:";
		cin >> fecha;

		for(int i=0; i<aux.size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				flag = 1;
				// Guardo el vector de citas en uno auxiliar.
				vector_auxiliar_citas.clear();
				vector_auxiliar_citas = aux[i].getCitas();

				if (aux[i].getNumCitas() == 0)
				{
					flag = 2;
				}
							
				//Recorro el vector auxiliar para comparar
				for (int j = 0; j < aux[i].getNumCitas(); j++)
				{
					if (fecha == vector_auxiliar_citas[j].fecha)
					{
						aux[i].removerFecha(j);
						cout << "Cita borrada de forma exitosa" << endl;
					}
					
				}

				if (flag == 2)
				{
					cout << "El paciente no tiene citas disponibles." << "\n";
				}
				

				//Limpio el vector auxiliar.
				//aux[i].setCitas(vector_auxiliar_citas);
				(*this).setContactos(aux);									
			}

			if (flag == 0)
			{
				cout << "El paciente no se encuentra disponible." << "\n";
			}						
		}		
	}

	void borrarTratamiento(string nombre, string ap1, string ap2)
	{
		Contacto contacto;
		vector <Contacto> aux=(*this).getContactos();
		vector <Cita> vector_auxiliar_citas;
		int flag = 0;
		string fecha, fecha_aux, hora_aux, motivo_aux;
		int opt;
		int id;
		string inicio, fin;

;
		cout << "Introduce la fecha de incio del del tratatamiento:";
		cin >> inicio;
		cout << "Introduce la fecha del finalización del tratamiento";
		cin >> fin;

		for(int i=0; i<aux.size(); i++)
		{
			if(aux[i].getNombre()==nombre and aux[i].getApellido1()==ap1 and aux[i].getApellido2()==ap2)
			{
				flag = 1;

				if (aux[i].getNumCitas() == 0)
				{
					flag = 2;
				}

				if (id > aux[i].getNumTratamientos())
				{
					cout << "No existe el tratamiento" << endl;
				}else
				{
					
					aux[i].borrarTratamientoEnCurso(inicio,fin);	
					(*this).setContactos(aux);	
					cout << "Tratamiento borrado de forma exitosa." << "\n"		;			
				}
							
				if (flag == 2)
				{
					cout << "El paciente no tiene citas disponibles." << "\n";
				}
				
				//Limpio el vector auxiliar.
				//aux[i].setCitas(vector_auxiliar_citas);
								
			}

			if (flag == 0)
			{
				cout << "El paciente no se encuentra disponible." << "\n";
			}						
		}		
	}

};


#endif
