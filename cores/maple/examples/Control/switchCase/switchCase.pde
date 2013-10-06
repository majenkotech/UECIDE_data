/*
  Switch statement

  Demonstrates the use of a switch statement.  The switch statement
  allows you to choose from among a set of discrete values of a
  variable.  It's like a series of if statements.

  To see this sketch in action, but the board and sensor in a well-lit
  room, open the serial monitor, and and move your hand gradually down
  over the sensor.

  The circuit:
  * photoresistor from analog in 0 to +5V
  * 10K resistor from analog in 0 to ground

  created 1 Jul 2009
  by Tom Igoe

  Ported to the Maple 27 May 2010
  by Bryan Newbold

  http://leaflabs.com/docs/lang/cpp/switchcase.html
*/

// These constants won't change:
const int sensorMin = 0;      // sensor minimum, discovered through experiment
const int sensorMax = 600;    // sensor maximum, discovered through experiment

void setup() {
    pinMode(0, INPUT_ANALOG);
}

void loop() {
    // Read the sensor:
    int sensorReading = analogRead(0);
    // Map the sensor range to a range of four options:
    int range = map(sensorReading, sensorMin, sensorMax, 0, 3);

    // Do something different depending on the range value:
    switch (range) {
    case 0:    // your hand is on the sensor
        SerialUSB.println("dark");
        break;
    case 1:    // your hand is close to the sensor
        SerialUSB.println("dim");
        break;
    case 2:    // your hand is a few inches from the sensor
        SerialUSB.println("medium");
        break;
    case 3:    // your hand is nowhere near the sensor
        SerialUSB.println("bright");
        break;
    }
}
