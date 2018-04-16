#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;
 //4.- TEMPLATE STACK:
 // CREAMOS UN TEMPLATE PARA LA CALSE STACK
 template < class T> class Stack ;
 template < class T>
 //EN ESTE TEMPLATE SOBRECARGAMOS EL OPERADOR +;
 Stack <T> operator +( const Stack <T> & s1 , const Stack <T> & s2 )
    {     Stack<T> result = s1;
         // EL CONTENIDO DE LA PILA RESULT(ESTA POSEE LOS MISMOS ELEMENTOS QUE POSEE S1.
          for ( unsigned i = 0; i < s1 . items . size (); ++ i) {
                //LOS EMPUJAMOS PARA ATRAS CON EL METODO PUSH_BACK Y AGREGAMOS LOS ELEMENTOS DE LA PILA S2.
             result.items.push_back(s2 .items [ i]);
        }
           return result ;
   }
//PARA MOSTRAR NUESTRA PILA
//SOBRECARGAMOS EL OPERADOR <<;
//SIEMPRE CREANDO UN TEMPLADE PARA LA CLASE STACK;
template < class T> class Stack ;
template < class T>
ostream&operator <<(ostream &output, Stack<T> &p1)
{
    for(int i=0;i<p1.items.size();i++)
    {
        output<<p1.items[i]<<" ";
    }
}

 template < class T>
 //DEFINIMOS LA CLASE STACK CON UN TEMPLATE.
 class Stack {
     // CREAMOS UNA FUNCION FRIEND SOBRECARGANDO EL OPERADOR +;
     // LOS ELEMENTOS DE LA PILA SON DE TIPO VECTOR.
     public:
           friend Stack < T> operator +<>( const Stack <T> & s1 , const Stack <T> & s2 );
           vector<T>items;
           //EL METODO EMPTY DEVUELVE SI LA PILA ESTA VACIA.
 public :
           bool emptyy () const { return items.empty () ;}
           //EL METODO PUSH INSERTA ELEMENTOS.
           void push ( const T & item ) { items . push_back ( item );}
           //EL METODO POP NOS RETORNA EL ULTIMO ELEMTO DE LA PILA y lo elimina tambien
           T pop () {
           T last = items . back ();
           items . pop_back ();
           return last ;
            }
            T top(){

                T last=items.front();
                return last;
                //Nos retorna el primer elemento de muestra pila
           }
  };

int main()
{


    //4 CLASS STACK
    Stack<int>pila;
    Stack<int>pila2;
    Stack<int>pila3;
    pila.push(1);
    pila.push(2);
    pila.push(3);


    cout<<pila.emptyy()<<endl;
    cout<<pila.pop()<<endl;
    cout<<pila.top()<<endl;
    cout<<pila;

}
