#include <iostream>
#include <cstdlib> // contains some math functions

using namespace std;
/*
#2

void f( const int a = 5)
{
cout << a*2 <<endl;
 }

 int a = 123;


 int main ()
 {
 f (1) ;
 f (a ) ;
 int b = 3;
 f (b ) ;
 int a = 4;
 f (a ) ;
 f();
 }
// imprime 2246 6 8 10 respectivamente
*/



 /*int main () {
#3.1


printNum (35) ;

return 0;

 }
void printNum (int number ) { std :: cout << number ; }// el error es que la funcion printNum debe ir antes de la funcion principal y recien en ese caso imprimira el numero */


/*void printNum () { cout << number ; };
#3.2
int main () {
int number = 35;
printNum ( number );
return 0;
}*/
//El error seria que  funcion printNum no tiene ninugn parametro de entrada pero en la func.principal si recibe parametros al llamarla.


/*void doubleNumber (int num ) {num = num * 2;}
#3.3
int main () {
int num = 35;
doubleNumber (num ) ; cout << num ; // Should print 70
return 0;
}
//No efectúa la funcion ya que el cambio se realiza dentro de la funcion pero al imprimir el numero no lo ha modificado fuera del ambito de la funcion, por eso va a seguir imprimiendo 35.
*/

/*int difference ( const int x , const int y) {
int diff = abs ( x - y ) ; // abs ( n) returns absolute value of n
}
#3.4
int main () {
    cout << difference (24 , 1238) ;
    return 0;
}
//No va a imprimir la diferencia debido a que la funcion difference no devuelve un valor por ende no va a imprimir la diferenica.
*/

/*int sum ( const int x, const int y ) {
return x + y ; }
#3.5
int main () {
    cout << sum (1, 2, 3); // Should print 6
    return 0;
}
//No va a imprimir la suma que seria 6, porque la funcion solo recibe dos parametros como entrada no 3.
*/

/*const int ARRAY_LEN = 10;
#3.6
int main () {
    int arr [ ARRAY_LEN ] = {10}; // Note implicit initialization of other elements
    int *xPtr = arr ;yPtr = arr + ARRAY_LEN - 1;
    cout<< *xPtr<< " " << *yPtr ; // Should output 10 0
    return 0; }
//No va a imprimir debido a que yPtr no es un puntero de tipo entero.
*/

/*4.1
int sum ( const int x , const int y ) {
return x + y ;}//suma de enteros

double sum ( const double x , const double y ) {
return x + y ;}//suma de valores double
*/

//4.3
/*int sum ( const int x , const int y , const int z ) {
return x + y + z ;
 }//suma de 3 enteros


int sum ( const int a , const int b , const int c , const int d ) {
return a + b + c + d ;

}*///suma de cuatro enteros


//4.4
/*int sum( const int a, const int b, const int c = 0 , const int d = 0)
{
 return a + b + c + d ;
} //Suma de cuatro enteros que retorna la suma de los cuatro
*/


//4.5
/*
int sum( const int numbers [], const int numbersLen ) {
    int sum = 0;
    for(int i = 0; i < numbersLen ; ++i ) {
    sum += numbers [ i];
    } return sum;
    }// Suma de n enteros mediante una lista que los contiene.
*/


//4.6
/*int sum ( const int numbers [] , const int numbersLen ) {
    return numbersLen == 0 ? 0 : numbers [0] + sum ( numbers + 1 ,
    numbersLen - 1) ;
}//Suma de n enteros de forma recursiva
*/

//#5.1
/*double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;*/
//Genera valores entre 0 y 1


//5.2
/*int dartsInCircle = 0;
for(int i = 0; i < n ; ++ i ) {
    double x = rand () / ( double ) RAND_MAX , y = rand () / ( double )RAND_MAX ;
    if( sqrt ( x * x + y * y ) < 1 ) {
        ++ dartsInCircle ; } }
*/
//Verifica cuantos dardos entan dentro del circulo


//#6.1
/*void printArray ( const int arr [], const int len ) {
    for(int i = 0; i < len; ++i ) {
        cout << arr [ i];
        if( i < len -1) { cout << ", ";
        }
    }
}
*/ //Imprime elementos de un arreglo con una coma en cada procedimiento



//#6.2
/*
void reverse (int numbers [] , const int numbersLen ) {
    for(int i = 0; i < numbersLen / 2; ++ i ) {
        int tmp = numbers [ i ];
        int indexFromEnd = numbersLen - i - 1;
        numbers [ i ] = numbers [ indexFromEnd ];
        numbers [ indexFromEnd ] = tmp ;

    }
}
 */ //Invierte los elementos de un arreglo
 
 
 //#6.3
 /*void transpose ( const int input [][ LENGTH ] , int output [][ WIDTH ]) {
        for(int i = 0; i < WIDTH ; ++ i ) {
            for (int j = 0; j < LENGTH ; ++ j ) {
                output [ j ][ i ] = input [ i ][ j ];

                }

        }

}
 */ //Va a transponer una matriz en otras palabras va a generar una matriz pero con el orden filas=columnas y columnas=filas.
 
 
//#6.4
 /*void reverse (int numbers [] , const int numbersLen ) {
    for(int i = 0; i < numbersLen / 2; ++ i ) {
        int tmp = *( numbers + i ) ;
        int indexFromEnd = numbersLen - i - 1;
        *( numbers + i ) = *( numbers + indexFromEnd ) ;
        *( numbers + indexFromEnd ) = tmp ;
    }
}
*/
//Invierte una lista usando punteros.

//#7.1
/*
int stringLength( const char *str) {
    int length = 0;
    while (*(str + length) != '\0') {
        ++length;
    }
return length;
}
*/ //Devuelve el tamaño de una cadena

//#7.2
/*void  swap1( int &x,  int &y)  {
    int  tmp  =  x;
    x  =  y;
    y  =  tmp ;
}     
 */ //Intercambia los valores de dos variables
 
 
 //#7.3
/* void  swap2 ( int *x,  int * y)  {
    int  tmp  =  * x;
    * x  =  * y;
    * y  =  tmp ;
}
 */ //Intercambia los valores de dos variables usando punteros
 
 //#7.4
 
/*void swap3(int **x, int **y) {
 int *tmp = *x;
 *x = *y;
 *y = tmp;
 }
 */ //Intercambia los valores de dos variables usando puntero dobles.
 
 
 
 //#7.5
 /*
     char *nthCharPtr = &oddOrEven[5];//Inicializa el puntero en la 6 posicion
	 nthCharPtr -= 2; or nthCharPtr = oddOrEven + 3;// El puntero ahora apunta a la 4 posicion
	 cout << *nthCharPtr;//Imprime el contenido que guarda nthCharPtr
	 char **pointerPtr = &nthCharPtr; //Crea un puntero doble que apunta a la direccion de memoria de nthCharPtr
	 cout << pointerPtr;//Imprime la direccion de memeoria que almacena el puntero
	 cout << **pointerPtr;//Imrime el contenido que alamcena pointerPtr
	 nthCharPtr++; //Avanza a la siguiente posicion 
    cout << nthCharPtr - oddOrEven;//Imprime cuanto a avanzado el puntero nthCharPtr*/
    
 
 
 
 
 
 
 
 
 
 
 
