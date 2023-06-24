# Technion Rocketry Club - Avionics Software

<p align="center">
  <img src="https://i.imgur.com/cVFisQp.png" width="150">
</p>

## About

The Technion Rocketry Club's Avionics Software is a C++ application that collects and transmits real-time sensor data during our rocket's flight.

## Features

- **Real-time data collection**: The software supports data collection from the following sensors:
  - MMC5603
  - MPL3115A2
  - MPU6050
  - Neo-6M

- **Telemetry (In Progress)**: The collected sensor data will eventually be relayed in real time to the ground, enabling live monitoring of the rocket's performance and environment during flight.

## Usage

1. Clone the repository: `git clone https://github.com/SamSeban/RocketrySoftware.git`
2. Navigate to the repository: `cd RocketrySoftware`
3. Run `main.cpp` to start the software (make sure your C++ environment is set up correctly).

Please ensure the onboard sensors are properly connected and configured before running the software.
