## Clase: **Historial**
---
#### Descripción de la clase:
Clase que contiene toda la información necesaria relativa al tratamiento del historial médico
#### Datos de la clase
- **Lista de patologias** (Tipo: LIST, Tipo: STRING)
- **Lista de citas anteriores** (Tipo: LIST, Tipo: STRING)
- **Lista de eventos anteriores** (Tipo LIST, Tipo: STRING)
##### Métodos de la clase
- **Constructor** (Inicializa)
  - **init_Historial:** Constructor de la clase. Permite inicializar un conjunto de valores a la hora de crear un nuevo item *Historial médico*

- **GET** (Obtención de datos)
  - **get_Pato:** Método que obtiene las patologías de un paciente
  - **get_Citas:** Método que obtiene las anteriores citas de un paciente
  - **get_Eventos:** Método que obtiene los anteriores eventos de un paciente en la clinica

- **SET** (Modificación de datos)
  - **set_Pato:** Método que modifica las patologías de un paciente
  - **set_Citas:** Método que modifica las anteriores citas de un paciente
  - **set_Eventos:** Método que modifica los anteriores eventos de un paciente en la clinicao

- **OTROS** (Otros métodos relacionados con la clase)
