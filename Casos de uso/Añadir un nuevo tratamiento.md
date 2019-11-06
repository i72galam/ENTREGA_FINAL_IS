## Añadir nuevo tratamiento

**Descripcion:** Se debe introducir la dosis del medicamento, el incio y fin de este. Tambien se deben indicar tratamientos compatibles y contraindicaciones. También deben estar incluidas patologías anteriores y alergías del paciente.

**Actores principales**: Secretario
**Actores secundarios**: Usuario

**Precondiciones**: 

* El paciente debe estar registrado anteriormente para asignarle un nuevo tratamiento*

**Flujo principal**:
1. El nuevo tratamiento introducido queda guardado en los datos del tratamiento
1. Existe un cuadro de diálogo de búsqueda en el menú principal para mayor rapidez en encontrar un pacient
1. La dosis del medicamento introducida queda guardada en los datos del tratamiento
1. El inicio y fin del tratamiento introducido quedan guardados en los datos del tratamiento
1. Los tratamientos compatibles y contraindicaciones introducidos quedan guardadas en los datos del tratamiento
1. Las patologías anteriores y posibles alergías del paciente introducidas quedan guardadas en los datos del tratamiento


**Postcondiciones**: 

**Flujos alternativos**:

* Si el paciente no esta registrado, se lanzará un mensaje de alerta. 
