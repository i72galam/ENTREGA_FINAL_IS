## Borrar tratamiento

**Descripcion:** Una vez se termina un tratamiento este no se borra, se archiva como historial médico.

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* El tratamiento debe haber finalizado para poder ser archivado

**Flujo principal**:
1. El nuevo tratamiento introducido queda guardado en el sistema
1. Existe un cuadro de diálogo de búsqueda en el menú principal para buscar el tratamiento
1. Cualquier tratamiento se puede cancelar
1. En el historial quedan guardados todos y cada uno de los tratamientos de los pacientes


**Postcondiciones**: 

* El tratamiento se debe encontrar en el historial cuando haya terminado el proceso

**Flujos alternativos**:

* Si el paciente no esta registrado, se lanzará un mensaje de alerta. 
