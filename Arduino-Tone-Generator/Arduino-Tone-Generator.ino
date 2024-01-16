/*
//Simple DIY Electronic Music Projects
//
//
// Arduino Tone Generator
//
*/

int potPin = A5;
int SPEAKER = 10;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int potReading = analogRead(potPin);

  // if the reading is zero, turn it off
  if (potReading == 0) {
    noTone (SPEAKER);
  } else {
    // This is a special function that will take one range of values,
    // in this case the analouge input reading between 0 and 1023, and
    // produce and equivalent point in another range of numbers, in this 
    // case a range of frequencies to use for the pitch (120 t0 1500Hz).

    int pitch = map(potReading, 0, 1023, 20, 1500);

    tone (SPEAKER, pitch);

}
}
