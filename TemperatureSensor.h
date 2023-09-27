#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H

// This class represents a Software Component (SWC) that simulates a Tire Pressure Sensor.
class TemperatureSensor {
private:
    // Current temp value.
    double currentTemp;

public:
    // Default constructor initializes the current temp to 0.0.
    TemperatureSensor();

    // This method simulates the reading of temp data.
    // In a real sensor SWC, this would interact with the actual hardware.
    double readTemp();

    // This method allows setting of the temp data.
    // In a real sensor SWC, this could involve complex algorithms or calibration procedures.
    void writeTemp(double temp);
};

#endif // TEMP_SENSOR_H
