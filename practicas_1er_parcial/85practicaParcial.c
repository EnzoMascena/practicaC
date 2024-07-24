/*una Clínica de la ciudad de La Plata , atienden 50 medicos diferentes , (de cada medico se conoce el legajo de 1 a 200)
specialidad, Importe de la consulta(para atencion sin obra social) .
(se cuenta además con una lista de 200 pacientes con info:
 nroPaciente (de 1 a 200), 
NomyAp,
 T_Social(en blanco si no tiene)

Cada medico atiende hasta 10 pacientes por día como máximo.

 Durante el día se toman turnos informando:
Informando numero de paciente y legajo del medico.
Generar una lista con todos los turnos que se pueden cumplir.

Siguiente información:

NROPaciente | NomyAp del paciente |telefono |obra_social | Legajo medico| Nombre del medico|Especialidad|Importe_C|
ImporteConsulta (El importe se calcula si el paciente no tiene obra social, caso contrario el importe es 0)

1 proceso termina cuando no hay más turnos para cargar, o se llega al límite máximo de turnos.
1-Ingresando una obra social, indicar el porcentaje de tumnos respecto del total de turnos con obra so
2-Porcentaje de tumos para la especialidad “Traumatología” respecto del total de turnos
3-Porcentaje de turnos con obra social por medico, respecto de los turnos del medico*/


/*

50 MEDICOS=c/u Legajo-specialidad-ImporteDelaConsulta



*/
#include <stdio.h>

// Definición de estructuras para pacientes y médicos
struct Paciente {
    int nroPaciente;
    char NomyAp[100];
    char T_Social[50];
};

struct Medico {
    int legajo;
    char especialidad[50];
    float Importe_C;
    char Nombre[100];
};

// Definición de estructura para los turnos
struct Turno {
    int nroPaciente;
    int legajoMedico;
    char NomyAp[100];
    char especialidad[50];
    float Importe_C;
};

int main() {
    // Declarar arreglos para pacientes, médicos y turnos
    struct Paciente pacientes[200];
    struct Medico medicos[50];
    struct Turno turnos[2000]; // Suponemos un máximo de 2000 turnos

    int totalTurnos = 0;
    int turnosConObraSocial = 0;
    int turnosTraumatologia = 0;

    // Iniciar la lógica de programación de turnos
    int opcion;
    do {
        printf("1. Ingresar turno\n");
        printf("2. Porcentaje de turnos con obra social\n");
        printf("3. Porcentaje de turnos en Traumatología\n");
        printf("4. Porcentaje de turnos con obra social por médico\n");
        printf("5. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // Ingresar un nuevo turno
                if (totalTurnos < 2000) {
                    int nroPaciente, legajoMedico;
                    printf("Ingrese el número de paciente y legajo del médico: ");
                    scanf("%d %d", &nroPaciente, &legajoMedico);

                    // Aquí debes validar que el paciente y el médico existen
                    // Calcular el importe de la consulta basado en la obra social del paciente
                    // Registrar el turno

                    // Actualizar estadísticas según corresponda
                    if (pacientes[nroPaciente - 1].T_Social[0] != '\0') {
                        turnosConObraSocial++;
                    }
                    if (strcmp(medicos[legajoMedico - 1].especialidad, "Traumatología") == 0) {
                        turnosTraumatologia++;
                    }

                    totalTurnos++;
                } else {
                    printf("No se pueden asignar más turnos.\n");
                }
                break;

            case 2:
                // Calcular el porcentaje de turnos con obra social
                if (totalTurnos > 0) {
                    float porcentajeObraSocial = (float)turnosConObraSocial / totalTurnos * 100;
                    printf("Porcentaje de turnos con obra social: %.2f%%\n", porcentajeObraSocial);
                } else {
                    printf("Aún no se han ingresado turnos.\n");
                }
                break;

            case 3:
                // Calcular el porcentaje de turnos en Traumatología
                if (totalTurnos > 0) {
                    float porcentajeTraumatologia = (float)turnosTraumatologia / totalTurnos * 100;
                    printf("Porcentaje de turnos en Traumatología: %.2f%%\n", porcentajeTraumatologia);
                } else {
                    printf("Aún no se han ingresado turnos.\n");
                }
                break;

            case 4:
                // Calcular el porcentaje de turnos con obra social por médico
                // Implementar la lógica aquí
                break;

            case 5:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción no válida. Por favor, ingrese una opción válida.\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}


    