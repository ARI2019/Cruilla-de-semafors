//********** Variables ********************************************************

const int verdA = 5;
const int taronjaA = 6;
const int vermellA = 7;

const int verdB = 8;
const int taronjaB = 9;
const int vermellB = 10;

unsigned long a = 1500;

//********** Setup ************************************************************

void setup() { 

  pinMode(verdA, OUTPUT);    
  pinMode(taronjaA, OUTPUT);     
  pinMode(vermellA, OUTPUT);     
  pinMode(verdB, OUTPUT);     
  pinMode(taronjaB, OUTPUT);     
  pinMode(vermellB, OUTPUT);     
 
}
//********** Loop *************************************************************

void loop() {

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,HIGH);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,HIGH);
delay (a);

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,HIGH);
digitalWrite(verdB,HIGH);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,LOW);
delay (a);

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,HIGH);
digitalWrite(verdB,HIGH);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,LOW);
delay (a);

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,HIGH);
digitalWrite(verdB,HIGH);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,LOW);
delay (a);

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,HIGH);
digitalWrite(verdB,HIGH);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,LOW);
delay (a);

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,HIGH);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,HIGH);
digitalWrite(vermellB,LOW);
delay (a);

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,HIGH);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,HIGH);
delay (a);

digitalWrite(verdA,HIGH);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,LOW);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,HIGH);
delay (a);

digitalWrite(verdA,HIGH);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,LOW);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,HIGH);
delay (a);

digitalWrite(verdA,HIGH);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,LOW);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,HIGH);
delay (a);

digitalWrite(verdA,HIGH);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,LOW);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,HIGH);
delay (a);

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,HIGH);
digitalWrite(vermellA,LOW);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,HIGH);
delay (a);

digitalWrite(verdA,LOW);
digitalWrite(taronjaA,LOW);
digitalWrite(vermellA,HIGH);
digitalWrite(verdB,LOW);
digitalWrite(taronjaB,LOW);
digitalWrite(vermellB,HIGH);
delay (a);
    
}
