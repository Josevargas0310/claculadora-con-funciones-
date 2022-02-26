#incluide <iostream>

//funciones
void menu();
void sumar (int num_a, num_b);
void resta (int num_a, num_b);
void multiplicacion (int num_a, num_b);
void division (int num_a, num_b);


int main()
(
 menu(); //se le llama a la funcion con el nombre de menu 
 return 0;
)

void menu(){
	
	int opcion; //declaramos la varibale que usaremos en el menu 
	printf("a continuacion digite el numero correspondiente a la funcion aritmatica que desea operar.");
	printf("\n 1.sumar ");
	printf("\n 2.restar ");
	printf("\n 3.multiplicacion");
	printf("\n 4.division");
	
	
	printf("\n Digite la opcion deseada");
	scanf ("%i", & num_a);
	
	printf("\n Digite la opcion deseada");
	scanf ("%i", & num_b);
	
	swicht (opc)
	{
		case 1: sumar (num_a, num_b);
		break; 
		case 2: restar (num_a, num_b);
		break; 
		case 3: multiplicar (num_a, num_b);
		break; 
		case 4: dividir (num_a, num_b);
		break; 
		default:
		printf("opcion invalida")
	}
	
	
}

void sumar (int num_a, num_b);
{
	printf ("El resultado es de: %i ", num_a + num_b);
}

void resta (int num_a, num_b);
{
	printf ("El resultado es de: %i ", num_a - num_b);
}


