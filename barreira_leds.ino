void setup() {
  // put your setup code here, to run once:
  pinMode('A4', OUTPUT);
  pinMode('A5', OUTPUT);
  pinMode('D7', OUTPUT);
  pinMode('D8', OUTPUT);
  pinMode(A3, OUTPUT);
  digitalWrite(A3, HIGH);
}

void loop() {
  int v = 0;
  if (v==0) {
    digitalWrite('A4', LOW);
    digitalWrite('A5', LOW);
    digitalWrite('D7', LOW);
    digitalWrite('D8', LOW);
    v=1;
  } else {
    digitalWrite('A4', HIGH);
    digitalWrite('A5', HIGH);
    digitalWrite('D7', HIGH);
    digitalWrite('D8', HIGH);
    v=0;
  }    
  
  delay(1000);
}
