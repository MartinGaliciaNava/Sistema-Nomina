#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcion ;

    printf("\n************************************************************************************************************************\n\n");
	printf("\t\t\t                        SISTEMA DE NOMINA\n");
    printf("\n************************************************************************************************************************\n\n"); 
    printf("\n MENU\n");
    printf("\n 1.- Nombre del Empleado ");
    printf("\n 2.- Clave de trabajador ");
    printf("\n 3.-Alta de nuevos empleados");
    printf("\n 4.-Faltas o Incidencias de Empleados");
    printf("\n 5.-Descuentos de Empleado");
    printf("\n 6.-Pagos Extras Y Prestaciones ");
    printf("\n 7.-Horas laboradas");
    printf("\n 8.-Pago de Empleados");
    printf("\n 9.-Cierre de nómina");
    printf("\n 10-.salir\n\n");
    printf("\n Opcion elegida: ");
    scanf("%d",&opcion);
    
	system("cls");
   
    switch(opcion){

    case 1:
    printf("\n NOMBRE DE EMPLEADO: \n"); 
    break;
    
    case 2:
    printf("\n CLAVE DE EMPLEADO: \n");
    break;
    
    case 3:
    printf("\n DATOS DE NUEVO EMPLEADO: \n");
    break;
    
    case 4:
    printf("\n FALTAS OBTENIDAS O INCIDENCIAS: \n");
    break;
    
    case 5:
    printf("\n DESCUENTO TOTAL: \n");
    break;
    
    case 6:
    printf("\n PAGOS ADICIONALES:\n");
    break;
    
    case 7:
    printf("\n TOTAL DE HORAS LABORADAS: \n");
    break;
    
    case 8:
    printf("\n PAGO FINAL DE EMPLEADOS: \n");
    break;
    
    case 9:
    printf("\n CIERRE DE NOMINA: \n");
    break;
    
    case 10: 
    printf("\n HASTA LA PROXIMA \n");
	break;
    }
    
    

    return 0;
}
