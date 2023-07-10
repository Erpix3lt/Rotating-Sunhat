# Sunshade Cap - Arduino Project

![Sunshade Cap](assets/sunshade_cap.jpg)

The Sunshade Cap is an Arduino-based project that incorporates a rotating brim to keep the sun's rays away from the wearer's face. It utilizes a light sensor and a servo motor to automatically adjust the position of the brim based on the intensity of sunlight. This project combines practical functionality with an Arduino microcontroller to create a smart sunshade solution.

## Logic

The Sunshade Cap operates based on a simple yet effective logic that allows it to search for the highest light input using a servo motor and a light sensor. The logic works as follows:

1. The light sensor measures the intensity of sunlight and provides an analog voltage output.
  
2. The Arduino compares the current light input with the previous light value stored in memory.

3. If the current light input is higher than the previous light value, it means the sun's intensity has increased.

4. In response to the increased light input, the Arduino commands the servo motor to rotate in the direction that brings the brim closer to the sun.

5. The servo motor gradually moves the brim in the direction of the highest light input until the light intensity starts to decrease.

6. Once the light intensity decreases or remains stable, the Arduino stops the servo motor from moving the brim further in that direction.

7. If the light intensity starts to decrease, the Arduino changes the servo motor's rotation direction to move the brim in the opposite direction, searching for the highest light input.

8. The servo motor continues to adjust the brim's position based on the light sensor readings, ensuring that the wearer's face remains shaded from the sun's rays.

## Features

- Automatic sunshade adjustment using a light sensor
- Servo motor for smooth and precise brim rotation
- Customizable rotation speed and brim angle range
- Arduino-based for easy customization and expansion

## Hardware Components

- For Arduino Uno version:
  - Arduino Uno board
  - BH1750 light sensor
  - Servo motor
  - Cap with a brim (suitable for modification)
  - Jumper wires
  - Resistor(s) (if required by the light sensor)

- For ATtiny85 version:
  - ATtiny85 microcontroller
  - Light sensor (e.g., analog light sensor module)
  - Servo motor
  - Cap with a brim (suitable for modification)
  - Jumper wires
  - Resistor(s) (if required by the light sensor)

## Circuit Diagram

### Arduino Uno Version

![Arduino Uno Circuit Diagram](assets/arduino_circuit_diagram.png)

### ATtiny85 Version

![ATtiny85 Circuit Diagram](assets/attiny_circuit_diagram.png)

## Installation

### Arduino Uno Version

1. Clone or download the project repository from GitHub: [Sunshade Cap](https://github.com/your_username/sunshade-cap)
2. Connect the components according to the provided circuit diagram for the Arduino Uno version.
3. Install the required libraries:
   - BH1750 library: [https://github.com/claws/BH1750](https://github.com/claws/BH1750)
   - PrecisionServo library: [https://github.com/ElizabethTeaches/PrecisionServo](https://github.com/ElizabethTeaches/PrecisionServo)
4. Upload the Arduino code (`arduino/sunshade_cap.ino`) to your Arduino Uno using the Arduino IDE.
5. Modify the code as necessary to adjust the servo motor's rotation speed, brim angle range, and any other customizations.
6. Mount the components onto the cap, ensuring the light sensor is positioned appropriately to measure sunlight intensity.
7. Power on the system and enjoy your Sunshade Cap!

### ATtiny85 Version

1. Connect the components according to the provided circuit diagram for the ATtiny85 version.
2. Install the required library:
   - PrecisionServo library: [https://github.com/ElizabethTeaches/PrecisionServo](https://github.com/ElizabethTeaches/PrecisionServo)
3. Upload the ATtiny85 code (`attiny/sunshade_cap.ino`) to your ATtiny85 microcontroller using the appropriate programming method.
4. Modify the code as necessary to adjust the servo motor's rotation speed, brim angle range, and any other customizations.
5. Mount the components onto the cap, ensuring the light sensor is positioned appropriately to measure sunlight intensity.
6. Power on the system and enjoy your Sunshade Cap!

## Usage

1. Wear the Sunshade Cap outdoors.
2. The light sensor will detect the sunlight intensity and adjust the brim position accordingly.
3. The servo motor will rotate the brim to keep the sun away from your face, providing shade and protection.
4. Customize the code and experiment with different settings to optimize the brim's movement as desired.

## 3D Sketch

![3D Sketch](assets/3d_sketch.png)

The 3D sketch showcases a modified cap design with a rotating brim mechanism. The brim is connected to the servo motor, allowing it to rotate based on the sunlight intensity measured by the light sensor. This design ensures maximum comfort and protection from the sun while maintaining a stylish look.

## Acknowledgments

This project was inspired by the open-source Arduino community and the PrecisionServo library developed by Elizabeth Teaches.

## License

This project is licensed under the [MIT License](LICENSE).
