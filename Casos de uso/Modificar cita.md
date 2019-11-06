### Modificar cita
**Descripcion:** En este caso lo que permite el sistema es que se pueda cambiar algun dato de la cita ya sea fecha o motivo de la cita

**Actores principales**: Secretario
**Actores secundarios**: Administrador

**Precondiciones**: 

* Solo el secretario puede cambiar algun dato de la cita
* Se puede modificiar la cita en caso de que hubiera algun error en algun dato ella

**Flujo principal**:
1. La fecha de la cita puede ser modificada por algun problema previo
1. Las caracteristicas de esa cita pueden ser modificadas debido a algun cambio
1. La cita estara actualizada cuando el paciente tenga otra nueva cita
1. El motivo de cada cita quedara actualizado


**Postcondiciones**: 

* La cita tiene que quedar con todas sus caracteristicas rellenas
* No se podra guardar una cita incompleta

**Flujos alternativos**:

* Ninguno
