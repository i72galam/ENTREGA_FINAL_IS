### Modificar tratamiento
**Descripcion:** En este caso lo que permite el sistema es que se pueda cambiar el tipo de tratamiento y la dosis del mis

**Actores principales**: Secretario
**Actores secundarios**: Administrador

**Precondiciones**: 

* Solo el secretario puede cambiar algun dato del tratamiento
* Se puede modificiar el tratamiento en caso de que hubiera algun error en algun dato ella

**Flujo principal**:
1. El secretatio puede modificar la fecha del nuevo tratamiento
1. El secretatio puede modificar las caracteristicas del tratamiento
1. El administrador debe ordenar al secretario los cambios que ha hecho en el tratamiento
1. El secretario debe actualizar las nuevas dosis de los tratamientos


**Postcondiciones**: 

* Los tratamientos deben quedar actualizados con cada nueva cita
* El secretario no debe modificar el tratamiento de la cita sin previo aviso del administrador

**Flujos alternativos**:

* Ninguno
