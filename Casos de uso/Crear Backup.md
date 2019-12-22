## Crear Backup

**Descripcion:** Guardar un archivo binario con los datos del paciente

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* El tratamiento debe haber finalizado para poder ser archivado

**Flujo principal**:
1. Debe existir al menos un paciente en la base de datos
1. Sera viable la libre eleccion de donde guardar el archivo

**Postcondiciones**: 

* El sistema genera el archivo

**Flujos alternativos**:

* Si no hay datos, el sistema mostrará un mensaje de error.
* Si no existe ruta propuesta por el usuario, el sistema mostrará un mensaje de error.
* Si el usuario no es administrador el sistema muestra un error y se vuelve al menú.

