## Formatear BD

**Descripcion:** Borra todos los datos almacenados en la base de datos

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* La base de datos debe tener almacenada información de al menos un paciente.
* El usuario debe ser administrador

**Flujo principal**:
1. El caso empieza cuando el usuario elige la opción de reset de la base de datos.
1. Se realiza una pregunta al usuario para asegurarse de que el usuario desea borrar todos los datos.


**Postcondiciones**: 

* El sistema borra todos los datos del sistema

**Flujos alternativos**:

* Si no se encuentra ningún paciente en la base de datos, se le informará al usuario y no se realizará ninguna acción.
* Si el usuario no es administrador, no se llevara acabo el formateo de la base de datos


