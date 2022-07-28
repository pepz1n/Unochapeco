/*

3. Implemente um algoritmo que retorne a soma e a média de valores  armazenados em um vetor.
 A soma e a média devem ser calculadas por meio  de funções próprias para isto. 

*/


int Soma(int v1, int v2, int v3){
    int resultadoSoma;
    resultadoSoma = v1 + v2 + v3;
    return resultadoSoma;

}

float Media(float v1, float v2, float v3){
    float media;
    media = (v1 + v2 + v3)/3;
    return media;

}

int main(){
    int vetor[3],soma;
    float media;
    for(int i=0;i<3;i++){
        scanf("%d",&vetor[i]);
    }
    
    
    soma= Soma(vetor[0], vetor[1], vetor[2]);
    media = Media(vetor[0], vetor[1], vetor[2]);

    printf("\nA soma de todos os valores e: %d",soma);
    printf("\nA media de todos os valores e: %f",media);
}