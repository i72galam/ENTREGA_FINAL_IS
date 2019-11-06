### Modificar cita
**Descripcion:** En este caso lo que permite el sistema es que se pueda cambiar algun dato de la cita ya sea fecha o motivo de la cita

**Actores principales**: Secretario
**Actores secundarios**: Administrador

**Precondiciones**: 

* Solo el secretario puede cambiar algun dato de la cita
* Se puede modificiar la cita en caso de que hubiera algun error en algun dato ella

**Flujo principal**:
1. El secretatio puede modificar la fecha de la cita
1. El secretatio puede modificar las caracteristicas de esa cita
1. El administrador debe ver la cita actualizada cuando vuelva a ver a su paciente
1. El secretario debe actualizar el motivo de cada cita 


**Postcondiciones**: 

* La cita tiene que quedar con todas sus caracteristicas rellenas
* No se podra guardar una cita incompleta

**Flujos alternativos**:

* Ninguno
