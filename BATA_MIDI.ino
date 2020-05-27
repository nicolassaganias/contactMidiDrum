const int cantidadMics = 4;
const int pinMics[] = { A0, A1, A2, A3};
int datosMics[cantidadMics];
int i;
const int sensibilidad = 20;

int note;
int velocity = 100;
int noteON = 144;
int noteOFF = 128;

void setup() {
  Serial.begin(115200);
}

void loop() {
  for (i = 0; i < cantidadMics; i++) {
    datosMics[i] = analogRead(pinMics[i]);
//    Serial.print(i);
//    Serial.print("= ");
//    Serial.println(datosMics[i]);
  }
  if (datosMics[0] > sensibilidad) {
    mic1();
  }
  if (datosMics[1] > sensibilidad) {
    mic2();
  }
  if (datosMics[2] > sensibilidad) {
    mic3();
  }
  if (datosMics[3] > sensibilidad) {
    mic4();
  }
}

void mic1() {
  note = 36;
  MIDImessage(noteON, note, velocity);
  delay(10);
  MIDImessage(noteOFF, note, velocity);
 //de delay(200);
}

void mic2() {
  note = 37;
  MIDImessage(noteON, note, velocity);
  delay(10);
  MIDImessage(noteOFF, note, velocity);
 // delay(200);
}
void mic3() {
  note = 38;
  MIDImessage(noteON, note, velocity);
  delay(10);
  MIDImessage(noteOFF, note, velocity);
 // delay(200);
}
void mic4() {
  note = 39;
  MIDImessage(noteON, note, velocity);
  delay(10);
  MIDImessage(noteOFF, note, velocity);
 // delay(200);
}

void MIDImessage(int command, int MIDInote, int MIDIvelocity) {
  Serial.write(command);
  Serial.write(MIDInote);
  Serial.write(MIDIvelocity);
}
