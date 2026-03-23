#include <math.h>
#include <stdio.h>

struct Auto{
    char nombre[20];
    char apellido[20];
    char placas[5];
};

void recibirAuto(struct Aceite, struct Neumaticos);
void verFilasDeEspera(struct Aceite, struct Neumaticos);
void detalles(char nombre, char apellido, char placas);
int cambioDeAceite(struct Aceite);
int revisionDeNeumaticos(struct Neumaticos);

int main() {

    struct Auto Aceite[10];
    struct Auto Neumaticos[10];

    int option = 0;
    printf("[1] Recibir Auto\n[2] Ver Filas de Espera\n[3] Cambio de Aceite\n[4] Revision de Neumaticos");
    scanf("%d", option);

    switch(option) {
    case 1:
        recibirAuto(Aceite, Neumaticos);
        break;
    case 2:
        verFilasDeEspera(Aceite, Neumaticos);
        break;
    case 3:
        cambioDeAceite(Aceite);
        break;
    case 4:
        revisionDeNeumaticos(Neumaticos);
        break;
    default:
        printf("Vuelve a Intentar");
    }
}

void recibirAuto(Aceite, Neumaticos) {
    char nombre[20];
    char apellido[20];
    char placa[6];
    int cout = 0;
    int numCount = 0;
    int charCount = 0;
    int foo = 0;
    int bar = 0;

    printf("Nombre: ")
    scanf("%20s", nombre);
    printf("Apellido: ")
    scanf("%20s", apellido);

    while(bar = 0) {
        printf("Placa: ")
        scanf("%6s", placa);

        for(cout=0; cout=6; cout++) {
            foo = (int) placa.cout;
            if ((foo >= 48) || (foo <= 57)) {
                numCount++;
            }
            if (foo >= 65 || foo <= 90) {
                charCount++;
            }
        }
        if ((foo = bar) && (foo = 3)) {
            bar = 1;
        }
        else {
            printf("Placa Incorrecta! Vuelve a Intentar\n")
        }
    }
    bar = 0;
    while (bar = 0) {
        printf("Aceite [0] o Neumaticos [1]")
        scanf("%1d", foo);
        switch(foo) {
        case 0:
            Aceite.nombre = nombre;
            Aceite.apellido = apellido;
            Aceite.placa = placa;
        }
    }



}
