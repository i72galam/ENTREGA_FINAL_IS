## Borrar tratamiento

**Descripcion:** Una vez se termina un tratamiento este no se borra, se archiva como historial médico.

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* El tratamiento debe haber finalizado para poder ser archivado

**Flujo principal**:
1. El secretario desea introducir un nuevo tratamiento
1. El secretario abre el cuadro de diálogo de búsqueda en el menú principal
1. El secretario borra el tratamiento 
1. El secretario confirma que desea que el tratamiento pase al historial


**Postcondiciones**: 

* El tratamiento se debe encontrar en el historial cuando haya terminado el proceso

**Flujos alternativos**:

* Si el paciente no esta registrado, se lanzará un mensaje de alerta. 
