// #include "simulator_binding.h"

#include <stdio.h>

void init_hook() {
    // printf("Firmware initialized.\n");
}

void run_tick_hook() {
    float temperature = 0.0f;
    // getSutDataFloat("temperature_sensor.temperature");
    printf("Firmware: Current temperature is %.2f°C\n", temperature);
}
