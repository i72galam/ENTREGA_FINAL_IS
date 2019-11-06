## Añadir nuevo paciente

**Descripcion:** Se introduce el nombre del paciente, su edad, su DNI, su direccion, su seguro medico, su ID de seguridad social y estos datos se quedan guardados en el sistema

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* El DNI tiene que ser legible sino dara error
* La ID de la seguridad social tiene que tener 12 digitos

**Flujo principal**:
1. El nombre introducido queda guardado en la base de datos
1. La edad del paciente introducida queda guardada en la base de datos
1. El DNI del paciente introducido queda guardado en la base de datos
1. La direccion del paciente introducida queda guardada en la base de datos
1. El seguro medico del paciente introducido queda guardado en la base de datos
1. El nombre introducido queda guardado en la base de datos
1. La ID de la seguridad social introducida queda guardada en la base de datos



**Postcondiciones**: 

* Maximo 200 pacientes
* Los datos de los pacientes se quedan guardados en el sistema
* Estos datos estan a disposicion del administrador


**Flujos alternativos**:

* Ninguno
