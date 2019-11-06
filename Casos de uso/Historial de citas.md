### Historial de citas

**Descripcion**: En el historial de citas se encontrara el dia y la causa de la cita, tratamiento, inicio, fin y dosis del mismo,
y por ultimo, las citas anterioes. Se podra tambien buscar a los pacientes por su nombre.

**Actores principales**: Secretario
**Actores secundarios**: Administrador y paciente

**Precondiciones**:

* Las citas sera la pagina principal del sistema
* Se pueden ir modificando los datos de las nuevas citas pero no de las anteriores

**Flujo principal**:
1. La lista de pacientes permanecera con un orden ya sea por orden alfabetico o por cita mas reciente
1. Existe una busqueda posible por nombre y apellidos de los pacientes
1. Todos los datos del paciente quedan guardados en el sistema para su posterior visita
1. La ultima cita que tuvo el paciente sera visible para el personal autorizado
1. El historial de citas no podra ser modificado

**Postcondiciones**:

* El administrador puede buscar al paciente
* El administrador puede observar toda la informacion necesaria sobre el paciente almacenada en el sistema
* Si hay algun error el secretario sera el encargado de modificar el error


**Flujos alternativos**:

* Si no hay ningun paciente con ese nombre dara error
