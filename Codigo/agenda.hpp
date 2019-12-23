

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

};


#endif
