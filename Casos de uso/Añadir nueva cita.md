## Añadir nueva cita

**Descripcion:** Se debe introducir el nombre del paciente, un numero de telefono, un correo electronico y la fecha de la citación.

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* El paciente debe estar registrado en el programa
* El correo electronico debe tener el formato correcto
* No puedo existir una cita a la misma fecha y hora

**Flujo principal**:
1. La mision es introducir una nueva cita
1. Habrá un cuadro de diálogo de búsqueda en el menú principal
1. El nombre introducido queda guardado en la base de datos
1. El nombre introducido queda guardado en la base de datos
1. El numero de telefono introducido queda guardado en la base de datos
1. El correo electronico introducido queda guardado en la base de datos
1. La fecha y hora aparece al guardar la nueva cita


**Postcondiciones**: 

* Los datos de los pacientes se quedan guardados en el sistema
* Estos datos estan a disposicion del administrador


**Flujos alternativos**:

* Si el paciente no esta registrado, se lanzará un mensaje de alerta. 

