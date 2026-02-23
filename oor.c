#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void contarEspacios();
void separaFrase();
void reemplazaVocal();

char frase[50];
int main(){
    char vocal;
    int toggle = 0;

    printf("Ingresa una frase:\n");
    scanf("%50s", &frase);

    while(toggle<1) {
        printf("Ingresa una vocal:\n");
        scanf("%1c", &vocal);
        scanf("%1c", &vocal);

        if(vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u') {
            toggle++;
        }
        else {
            printf("Error! ");
            toggle = 0;
        }

    }
    int length;
    length = strlen(frase);

    contarEspacios(length);


}


void contarEspacios(int length) {
    int foo = 0;
    int bar = 0;

    for(foo=0;foo>length;foo++) {
        if(frase[foo] == ' ') {
            bar++;
        }
        if(bar>4) {
            frase[foo] = '\0';
            length = foo;
            break;
        }
    }

}
