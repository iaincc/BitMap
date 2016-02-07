#include <BitMap.h>




BitMap::BitMap(byte rows,byte cols) {
this->cols=cols;
this->rows=rows;  
bmap = new byte[1+(cols*rows)/8];
}

void BitMap::clr(){

  int siz=1+(cols*rows)/8;
  for ( int i = 0 ; i <= siz ; i++ ){
    *(bmap+i)=0;
  }
}


void BitMap::dump(){

  
  for ( int i = 0 ; i < cols*rows ; i++ ){
  byte B=get(0,i);
  Serial.write(B ?49:48);
  }
  Serial.println();
}

bool BitMap::get(byte x, byte y){

  int bit=y+x*rows;
  byte B = *(bmap+ bit/8);   
  bit = (1 << (bit % 8) );
  return B & bit; 

}

void BitMap::put(bool V,byte x, byte y){

  int bit=y+x*rows;
  byte* B = bmap+ bit/8;  
  bit = (1 << (bit % 8) );

  if ( V ) { *B |= bit;
  } else {   *B &=  ~bit;
  }

}

void BitMap::set(){

  int siz=1+(cols*rows)/8;
  for ( int i = 0 ; i <= siz ; i++ ){
    *(bmap+i)=0xFF;
  }
}


