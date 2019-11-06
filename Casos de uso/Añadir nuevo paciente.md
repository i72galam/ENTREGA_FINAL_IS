## Añadir nuevo paciente

**Descripcion:** Se introduce el nombre del paciente, su edad, su DNI, su direccion, su seguro medico, su ID de seguridad social y estos datos se quedan guardados en el sistema

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* El DNI tiene que ser legible sino dara error
* La ID de la seguridad social tiene que tener 12 digitos

**Flujo principal**:
1. El secretatio introduce el nombre del paciente
1. El secretatio introduce la edad del paciente
1. El secretatio introduce el DNI del paciente
1. El secretatio introduce la direccion del paciente
1. El secretatio introduce el seguro medico del paciente
1. El secretatio introduce el ID de la seguridad social del paciente


**Postcondiciones**: 

* Maximo 200 pacientes
* Los datos de los pacientes se quedan guardados en el sistema
* Estos datos estan a disposicion del administrador


**Flujos alternativos**:

* Ninguno
