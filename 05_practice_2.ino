
#define PIN_LED 7
unsigned int count, toggle, i;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
  i = 0;
  
}

void loop() {
   digitalWrite(PIN_LED, 0);
   delay(1000);
   while (i<5) {
    i+=1;
   digitalWrite(PIN_LED, 1);
   delay(100);
   digitalWrite(PIN_LED,0);
   delay(100);
   }
   digitalWrite(PIN_LED,1);
   while(1){}
   
  
   }



int toggle_state(int toggle) {
  return toggle;
}