
#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
  
}

void loop() {
  ++count;
  toggle = toggle_state(count);//toggle LED value.
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  --count;
  toggle = toggle_state(count);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

int toggle_state(int toggle) {
  return toggle;
}
