#ifndef TIRE_PRESSURE_SENSOR_H
#define TIRE_PRESSURE_SENSOR_H

// This class represents a Software Component (SWC) that simulates a Tire Pressure Sensor.
class TirePressureSensor {
private:
    // Current tire pressure value.
    double currentPressure;

public:
    // Default constructor initializes the current pressure to 0.0.
    TirePressureSensor();

    // This method simulates the reading of pressure data.
    // In a real sensor SWC, this would interact with the actual hardware.
    double readPressure();

    // This method allows setting of the pressure data.
    // In a real sensor SWC, this could involve complex algorithms or calibration procedures.
    void writePressure(double pressure);
};

#endif // TIRE_PRESSURE_SENSOR_H
