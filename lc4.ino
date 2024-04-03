//Incluir libreria
#include <LiquidCrystal.h>
//inicialice la biblioteca asociando cualquier pin de interfaz LCD necesario
//con el número de pin arduino al que está conectado
LiquidCrystal lcd(24, 25, 26, 27, 28, 29);
void setup() {
//Indicamos el tamaño del lcd
lcd.begin(16,2);
//Llamamos a la funcion
presentacion();
//Definimos el tiempo de limpieza
delay(2000);
lcd.clear();
//Lamamos a la segunda funcion
proyecto();
//Definimos el tiempo de limpieza
delay(2000);
}

void loop() {
}
//Creamos la primera funcion
void presentacion() {
//Indicamos en que posicion se imprime el mensaje
lcd.setCursor(0,0);
//Imprimimos en el lcd
lcd.print("nombre"); 
//Indicamos en que posicion se imprime el mensaje
lcd.setCursor(0,1);
//Imprimimos en el lcd
lcd.print("institucion"); 
}
//Creamos la primera funcion
void proyecto() {
//Indicamos en que posicion se imprime el mensaje
lcd.setCursor(0,0);
//Imprimimos en el lcd
lcd.print("laboratorio"); 
//Indicamos en que posicion se imprime el mensaje
lcd.setCursor(0,1);
//Imprimimos en el lcd
lcd.print("curso"); 
}

