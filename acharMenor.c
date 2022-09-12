#include <stdio.h>

int funcAcharmenor (int **matrz, int taman, int linha, int copia, int menor);

int main (){
    int tamanh;

    printf("Tamanho da Matriz: ");
    scanf("%i", &tamanh);

    int matinteiros[tamanh][tamanh];

    for(int x = 0; x < tamanh; x++){
        for(int y = 0; y < tamanh; y++){
            scanf("%i", &matinteiros[x][y]);
        }
    }

    printf("O menor está na linha: %i", funcAcharmenor (matinteiros, tamanh, tamanh, tamanh, 0));

    return 0;
}

int funcAcharmenor (int **matrz, int taman, int linha, int copia, int menor){
    if (linha < 0){
        return menor;
    } else if (taman == 0){
        taman += copia;
        linha -= 1;
        menor = matrz [linha][taman];
        matrz[linha][taman-1] < menor ? matrz[linha][taman-1] : menor;
        return funcAcharmenor (matrz, taman-1, copia, linha-1);
    }else {
        menor = matrz[linha][taman];
        matrz[linha][taman-1] < menor ? matrz[linha][taman-1] : menor;
        return funcAcharmenor (matrz, taman - 1, copia, linha); 

    }
}