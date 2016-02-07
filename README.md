# BitMap
Arduino BitMap Library
This class is designed for lightweight Arduino use
Max bitmap size is 255x255 which consumes 8K 
a more realistic size is 64x64 which uses 0.5K !

Create a bitmap using

BitMap  bits(8,8);

and modify contents :-

bits.set(FALSE,5,7)

The you can access a particular bit using

bits.get(5,7);

Initialise the bitmap as

bits.clr();  or bits.set();
