#include <stdio.h> 
//Daniel Camacho,Carlos Caruci,Ilver Camacho Sección "D"

int main() { // Inicio del programa

//SE DECLARAN TODAS LAS VARIABLES
int CEstudiantesM,CEstudiantesF,CEstudiantesL,CEstudiantesCal,CEstudiantesC,cedula,notaM,notaF,notal,notaCal,notac;
int m,f,l,c,cal;
int aprobadoM=0,ReprobadoM=0,aprobadoF=0,ReprobadoF=0,aprobadoL=0,ReprobadoL=0,aprobadoCal=0,ReprobadoCal=0,aprobadoC=0,ReprobadoC=0;
int codigoM,codigoF,codigoL,codigoCal,codigoC;
float porcentajeAplazados,porcentajeAprobados,totalAprobados,totalReprobados,promedioNotas=0,todos_estudiantes,totalDeNotas;

// Preguntar la cantidad de alumnos y la seccion de la asignatura


//Matematicas ------------------------------------------------------------------------------------------
//se piden la cantidad de estudiantes y se guardda en la variables 
printf("\nIngrese la cantidad de estudiantes de la asignatura de matematicas\n");
scanf(" %d", &CEstudiantesM); // guardar la respuesta en la variable

//se piden la el codigo de la seccion y se guarda en su respectiva variable
printf("\nIngrese el codigo de la seccion\n");
scanf(" %i", &codigoM); 

//A cada estudiante se le pregunta su cedula y su nota en esa asignatura y se guardan en su respectiva variable
for ( m = 0; m < CEstudiantesM; m++)
{
    printf("\nCedula del estudiante del estudiante #%i\n",m+1);
    scanf(" %d", &cedula);

    printf("\nNota del estudiante\n");
    scanf(" %d", &notaM);

//se determina cuantos estudiantes pasaron la materia y cunatos quedaron aplazados
  if (notaM>=10) {
    aprobadoM++;
} else {
    ReprobadoM++;
}
}
 
//Fisica-----------------------------------------------------------------------------------------------------
//se piden la cantidad de estudiantes y se guardda en la variables 
printf("\nIngrese la cantidad de estudiantes de la asignatura de fisica\n");
scanf(" %d", &CEstudiantesF); 

//se piden la el codigo de la seccion y se guarda en su respectiva variable
printf("\nIngrese el codigo de la seccion\n");
scanf(" %i", &codigoF); 

//A cada estudiante se le pregunta su cedula y su nota en esa asignatura y se guardan en su respectiva variable
for ( f = 0; f < CEstudiantesF; f++)
{
    printf("\nCedula del estudiante del estudiante #%i\n",f+1);
    scanf(" %d", &cedula);

    printf("\nNota del estudiante\n");
    scanf(" %d", &notaF);

//se determina cuantos estudiantes pasaron la materia y cunatos quedaron aplazados
    if (notaF>=10) {
    aprobadoF++;
    } else {    
    ReprobadoF++;
    }
}

//Logica----------------------------------------------------------------------------------------------------------------
//se piden la cantidad de estudiantes y se guardda en la variables 
printf("\nIngrese la cantidad de estudiantes de la asignatura de Logica\n");
scanf(" %d", &CEstudiantesL); 

//se piden la el codigo de la seccion y se guarda en su respectiva variable
printf("\nIngrese el codigo de la seccion");
scanf(" %i", &codigoL); 

//A cada estudiante se le pregunta su cedula y su nota en esa asignatura y se guardan en su respectiva variable
for ( l = 0; l < CEstudiantesL; l++)
{
    printf("\nCedula del estudiante del estudiante #%i\n",l+1);
    scanf(" %d", &cedula);

    printf("\nNota del estudiante\n");
    scanf(" %d", &notal);   

//se determina cuantos estudiantes pasaron la materia y cunatos quedaron aplazados
    if (notal>=10) {
    aprobadoL++;
    } else {    
    ReprobadoL++;
    }
}

//Calculo--------------------------------------------------------------------------------------------------------------
//se piden la cantidad de estudiantes y se guardda en la variables 
printf("\nIngrese la cantidad de estudiantes de la asignatura de Calculo\n");
scanf(" %d", &CEstudiantesCal); 

//se piden la el codigo de la seccion y se guarda en su respectiva variable
printf("\nIngrese el codigo de la seccion\n");
scanf(" %i", &codigoCal); 

//A cada estudiante se le pregunta su cedula y su nota en esa asignatura y se guardan en su respectiva variable
for ( cal = 0; cal < CEstudiantesCal; cal++)
{
    printf("\nCedula del estudiante del estudiante #%i\n",cal+1);
    scanf(" %d", &cedula);

    printf("\nNota del estudiante\n");
    scanf(" %d", &notaCal); 
    
//se determina cuantos estudiantes pasaron la materia y cunatos quedaron aplazados
    if (notaCal>=10) {
    aprobadoCal++;
    } else {    
    ReprobadoCal++;
    }
      
}


//Creatividad--------------------------------------------------------------------------------------------------------------

//se piden la cantidad de estudiantes y se guardda en la variables CEstudiantesC
printf("\nIngrese la cantidad de estudiantes de la asignatura de Creatividad\n");
scanf(" %d", &CEstudiantesC); 

//se piden la el codigo de la seccion y se guarda en su respectiva variable
printf("\nIngrese el codigo de la seccion\n");
scanf(" %i", &codigoC); 

//A cada estudiante se le pregunta su cedula y su nota en esa asignatura y se guardan en su respectiva variable
for ( c = 0; c < CEstudiantesC; c++)
{
    printf("\nCedula del estudiante del estudiante #%i\n",c+1);
    scanf(" %d", &cedula);

    printf("\nNota del estudiante\n");
    scanf(" %d", &notac);  

//se determina cuantos estudiantes pasaron la materia y cunatos quedaron aplazados
    if (notac>=10) {
    aprobadoC++;
    } else {    
    ReprobadoC++;
    } 
}


//------------------------------------------------CALCULOS-------------------------------------------------------
//varibles con datos importantes
totalAprobados= aprobadoM + aprobadoF + aprobadoL + aprobadoCal + aprobadoC;
totalReprobados = ReprobadoM + ReprobadoF + ReprobadoL + ReprobadoCal + ReprobadoC;
totalDeNotas = notac+notaCal+notal+notaF+notaM;
todos_estudiantes=totalAprobados+totalReprobados;

//se calcula el promedio y los porcentajes de las notas
porcentajeAprobados = totalAprobados/todos_estudiantes*100;
porcentajeAplazados = totalReprobados/todos_estudiantes*100;
promedioNotas = totalDeNotas/todos_estudiantes;

//se imprimen los promedios y los porcentajes
printf("\n-------------------- PORCENTAJE DE APROBADOS Y APLAZADOS --------------------");
printf("\nEl porcentaje de los aprobados es: %.2f%%", porcentajeAprobados);
printf("\nEl porcentaje de los aplazados es: %.2f%%", porcentajeAplazados);
printf("\nEl promedio de las asignatura es: %f", promedioNotas);

// se determina cual es la asignatura con la nota mas baja y cual es la nota mas alta
    //a cada asignatura se le asigna un orden para hacer el codigo mas facil
   int primer = aprobadoC, segundo = aprobadoCal, tercero = aprobadoL, cuarto = aprobadoF, quinto = aprobadoM;
   int mayor = primer;
   int menor = primer;
   int codigo_mostrar = codigoC;
   int codigo_mostrar_Menor = codigoC;
   

   //si la primera asignatura es menor que la segunda nota entonces segundo es mayor que la primera nota, esto se debe hacer asi con todas las notas para determina cual es la nota mayor
   if(segundo > mayor) {
    mayor = segundo;
    codigo_mostrar = codigoCal;
    }
   if(tercero > mayor) {
    mayor = tercero;
    codigo_mostrar = codigoL;
    }
   if(cuarto > mayor) {
    mayor = cuarto;
    codigo_mostrar = codigoF;
   }
   if(quinto > mayor) {
    mayor = quinto;
    codigo_mostrar = codigoM;
   }

   //mismo codigo anterior solo cambiar el signo para determinar la asignatura con menor nota
   
   if(segundo < menor) {
    menor = segundo;
    codigo_mostrar_Menor = codigoCal;
    }
   if(tercero < menor) {
    menor = tercero;
    codigo_mostrar_Menor = codigoL;
    }
   if(cuarto < menor) {
    menor = cuarto;
    codigo_mostrar_Menor = codigoF;
    }
   if(quinto < menor) {
    menor = quinto;
    codigo_mostrar_Menor = codigoM;
    }
   
   //se imprimen los datos
   printf("\n\n-------------------- CODIGOS DE ASIGNATURAS DE APLAZADOS Y APROBADOS --------------------");
   printf("\nEl codigo de la asignatura con mayor numero de aprobados es: %d", codigo_mostrar);
   printf("\nEl codigo de la asignatura con mayor numero de aplazado es: %d\n\n\n", codigo_mostrar_Menor);

return 0;
}