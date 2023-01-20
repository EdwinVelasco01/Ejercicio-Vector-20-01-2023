#include <stdio.h>
int e;
int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    

    archivo=fopen("vector.txt","r");
    archivo2=fopen("multiplos5.txt","w");

    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i+=3){
        fprintf(archivo,"%d\n",i);
    }

    while (!feof(archivo)){
        fscanf(archivo, "%d", &e);
        if (e %5==0){
            fprintf(archivo2,"El valor es multiplo de 5  %d \n",e);
        }
        else{
            fprintf(archivo2,"%d \n",e);
        }
        
    }
    
     fclose(archivo);
     fclose(archivo2);


     return 0;
}