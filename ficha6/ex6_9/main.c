#include <stdio.h>
#define NMAX 100

int lerVetor(char vetor[]){
    char carac;
    int  i;
    for (i = 0; i < NMAX; i++)
    {
        fseek(stdin, 0, SEEK_END);
        printf("Insira o caractere:\n");
        scanf("%c", &carac);

        if ((carac > 'A' && carac < 'Z') || (carac > 'a' && carac < 'z'))
            vetor[i] = carac;
        else
            break;
    }
    return i;
}

void mostrarVetor(char vetor[], int numElem){
    for (int i = 0; i < numElem; i++)
    {
        printf("%c ", vetor[i]);
    }
    
}

int separaMaiuculas(char caracteres[], char maiusculas[], int numElem){
    int contCarac, contMaiu = 0;
    char carac;
    for (contCarac = 0; contCarac < numElem; contCarac++)
    {
        carac = caracteres[contCarac];
        if (carac > 'A' && carac < 'Z'){
            maiusculas[contMaiu] = carac;
            contMaiu++;
        }
    }
    return contMaiu;
}

int separaMinusculas(char caracteres[], char minusculas[], int numElem){
    int contCarac, contMin = 0;
    char carac;
    for (contCarac = 0; contCarac < numElem; contCarac++)
    {
        carac = caracteres[contCarac];
        if (carac > 'a' && carac < 'z'){
            minusculas[contMin] = carac;
            contMin++;
        }
    }
    return contMin;
}

int main(){
    char caracteres[NMAX];
    int numCarac = lerVetor(caracteres);

    char maiusculas[numCarac], minusculas[numCarac];

    int numMai = separaMaiuculas(caracteres, maiusculas, numCarac);
    int numMin = separaMinusculas(caracteres, minusculas, numCarac);

    printf("\nCaracteres:\n");
    mostrarVetor(caracteres, numCarac);
    printf("\nMaiusculas:\n");
    mostrarVetor(maiusculas, numMai);
    printf("\nMinusculas:\n");
    mostrarVetor(minusculas, numMin);
}