#ifndef    PLATFORM_TYPES_H_
#define    PLATFORM_TYPES_H_

typedef signed char           sint8;
typedef unsigned char         uint8;
typedef signed short          sint16;
typedef unsigned short        uint16;
typedef signed int            sint32;
typedef unsigned int          uint32;
typedef signed long long      sint64;
typedef unsigned long long    uint64;
typedef  float                float32;
typedef double                float64;



typedef volatile sint8       vint8;
typedef volatile uint8       vuint8;
typedef volatile sint16      vint16;
typedef volatile uint16     vuint16;
typedef volatile sint32      vint32;
typedef volatile uint32     vuint32;
typedef volatile sint64      vint64;
typedef volatile uint64     vuint64;
typedef volatile float32   vfloat32;
typedef volatile float64   vfloat64;

#define  NULL            0


#endif
