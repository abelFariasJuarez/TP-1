/***************************************************
Fahrenheit (°F) = [ Celsius (°C) x 1.8 ] + 32

Abel Cesar, Farias Juarez

20150413

*****************************************************/

#include <stdio.h> 

int main(void){
	
	printf("\t%s -->\t%s\n","Celsius", "Fahrenheit");
	for(int cel= -25 ; cel < 75; cel++){
		/*puts("-_-_- HOLA MUNDO -_-_-\n");*/
      	
		  printf("\t%03d -->\t%04.2f\n",cel, ( (cel * 1.8) + 32) );
    }	
}
