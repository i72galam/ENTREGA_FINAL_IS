### Modificar tratamiento
**Descripcion:** En este caso lo que permite el sistema es que se pueda cambiar el tipo de tratamiento y la dosis del mis

**Actores principales**: Secretario
**Actores secundarios**: Administrador

**Precondiciones**: 

* Solo el secretario puede cambiar algun dato del tratamiento
* Se puede modificiar el tratamiento en caso de que hubiera algun error en algun dato ella

**Flujo principal**:
1. La fecha del nuevo tratamiento puede ser modificada por el personal autorizado
1. Las caracteristicas del tratamiento pueden ser modificadas por el personal autorizado
1. Los cambios que se han hecho en el tratamiento quedaran actualizados a medida que avance el paciente
1. Las nuevas dosis de los tratamientos estaran actualizadas a medida que el paciente avance


**Postcondiciones**: 

* Los tratamientos deben quedar actualizados con cada nueva cita
* El secretario no debe modificar el tratamiento de la cita sin previo aviso del administrador

**Flujos alternativos**:

* Ninguno
