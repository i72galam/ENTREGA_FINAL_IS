## Clase: **Tratamiento**
---
#### Descripción de la clase:
Clase que contiene toda la información necesaria relativa al tratamiento del paciente
#### Datos de la clase
- **Lista de medicamentos** (Tipo:LIST, CLASE:Medicamento)
- **Fecha de inicio del tratamiento** (Tipo: DATE)
- **Fecha de finalización de tratamiento** (Tipo DATE)
##### Métodos de la clase
- **Constructor** (Inicializa)
  - **init_Tratamiento:** Constructor de la clase. Permite inicializar un conjunto de valores a la hora de crear un nuevo item *Tratamiento*

- **GET** (Obtención de datos)
  - **get_Medicamentos:** Método que obtiene la lista de medicamentos
  - **get_Inicio:** Método que obtiene la fecha de inicio del tratamiento
  - **get_Fin:** Método que obtiene la fecha de finalización del tratamiento

- **SET** (Modificación de datos)
  - **set_Medicamentos:** Método que modifica la lista de medicamentos
  - **set_Inicio:** Método que modifica la fecha de inicio del tratamiento
  - **set_Fin:** Método que modifica la fecha de finalización del tratamiento

- **OTROS** (Otros métodos relacionados con la clase)
  - **añadir_Medicamento:** Método para añadir un nuevo medicamento
  - **borrar_Medicamento:** Método para borrar un medicamento
  - **buscar_medicamento:** Método para buscar un medicamento

