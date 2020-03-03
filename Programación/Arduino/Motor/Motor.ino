const int derecha = 4; // push button movimiento hacia derecha
const int izquierda = 5; // push button movimiento hacia izquierda
const int fin  = 6; // final de carrera
const int ini = 7; // final de carrera

const int STEP = 8; //
const int DIR = 9; //
const int V = 1; // velocidad, 1 TORNILLO, 5 FAJA Y CREMALLERA,


void setup() {
  // put your setup code here, to run once:
  pinMode(derecha, INPUT);
  pinMode(izquierda, INPUT);
  pinMode(fin, INPUT);
  pinMode(ini, INPUT);

  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);

  }

void loop() {



  
  // Movimiento hacia la derecha
  if ((digitalRead(derecha)==HIGH) && (digitalRead(izquierda)==LOW) && (digitalRead(fin)==LOW)){
    
    digitalWrite(DIR, LOW);
  
    digitalWrite(STEP, HIGH);
    delay(V);
    digitalWrite(STEP, LOW);
    delay(V);
    }


  // Movimiento hacia la izquierda
  if ((digitalRead(izquierda)==HIGH) && (digitalRead(ini)==LOW) && (digitalRead(derecha)==LOW) ){
    digitalWrite(DIR, HIGH);
    
    digitalWrite(STEP, HIGH);
    delay(V);
    digitalWrite(STEP, LOW);
    delay(V);
    }
}
