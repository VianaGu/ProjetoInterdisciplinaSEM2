#define pin1 0
#define pin2 1
#define pin3 2
#define pin4 3

void moveFrente(){
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
}

void frenteDireita(){
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
}

void frenteEsquerda(){
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
}

void moveRe(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
}

void reDireita(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);

  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
}

void reEsquerda(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);

  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
}

void direita(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);

  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
}

void esquerda(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);

  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
}

void parar(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);

  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
}
