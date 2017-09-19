// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#include <Servo.h>

#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            9

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      100

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100; // delay for half a second


Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  pinMode(12, OUTPUT);
   pinMode(13, OUTPUT);
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code
 myservo.attach(6);  // attaches the servo on pin 9 to the servo object
  pixels.begin(); // This initializes the NeoPixel library.
}
int brilho=0;

void loop() {
   pixels.setBrightness(0);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(200);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(200);
    digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(200);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(500);
    digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);
      digitalWrite(13,HIGH); 
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);
      digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.

  pixels.setPixelColor(1, pixels.Color(32,133,197));
    pixels.setPixelColor(2, pixels.Color(179,255,190));
    pixels.setPixelColor(3, pixels.Color(0,222,255));
    pixels.setPixelColor(4, pixels.Color(32,133,197));
     pixels.show();
   for (int i=0;i<200;i++){
        pixels.setBrightness(i);
        pixels.show(); // This sends the updated pixel color to the hardware.
    delay(10); // Delay for a period of time (in milliseconds).
    }
    
    pixels.setBrightness(50);
   pixels.setPixelColor(1, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).
    
      pixels.setBrightness(100);
   pixels.setPixelColor(2, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(100);
   pixels.setPixelColor(3, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(150);
   pixels.setPixelColor(4, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(200);
   pixels.setPixelColor(5, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).
      digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
for (pos = 180; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }   
  
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(200);
    digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(200);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(500);
    digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);
      digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);
      digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);
     pixels.setBrightness(0);
   pixels.setPixelColor(2, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(0);
   pixels.setPixelColor(3, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(0);
   pixels.setPixelColor(4, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(100);
   pixels.setPixelColor(5, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).
     pixels.setBrightness(200);
   pixels.setPixelColor(2, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(200);
   pixels.setPixelColor(3, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(150);
   pixels.setPixelColor(4, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).

          pixels.setBrightness(250);
   pixels.setPixelColor(5, pixels.Color(32,133,197)); // Moderately bright green color.
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(100); // Delay for a period of time (in milliseconds).
    
      digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(200);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(200);
    digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(200);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(500);
    digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);
      digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);
      digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(200);
      digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(200);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(200);
  digitalWrite(12,LOW);

    for (int i=200;i>0;i--){
        pixels.setBrightness(i);
        pixels.show(); // This sends the updated pixel color to the hardware.
    delay(10); // Delay for a period of time (in milliseconds).
    }
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
   // pixels.setPixelColor(i-1, pixels.Color(32,133,197)); // Moderately bright green color.

   // pixels.show(); // This sends the updated pixel color to the hardware.

   // delay(delayval); // Delay for a period of time (in milliseconds).

  }
//}
