#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	char ced[20], nombre[20], apellido[20], opcion, opcion2;
	int tipocl=0, nino=1, adulto=2, galeria=1, palco=2, tiquetes=0, cantnino=0, cantadult=0, sumcantnino=0, sumcantadult=0, localidad=0, montotiqadult=0, montotiqnino=0, descnino=0, subtotal=0, iva=0, total=0;
	int montoventa=0, fact=0, sumgaleria=0, sumpalco=0, acugaleria=0, acupalco=0, totaltiquetes=0, totalacu=0;
	double promgeneral=0;
	do {
		fact++;
		system("cls");
		printf("Digite el nombre del cliente: "); 
		scanf(" %s", &nombre); 
		printf("\nDigite el apellido del cliente: "); 
		scanf(" %s", &apellido); 
		printf("\nDigite el numero de cedula del cliente: "); 
		scanf(" %s", &ced); 
		do 	{  
			printf("\nDigite el tipo de entradas a adquirir"); 
			printf("\n1-- si es Nino o Adulto Mayor \n2-- si es Adulto\nTipo: "); 
			scanf("%i", &tipocl); 
			if (tipocl==1) { 
				printf("Digite la cantidad de entradas a adquirir para nino o adulto mayor: "); 
				scanf("%i", &cantnino); 
				sumcantnino=cantnino+sumcantnino; 
				montotiqnino=sumcantnino*600;
				descnino=montotiqnino*0.30;
				
				
			}else if(tipocl==2) {
				printf("Digite la cantidad de entradas a adquirir para adulto: ");
				scanf("%i", &cantadult);
				sumcantadult=cantadult+sumcantadult;
				montotiqadult=sumcantadult*1200;
			}
			
			printf("\nDesea ingresar otro tipo de entradas (s/n): ");
			scanf(" %c", &opcion);
				}while (opcion=='s' || opcion=='S');
		printf("\nDigite la localidad que desea adquirir\n1-- Si es Galeria\n2-- Si es Palco\nTipo: ");
		scanf("%i", &localidad);
		tiquetes=sumcantadult+sumcantnino;
		montoventa=montotiqnino+montotiqadult;
		subtotal=montoventa-descnino;
		iva=subtotal*0.13;
		total=subtotal+iva;
		system("cls");
		printf("\nNumero de Factura:			0000%i", fact);
		printf("\nNombre del cliente:			%s", nombre);
		printf(" %s", apellido);
		printf("\nNumero de cedula: 			%s", ced);
		printf("\nNinos o Adulto Mayor:			%i", sumcantnino);
		printf("\nAdultos:				%i", sumcantadult);
			if (localidad==1){
				printf("\nLa localidad seleccionada:		Galeria");
				sumgaleria=tiquetes+sumgaleria;
				acugaleria=total+acugaleria;
			}else {
				printf("\nLa localidad seleccionada:		Palco");
				sumpalco=tiquetes+sumpalco;
				acupalco=total+acupalco;
			}
		printf("\nCantidad de entradas: 			%i", tiquetes);
			if (sumcantnino==0 && sumcantadult!=0) {
				printf("\nMonto entrada de Adulto:		1200");
			}else if (sumcantadult==0 && sumcantnino!=0) {
				printf("\nMonto entrada Nino o Adulto mayor:	600");
			}else {
				printf("\nMonto entrada de Adulto:		1200");
				printf("\nMonto entrada Nino o Adulto mayor:	600");	
			}	
		printf("\nMonto de la venta:			%i", montoventa);
		printf("\nDescuento:				%i", descnino);
		printf("\nSubtotal:				%i", subtotal);
		printf("\nIVA:					%i", iva);
		printf("\nTotal:					%i", total);
		printf("\n");	
		sumcantnino=0, sumcantadult=0, montotiqnino=0, montotiqadult=0, tiquetes=0, descnino=0;
		printf("\nDesea ingresar otro cliente: ");
		scanf(" %c", &opcion2);		
		}while (opcion2=='s' || opcion2=='S');
		
	totaltiquetes=sumgaleria+sumpalco;
	totalacu=acugaleria+acupalco;
	promgeneral=totalacu/fact;
	system("cls");
	printf("*****************ESTADISTICAS*************************");
	printf("\n");
	printf("\nCantidad de entradas localidad Galeria: 		%i", sumgaleria);
	printf("\nAcumulado de dinero por entradas a Galeria:		%i", acugaleria );
	printf("\nCantidad de entradas localidad Palco:			%i", sumpalco);
	printf("\nAcumulado de dinero por entradas a Palco		%i", acupalco);
	printf("\nCantidad general de entradas vendidas:			%i", totaltiquetes);
	printf("\nAcumulado general de dinero:				%i", totalacu);
	printf("\nPromedio general por ventas:				%f", promgeneral);

	return 0;
}
