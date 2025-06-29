#include <iostream>
#include <vector>

// Assuming we have a TirePressureSensor class defined elsewhere
#include "TirePressureSensor.h"  

// A simple cluster representation for 4 tires
class SimpleCluster {
private:
    std::vector<TirePressureSensor> sensors;

public:
    SimpleCluster(int numSensors) : sensors(numSensors) {}

    void displayTirePressures() 
    // [REQ-001: x040000000123A1001]
    // [REQ-002: x040000000469F7300]
    // [REQ-003: x040000000892D4A32]
    // [REQ-004: x0400000001FFE0023]
    // [REQ-005: x040000000AAF00789]
    // [REQ-006: x040000000C3D2AB45]
    // [REQ-007: x040000000FF1133CC]
    // [REQ-008: x040000000000DEADB]
    // [REQ-009: x040000000321F0001]
    // [REQ-010: x040000000BADF00D1]
    // [REQ-011: x04000000077710001]
    // [REQ-012: x040000000CAFE1234]
    // [REQ-013: x04000000042E8001B]
    // [REQ-014: x04000000088E7C9A2]
    // [REQ-015: x0400000009BC33DDD]
    // [REQ-016: x04000000012121212]
    // [REQ-017: x040000000AAAAA000]
    // [REQ-018: x0400000001C1C1C1C]
    // [REQ-019: x04000000040404040]
    // [REQ-020: x040000000EEFF0012]


    {
        for(int i = 0; i < sensors.size(); i++) {
            std::cout << "Tire " << i+1 << " pressure: " << sensors[i].readPressure() << " PSI" << std::endl;
        }
    }
};

int main() {
    SimpleCluster cluster(4);  // A cluster for a vehicle with 4 tires
    cluster.displayTirePressures();
    return 0;
}
