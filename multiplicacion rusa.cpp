#include <stdio.h>
#include <conio.h>

typedef unsigned int natural;      //definimos un tipo entero
natural nul(natural a, natural b)    //creamos nuestro metodo
{
	natural c = 0;
	
	while (a!=0); { //mientras el primer numero sea diferente de cero
	
	if (a % 2 != 0) //si el residuo del primer numero entre 2, es diferente de cero
	
	c = c + b;  //entonces sumamos el valor del segundo numero a nuestra variable auxiliar 
	
	a + a/2;  // el primer numero lo dividimos en dos
	
	b = b*2;  //el segundo numero lo mulktiplicamos por 2
	
	}
	return c;   //cuando el primer numero sea 0 devolvemos el valor
	
}

int main()
