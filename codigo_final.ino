#include <Servo.h>           //INCLUSÃO DA BIBLIOTECA NECESSÁRIA
#include <SoftwareSerial.h>  //INCLUSÃO DE BIBLIOT
#include <SoftwareSerial.h>  //INCLUSÃO DE BIBLIOTECA
SoftwareSerial mySerial(2,3);

const int pinoRX = 2;     //PINO DIGITAL 2 (RX)
const int pinoTX = 3;     //PINO DIGITAL 3 (TX)
const int pinoLed = 12;   //PINO DIGITAL UTILIZADO PELO LED
int dadoBluetooth = 0;    //VARIÁVEL QUE ARMAZENA O VALOR ENVIADO PELO BLUETOOTH
boolean loopLED = false;  //VARIÁVEL BOOLEANA QUE FAZ O CONTROLE DE ATIVAÇÃO DO LOOP DO LED

SoftwareSerial bluetooth(pinoRX, pinoTX);  //PINOS QUE EMULAM A SERIAL, ONDE
//O PINO 2 É O RX E O PINO 3 É O TX
const int pinoServo = 6; //PINO DIGITAL UTILIZADO PELO SERVO  
const int pinoServoo = 8; //PINO DIGITAL UTILIZADO PELO SERVO  
 
Servo s,s2; //OBJETO DO TIPO SERVO
int pos, pos2; //POSIÇÃO DO SERVO
char caracter =0;
void setup() {
  Serial.begin(9600);        //INICIALIZA A SERIAL
  bluetooth.begin(9600);     //INICIALIZA A SERIAL DO BLUETOOTH
  //bluetooth.print("$");      //IMPRIME O CARACTERE
  //bluetooth.print("$");      //IMPRIME O CARACTERE
  //bluetooth.print("$");      //IMPRIME O CARACTERE
  //delay(100);                //INTERVALO DE 100 MILISSEGUNDOS
  pinMode(pinoLed, OUTPUT);  //DEFINE O PINO COMO SAÍDA
  s.attach(pinoServo);       //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO SERVO
  s2.attach(pinoServoo);
  //s.write(0);                //INICIA O MOTOR NA POSIÇÃO 0º
  //s2.attach(pinoServo);      //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO SERVO
  //s2.write(0);               //INICIA O MOTOR NA POSIÇÃO 0º
}

void loop() {
  if (bluetooth.available()) {         //SE O BLUETOOTH ESTIVER HABILITADO, FAZ
    dadoBluetooth = bluetooth.read();  //VARIÁVEL RECEBE O VALOR ENVIADO PELO BLUETOOTH

    if (dadoBluetooth == 'F') {      //SE O VALOR RECEBIDO FOR IGUAL A 1, FAZ
      //for (pos = 0; pos < 360; pos++)
      //{  //PARA "pos" IGUAL A 0, ENQUANTO "pos" MENOR QUE 180, INCREMENTA "pos"
        //s.write(0);                    //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
        //s2.write(180);
        //delay(10); 
        s.write(180);                      //INTERVALO DE 15 MILISSEGUNDOS
      //}    
      dadoBluetooth = 0;  
    }
    if (dadoBluetooth == 'B') {      //SE O VALOR RECEBIDO FOR IGUAL A 1, FAZ
      //for (pos = 0; pos < 360; pos++)
      //{  //PARA "pos" IGUAL A 0, ENQUANTO "pos" MENOR QUE 180, INCREMENTA "pos"
        //s.write(0);                    //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
        //s2.write(180);
        //delay(10); 
        s.write(0);                      //INTERVALO DE 15 MILISSEGUNDOS
      //}    
      dadoBluetooth = 0;  
    }
     if (dadoBluetooth == 'W') {      //SE O VALOR RECEBIDO FOR IGUAL A 1, FAZ
      //for (pos = 0; pos < 360; pos++)
      //{  //PARA "pos" IGUAL A 0, ENQUANTO "pos" MENOR QUE 180, INCREMENTA "pos"
        //s.write(0);                    //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
        //s2.write(180);
        //delay(10); 
        s.write(90);                      //INTERVALO DE 15 MILISSEGUNDOS
      //}    
      dadoBluetooth = 0;  
    }
      if (dadoBluetooth == 'R') {      //SE O VALOR RECEBIDO FOR IGUAL A 1, FAZ
      //for (pos = 0; pos < 360; pos++)
      //{  //PARA "pos" IGUAL A 0, ENQUANTO "pos" MENOR QUE 180, INCREMENTA "pos"
        //s.write(0);                    //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
        //s2.write(180);
        //delay(10); 
        s2.write(180);                      //INTERVALO DE 15 MILISSEGUNDOS
      //}    
      dadoBluetooth = 0;  
    }
    if (dadoBluetooth == 'L') {      //SE O VALOR RECEBIDO FOR IGUAL A 1, FAZ
      //for (pos = 0; pos < 360; pos++)
      //{  //PARA "pos" IGUAL A 0, ENQUANTO "pos" MENOR QUE 180, INCREMENTA "pos"
        //s.write(0);                    //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
        //s2.write(180);
        //delay(10); 
        s2.write(0);                      //INTERVALO DE 15 MILISSEGUNDOS
      //}    
      dadoBluetooth = 0;  
    }
    










  }
}
  //for (pos = 0; pos < 180; pos++) {  //PARA "pos" IGUAL A 0, ENQUANTO "pos" MENOR QUE 180, INCREMENTA "pos"
   // s2.write(pos);                   //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
    //delay(15);                       //INTERVALO DE 15 MILISSEGUNDOS
  //}

  //s.write(90)



  // delay(1000);                        //INTERVALO DE 1 SEGUNDO
  // for (pos = 180; pos >= 0; pos--) {  //PARA "pos" IGUAL A 180, ENQUANTO "pos" MAIOR OU IGUAL QUE 0, DECREMENTA "pos"
  //   s.write(pos);                     //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
  //   delay(15);                        //INTERVALO DE 15 MILISSEGUNDOS
  // }

  // delay(1000);                        //INTERVALO DE 1 SEGUNDO
  // for (pos = 180; pos >= 0; pos--) {  //PARA "pos" IGUAL A 180, ENQUANTO "pos" MAIOR OU IGUAL QUE 0, DECREMENTA "pos"
  //   s2.write(pos);                    //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
  //   delay(15);                        //INTERVALO DE 15 MILISSEGUNDOS
  // }
  //}


  //   if (dadoBluetooth == '0') {         //SE O VALOR RECEBIDO FOR IGUAL A 0, FAZ
  //     Serial.println("LED DESLIGADO");  //IMPRIME O TEXTO NA SERIAL
  //     digitalWrite(pinoLed, LOW);       //DESLIGA O LED
  //   }
  //   if (dadoBluetooth == 'b') {               //SE O VALOR RECEBIDO FOR IGUAL A b, FAZ
  //     Serial.println("LOOP DO LED ATIVADO");  //IMPRIME O TEXTO NA SERIAL
  //     loopLED = true;                         //VARIÁVEL RECEBE verdadeiro
  //   } else {                                  //SENÃO, FAZ
  //     loopLED = false;                        //VARIÁVEL RECEBE falso
  //   }
  // }

  // //MÉTODO RESPONSÁVEL PELO LOOP (LIGA / DESLIGA) DO LED
  // if (loopLED) {
  //   digitalWrite(pinoLed, HIGH);             //LIGA O LED
  //   Serial.println("LOOP (LED LIGADO)");     //IMPRIME O TEXTO NA SERIAL
  //   delay(500);                              //INTERVALO DE 500 MILISSEGUNDOS
  //   digitalWrite(pinoLed, LOW);              //DESLIGA O LED
  //   Serial.println("LOOP (LED DESLIGADO)");  //IMPRIME O TEXTO NA SERIAL
  //   delay(500);                              //INTERVALO DE 500 MILISSEGUNDOS
  // }
//}