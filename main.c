#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int legajo;
    char nombre[30];
    int edad;
    int ano;
} stAlumno;
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();
void ejercicio16();
void ejercicio17();

void carga();
void cargaAlumno(stAlumno alumno,int i);
void muestraAlumno();


int main()
{
    int ejercicio;
    do
    {
        do
        {
            printf("EJERCICIOS                                                 INGRESAR");
            printf("\nEJERCICIO 1  ...................................................  1");
            printf("\nEJERCICIO 2  ...................................................  2");
            printf("\nEJERCICIO 3  ...................................................  3");
            printf("\nEJERCICIO 4  ...................................................  4");
            printf("\nEJERCICIO 5  ...................................................  5");
            printf("\nEJERCICIO 6  ...................................................  6");
            printf("\nEJERCICIO 7  ...................................................  7");
            printf("\nEJERCICIO 8  ...................................................  8");
            printf("\nEJERCICIO 8  ...................................................  9");
            printf("\nEJERCICIO 8  ................................................... 10");
            printf("\nEJERCICIO 8  ................................................... 11");
            printf("\nEJERCICIO 8  ................................................... 12");
            printf("\nEJERCICIO 8  ................................................... 13");
            printf("\nEJERCICIO 8  ................................................... 14");
            printf("\nEJERCICIO 8  ................................................... 15");
            printf("\nEJERCICIO 8  ................................................... 16");
            printf("\nEJERCICIO 9  ................................................... 17\n");
            printf("\nIngrese el ejercicio: ");
            scanf("%i",&ejercicio);
        }
        while(ejercicio!=1 && ejercicio!=2 && ejercicio!=3 && ejercicio!=4 && ejercicio!=5 && ejercicio!=6 && ejercicio!=7 && ejercicio!=8 && ejercicio!=9 && ejercicio!=10 && ejercicio!=11 && ejercicio!=12 && ejercicio!=13 && ejercicio!=14 && ejercicio!=15 && ejercicio!=16 && ejercicio!=17 && ejercicio!=0);
        if(ejercicio!=0)
        {
            printf("\nEJERCICIO %i\n\n",ejercicio);
        }
        switch(ejercicio)
        {
            case 1:
            {
                ejercicio1();
            }
            break;
            case 2:
            {
                ejercicio2();
            }
            break;
            case 3:
            {
                ejercicio3();
            }
            break;
            case 4:
            {
                ejercicio4();
            }
            break;
            case 5:
            {
                ejercicio5();
            }
            break;
            case 6:
            {
                ejercicio6();
            }
            break;
            case 7:
            {
                ejercicio7();
            }
            break;
            case 8:
            {
                ejercicio8();
            }
            break;
            case 9:
            {
                ejercicio9();
            }
            break;
            case 10:
            {
                ejercicio9();
            }
            break;
            case 11:
            {
                ejercicio9();
            }
            break;
            case 12:
            {
                ejercicio9();
            }
            break;
            case 13:
            {
                ejercicio9();
            }
            break;
            case 14:
            {
                ejercicio9();
            }
            break;
            case 15:
            {
                ejercicio9();
            }
            break;
            case 16:
            {
                ejercicio9();
            }
            break;
            case 17:
            {
                ejercicio9();
            }
            break;
        }
    }
    while(ejercicio!=0);
    printf("\nTP7 TERMINADO\n");
    printf("\nVersion 1.0\n");
    return 0;
}

void carga()                                                                         //FUNCION CARGA
{
    int i;
    char continuar='s';
    stAlumno alumno;
    for(i=0;i<15 && continuar=='s';i++)
    {
        cargaAlumno(alumno,i);                                                      //FUNCION CARGAALUMNO
        printf("Desea cargar otro alumno? (s|n): ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
}
void cargaAlumno(stAlumno alumno,int i)                                             //FUNCION CARGAALUMNO
{
    FILE *archivo=fopen("archivo2","ab");
    if(archivo!=NULL)
    {
        printf("Ingrese el numero de legajo del alumno: ");
        scanf("%i",&alumno.legajo);
        printf("Ingrese el nombre y apellido del alumno: ");
        fflush(stdin);
        gets(alumno.nombre);
        printf("Ingrese la edad del alumno: ");
        scanf("%i",&alumno.edad);
        printf("Ingrese el ano que cursa el alumno: ");
        scanf("%i",&alumno.ano);
        fwrite(&alumno,sizeof(alumno),1,archivo);
        fclose(archivo);
    }
}
void muestraAlumno()                                                                //FUNCION MUESTRAALUMNO
{
    stAlumno alumno;
    FILE *archivo=fopen("archivo2","rb");
    while(fread(&alumno,sizeof(alumno),1,archivo)>0)
    {
        printf("%i - %s\n\n",alumno.legajo,alumno.nombre);
    }
    fclose (archivo);
}





void ejercicio1()
{
    //Hacer una funcion que agregue un elemento al final de un archivo.
    stAlumno alumno[10];
    carga(alumno);
    muestraAlumno();
}
void ejercicio2()
{
    //Hacer una funcion que muestre por pantalla el contenido de un archivo.
    stAlumno alumno[10];
    carga(alumno);
    muestraAlumno();
}
void ejercicio3()
{
    //Hacer una funcion que retorne la cantidad de registros que contiene un archivo.
    int cantidad;
    stAlumno alumno[10];
    carga(alumno);
    muestraAlumno();

    //HACER FUNCION QUE CUENTE
}
void ejercicio4()
{
    //Crear una funcion que cargue un archivo de alumnos.
    //Abrirlo de manera tal de verificar si el archivo ya esta creado previamente.
    //Cargar el archivo con 5 datos.
    //Cerrarlo dentro de la funcion.
}
void ejercicio5()
{
    //Crear una funcion que muestre por pantalla los registros de un archivo de alumnos.
    //Modularizar.
}
void ejercicio6()
{
    //Crear una funcion que permita agregar de a un elemento al final del archivo.
    //O sea, se debe abrir el archivo, se piden los datos (se llena una variable de tipo struct alumno), se escribe en el archivo y se cierra.
}
void ejercicio7()
{
    //Crear una funcion que pase a una pila los numeros de legajo de los alumnos mayores de edad.
}
void ejercicio8()
{
    //Dado un archivo de alumnos, hacer una funcion que cuente la cantidad de alumnos mayores a edad especifica que se envia por parametro.
}
void ejercicio9()
{
    //Dado un archivo de alumnos, mostrar por pantalla el nombre de todos los alumnos entre un rango de edades específico (por ejemplo, entre 17 y 25 años).
    //Dicho rango debe recibirse por parametro.
    //Modularizar.
}
void ejercicio10()
{
    //Dado un archivo de alumnos, mostrar los datos del alumno de mayor edad.
    //Modularizar.
}
void ejercicio11()
{
    //Crear una funcion que retorne la cantidad de alumnos que cursan un determinado año.
    //El año buscado se pasa por parametro.
}
void ejercicio12()
{
    //Crear una funcion que reciba como parametro un arreglo de tipo alumno y lo copie en el archivo.
    //Asimismo, realice otra funcion que pase los elementos del archivo a un arreglo de alumnos, filtrando los estudiantes de un año en particular.
}
void ejercicio13()
{
    //Crear una funcion que retorne la cantidad de registros que tiene el archivo.
    //Usar fseek y ftell.
    //Puede pensar la funcion para uso generico, que sirva para averiguar la cantidad de registros de cualquier archivo.
}
void ejercicio14()
{
    //Dado un archivo de alumnos, que tenga al menos 10 registros, hacer una funcion que muestre el contenido de un registro, cuyo numero (entre 0 y 9) se pase por parametro.
    //Controlar no sobrepasar los limites del archivo.
}
void ejercicio15()
{
    //Realice una (o varias) funciones que permitan modificar un registro existente en el archivo de alumnos.
    //La misma debe permitir modificar uno o todos los campos de la estructura y sobreescribir el registro existente en el archivo.
}
void ejercicio16()
{
    //Dado un archivo de alumnos, hacer una funcion que invierta los elementos del mismo.
    //No se puede usar otro archivo auxiliar ni un arreglo auxiliar.
    //Debe trabajar sobre el archivo.
    //Puede utilizar variables de tipo alumno auxiliares.
}
void ejercicio17()
{
    //Hacer una funcion principal que pruebe el funcionamiento de todos los incisos anteriores, con un menu de opciones para poder ejecutar todas las funciones requeridas.
    //Tengan presente la correcta declaracion y el ambito de variables.
}
