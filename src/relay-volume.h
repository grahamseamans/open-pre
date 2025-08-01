#ifndef FALK_RELAY_VOLUME
#define FALK_RELAY_VOLUME


//how to find the two MCP23017s
#define MCP_PORTA               0x00
#define MCP_PORTB               0x01
#define MCP_OUTPUT              0x00
#define MCP_INPUT               0x01

#define MCP_PORTA_PINS          0x12
#define MCP_PORTB_PINS          0x13

#define MCP_VOLUME_ADDRESS      0x24  // A2=HIGH, A1=GND, A0=GND

#define RELAY_PULSE             50

class VolumeController {
  private:
    void volEncLoop(int m);
    void endPulse();
  public:
    void begin(short min, short max);
    void set(int volume);
    void writeBits(byte bits);
    void loop();
};

#endif