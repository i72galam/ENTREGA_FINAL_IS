## Extracción de requisitos

### Partes Interesadas
 - Secretario
 - Desarrolladores
 - Médico

### Datos que gestiona el sistema
 - **Datos relativos a los pacientes**
    - Edad
    - DNI
    - Dirección 
    - Localidad
    - Seguro médico
    - ID de la seguridad social
    - Código postal

 - **Datos relativos al tratamiento**
    - Tratamientos compatibles y contraindicaciones
    - Relación con patologias anteriores
    - Alergias

 - **Datos relativos a la cita**
    - Correo electronico
    - Numero de telefono
    - Fecha

 - **Datos relativos al historial médico**
    - Dia y evento
    - Tratamiento
    - Receta
    - Fecha de inicio y fin del tratamiento
    - Citas anteriores
    - Dosis del medicamento

### Requisitos funcionales (ordenados por prioridad)

 - Dar de alta a un paciente
 - Añadir una nueva fecha para una cita
 - Añadir nuevo o nuevos tratamientos
 - Busqueda de un paciente
 - Busqueda de una cita en concreto
 - Modificación de datos de los pacientes 
 - Modificacion de tratamientos
 - Modificación de citas
 - Lista completa de pacientes
 - Dar de alta a un paciente
 - Eliminar pacientes o datos de los pacientes
 - Eliminar citas por motivo de cancelacion
 - Eliminar tratamientos que ya no sean efectivos o necesarios


### Requisitos no funcionales
 - Sistema operativo linux
 - Interfaz CLI
 - Lenguaje de implementación C/C++

