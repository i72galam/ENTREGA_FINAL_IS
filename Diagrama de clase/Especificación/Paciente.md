## Clase: Paciente
---
#### Descripción de la clase:
 Clase que contiene toda la información necesaria relativa a un paciente.
#### Datos
- **Edad** (Tipo:NUM)
- **DNI** (Tipo:STRING)
- **Dirección** (Tipo:STRING)
- **Localidad** (Tipo:String)
- **Seguro médico** (Tipo:STRING)
- **ID de la seguridad social** (Tipo:NUM)
- **Código postal** (Tipo:NUM)
- ***Historial*** (Tipo:HISTORIAL, heredado)
- ***Cita*** (Tipo:CITA, heredado)
- ***Tratamiento*** (Tipo:Tratamiento, heredado)
- **Telefono** (Tipo:NUM)
#### Métodos de la clase
- **CONSTRUCTOR** (Inicializa)
  - **init_Paciente:** Constructor de la clase. Permite inicializar un conjunto de valores a la hora de crear un nuevo item *Paciente*

- **GET** (Obtención de datos)
  - **get_Edad:** Método que obtiene el valor edad
  - **get_DNI:** Método que obtiene el DNI
  - **get_Dirección:** Método que obtiene la dirección
  - **get_Localidad:** Método que obtiene la localidad
  - **get_Seguro:** Método que obtiene el seguro médido
  - **get_ID:** Método que obtiene el ID del seguro
  - **get_Postal:** Método que obtiene el código postal
  - **get_Historial:** Método que obtiene el historial médico
  - **get_Cita:** Método que obtiene la proxima cita del paciente
  - **get_Tratamiento:** Método que obtiene el tratamiento actual del paciente 
  - **get_Tlf:** Método que obtiene el telefono del paciente

- **SET** (Modificación de datos)
  - **set_Edad:** Método que modifica el valor edad
  - **set_DNI:** Método que modifica el DNI
  - **set_Dirección:** Método que modifica la dirección
  - **set_Localidad:** Método que modifica la localidad
  - **set_Seguro:** Método que modifica el seguro médido
  - **set_ID:** Método que modifica el ID del seguro
  - **set_Postal:** Método que modifica el código postal
  - **set_Historial:** Método que modifica el historial médico
  - **set_Cita:** Método que modifica la proxima cita del paciente 
  - **set_Tratamiento:** Método que modifica el actual tratamiento del paciente
  - **set_Tlf:** Método que modifica el actual tratamiento del paciente

- **OTROS** (Otros métodos relacionados con la clase)
















