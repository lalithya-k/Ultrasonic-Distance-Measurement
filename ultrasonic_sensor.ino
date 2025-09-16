// Variables and pins declared and initialised
int trigPin = 10;   // TRIG connected to pin 10 of Arduino
int echoPin = 9;    // ECHO connected to pin 9 of Arduino
long time;          // Variable to store time of flight
int distance;       // Variable to store calculated distance

void setup() {
  // This loop runs only once
  pinMode(trigPin, OUTPUT);   // TRIG pin set as output
  pinMode(echoPin, INPUT);    // ECHO pin set as input
  Serial.begin(9600);         // Begin communication
}

void loop() {
  // This loop repeats continuously
  
  // Clear TRIG pin
  digitalWrite(trigPin, LOW);     
  delayMicroseconds(2);           
  
  // Send ultrasonic pulse
  digitalWrite(trigPin, HIGH);    
  delayMicroseconds(10);          
  digitalWrite(trigPin, LOW);     
  
  // Calculate the time of flight
  time = pulseIn(echoPin, HIGH);  
  
  // Calculate distance (in cm)
  distance = time * 0.034 / 2;    
  
  // Print the distance
  Serial.print("Distance: ");
  Serial.println(distance);
}
