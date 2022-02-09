// const pins
const int trigPin;
const int echoPin;
const int flag = 13;

// variable
int distance;

int calculateDistance()
{
    // Clear trigger
    digitalWrite(trigPin, LOW);
    delay(10);
    // Send signal
    digitalWrite(trigPin, HIGH);
    delay(10);
    // Stop signal
    digitalWrite(trigPin, LOW);
    // Read signal
    long durationAux = pulseIn(echoPin, HIGH);
    int distanceAux = durationAux * 0.034 / 2;
    return distanceAux;
}

void configUltraSonic(int trigPin=3, int echoPin=2)
{
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT);  // Sets the echoPin as an Input
    pinMode(flag, OUTPUT);    // Turn on light when distance < 10 cm
    Serial.begin(9600);       // Starts the serial communication
}

int loopUltraSonic()
{
    distance = calculateDistance();
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    return distance;
}
