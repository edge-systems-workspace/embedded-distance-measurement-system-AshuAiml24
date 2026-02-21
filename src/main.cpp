#include <Arduino.h>

/**
 * @file `main.cpp`
 * @brief Embedded distance measurement using HC-SR04 ultrasonic sensor.
 * @details Measures distance with an HC-SR04 ultrasonic sensor and prints
 *          structured output to the Serial Monitor.
 * @author ASHU PAL
 * @date 2026-02-17
 */



int TRIG_pin = 9;

 // Define TRIG pin (Use pin 9)

int ECHO_pin = 10;
 // Define ECHO pin (Use pin 10)

long duration;
 // Create variable to store duration

float distance;
 // Create variable to store calculated distance
/**
 * @brief Arduino setup function.
 * @details Initializes Serial communication at 9600 baud and configures
 *          the TRIG and ECHO pins for the ultrasonic sensor.
 * @return void
 */


void setup() {

    // TODO 5:
    // Initialize Serial communication (9600 baud rate)

    // TODO 6:
    // Configure TRIG as OUTPUT

    // TODO 7:
    // Configure ECHO as INPUT

    // TODO 8:
    // Print system initialization message
}

void loop() {

    // TODO 9:
    // Set TRIG LOW for 2 microseconds

    // TODO 10:
    // Send 10 microsecond pulse on TRIG

    // TODO 11:
    // Measure pulse duration on ECHO using pulseIn()

    // TODO 12:
    // Calculate distance in cm

    // TODO 13:
    // Print calculated distance

    // TODO 14:
    // Add delay (500ms)
}
