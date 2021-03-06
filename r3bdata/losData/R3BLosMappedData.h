#ifndef R3BLOSMAPPEDITEM_H
#define R3BLOSMAPPEDITEM_H

#include "TObject.h"

// for the data analysis of the LOS detectors.
// Introduced by Ralf, Jan 2016

class R3BLosMappedData : public TObject
{
  public:
    // Default Constructor
    R3BLosMappedData();

    // Standard Constructor
    R3BLosMappedData(UInt_t, UInt_t, UInt_t, UInt_t, UInt_t);

    // Getters
    inline UInt_t GetDetector()   const { return fDetector;   }
    inline UInt_t GetChannel()    const { return fChannel;    }
    inline UInt_t GetType()       const { return fType;       }
    inline UInt_t GetTimeFine()   const { return fTimeFine;   }
    inline UInt_t GetTimeCoarse() const { return fTimeCoarse; }

  private:
    UInt_t fDetector; // 1..n
    UInt_t fChannel;  // 1..n (n=4 or 8 or 18)
    UInt_t fType;     // 0 (VFTX), 1 (TAMEX leading), 2 (TAMEX trailing)
    UInt_t fTimeCoarse;
    UInt_t fTimeFine;

  public:
    ClassDef(R3BLosMappedData, 1) //2
};

#endif
