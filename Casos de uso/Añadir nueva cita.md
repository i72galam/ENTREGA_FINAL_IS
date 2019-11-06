## Añadir nueva cita

**Descripcion:** Se debe introducir el nombre del paciente, un numero de telefono, un correo electronico y la fecha de la citación.

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* El paciente debe estar registrado en el programa
* El correo electronico debe tener el formato correcto
* No puedo existir una cita a la misma fecha y hora

**Flujo principal**:
1. El secretario desea introducir una nueva cita
1. El secretario abre el cuadro de diálogo de búsqueda en el menú principal
1. El secretario introduce el nombre
1. El secretario introduce el numero de telefono
1. El secretatio introduce el correo electronico
1. El secretatio introduce la fecha y la hora.


**Postcondiciones**: 

* Los datos de los pacientes se quedan guardados en el sistema
* Estos datos estan a disposicion del administrador


**Flujos alternativos**:

* Si el paciente no esta registrado, se lanzará un mensaje de alerta. 

