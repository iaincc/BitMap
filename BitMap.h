#ifndef BitMap_h
#define BitMap_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class BitMap
{
  public :
        
        BitMap( byte cols, byte rows );
        bool get(byte x, byte y);
        void put(bool V,byte x, byte y);
        void clr();
        void set();
        void dump();
        
  private :
  byte cols;
  byte rows;  //Not currently used ( could check y  < rows )
  byte *bmap;
};
