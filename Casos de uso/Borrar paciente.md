## Borrar paciente

**Descripcion:** Borra todos los datos almacenados en la base de datos

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* La base de datos debe tener almacenada información de al menos un paciente.
* El usuario debe ser administrador

**Flujo principal**:
1.	Los datos del nuevo paciente introducido quedan guardados en el sistema
1.	Existe un cuadro de diálogo de búsqueda en el menú principal para buscar al paciente
1.	Cualquier dato del paciente se puede borrar
1.	En el historial quedan guardados todos y cada uno de los datos de los pacientes


**Postcondiciones**: 

* El sistema borra todos los datos del sistema

**Flujos alternativos**:

* Si no se encuentra ningún paciente en la base de datos, se le informará al usuario y no se realizará ninguna acción.
* Si el usuario no es administrador, no se llevara acabo el formateo de la base de datos


