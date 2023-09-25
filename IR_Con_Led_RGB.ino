#include <IRremote.hpp>
int IRpin=3;
int Redpin=5;
int Greenpin=11;
int Bluepin=9;

void setup(){
Serial.begin(9600);
IrReceiver.begin(IRpin, ENABLE_LED_FEEDBACK);
pinMode(Redpin, OUTPUT);
pinMode(Greenpin, OUTPUT);
pinMode(Bluepin, OUTPUT);
}

void loop(){
if(IrReceiver.decode()){
String ir_code = String(IrReceiver.decodedIRData.decodedRawData, HEX);

Serial.println(ir_code); //Imprime el valor del boton en datos 32 bits

IrReceiver.resume(); 

if (ir_code == "e916ff00"){               //detecta el Boton 0
 //Serial.println("boton 0");
 digitalWrite(Redpin, LOW);
 digitalWrite(Greenpin, LOW);
 digitalWrite(Bluepin, LOW);
}

if (ir_code == "f30cff00"){              //detecta el Boton 1    
 //Serial.println("boton 1");
 digitalWrite(Redpin, LOW);
 digitalWrite(Greenpin, LOW);
 digitalWrite(Bluepin, LOW);
}

if (ir_code == "e718ff00"){             //detecta el Boton 2
 //Serial.println("boton 2");
 digitalWrite(Redpin, LOW);
 digitalWrite(Greenpin, LOW);
 digitalWrite(Bluepin, LOW);
}

if (ir_code == "a15eff00"){             //detecta el Boton 3
 //Serial.println("boton 3");
 digitalWrite(Redpin, LOW);
 digitalWrite(Greenpin, LOW);
 digitalWrite(Bluepin, LOW);
  } 
 } 
}