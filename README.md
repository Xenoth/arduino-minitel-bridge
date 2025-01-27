# Minitel Bridge

Arduino project to use the DIN Connector of the Minitel 1B for communication.

# Requirements

* Arduino Nano 33 IoT: https://docs.arduino.cc/hardware/nano-33-iot/;
* WiFiNINA: https://docs.arduino.cc/libraries/wifinina/.

# File `config.h`

This file contains the necessary configurations for the project.
```cpp
#ifndef CONFIG_H
#define CONFIG_H

#define SERVICE_ADDRESS "minitel.xenoth.fr"
#define SERVICE_PORT 3615

#define SERIAL_HOST_BAUDRATE 9600
#define SERIAL_MINITEL_BAUDERATE 1200
#endif // CONFIG_H
```

# File `secrets.h`

This file contains the sensitive configurations needed for the project.
```cpp
#ifndef SECRETS_H
#define SECRETS_H

#define SECRET_SSID "MyNetworkWiFi"
#define SECRET_PASS "SuperSecretPassword"

#endif // SECRETS_H
```

# Schemas


| ![Prototype](docs/Minitel%20Bridge_bb.png) |
|--------------------------------------------|
|Prototype|

| ![Prototype](docs/Minitel%20Bridge_schéma.png) |
|--------------------------------------------|
|Schema|

| ![Prototype](docs/Minitel%20Bridge_circuit%20imprimé.png) |
|--------------------------------------------|
|Printed circuit board|

| ![Prototype](docs/Minitel%20DIN.png) |
|--------------------------------------------|
|Minitel's DIN Port|

# Related Projects
* pyMinitel: https://github.com/Xenoth/pyminitel Minitel's Python library by [Xenoth](https://github.com/Xenoth);
* XeNAS Minitel Services: https://github.com/Xenoth/xenas-minitel-services XeNAS services (minitel.xenoth.fr:3615) by [Xenoth](https://github.com/Xenoth);
* eMinitel: https://github.com/Asphox/eMinitel Minitel Emulator by [Asphox](https://github.com/Asphox).


# Authors
* Xenoth (Pol Bailleux).

