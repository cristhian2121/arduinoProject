

### Config

1. Add extension [Arduino for Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=vsciot-vscode.vscode-arduino)

2. Add the config to vscode in root project, *.vscode/arduino.json*:

`{
    "port": "/dev/ttyACM0",
    "board": "arduino:avr:uno",
    "sketch": "main.ino"
}`

Where:
**port**: port serial to connect.

**board**: arduino board (example arduino uno).

**sketch**: entrypoint of proyect (file main).

3. Validate command from extension option [here](https://maker.pro/arduino/tutorial/how-to-use-visual-studio-code-for-arduino)

  * Validate board
  * Validate port
  * Validate baudios speed (9600 to work with some modules)