////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2017 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.41Release
// Tag = production/akw/20.41.00-0-gfbba504
////////////////////////////////////////////////////////////////////////////////


#include "fit_accumulator.hpp"

namespace fit
{

FIT_UINT32 Accumulator::Accumulate(const FIT_UINT16 mesgNum, const FIT_UINT8 destFieldNum, const FIT_UINT32 value, const FIT_UINT8 bits)
{
   int i;
   AccumulatedField accumField;

   for (i = 0; i < (int)fields.size(); i++)
   {
       accumField = fields.at(i);
       if ( ( accumField.mesgNum == mesgNum ) && ( accumField.destFieldNum == destFieldNum ) )
         break;
   }

   if (i == (int)fields.size()) {
      fields.push_back(AccumulatedField(mesgNum, destFieldNum));
   }

   return fields[i].Accumulate(value, bits);
}

void Accumulator::Set(const FIT_UINT16 mesgNum, const FIT_UINT8 destFieldNum, const FIT_UINT32 value)
{
    int i;
    AccumulatedField accumField;

    for (i = 0; i < (int)fields.size(); i++)
    {
        accumField = fields.at(i);
        if ( ( accumField.mesgNum == mesgNum ) && ( accumField.destFieldNum == destFieldNum ) )
            break;
    }

    if (i == (int)fields.size()) {
        accumField = AccumulatedField(mesgNum, destFieldNum);
        fields.push_back(accumField);
    }
    fields[i].Set(value);
}

} // namespace fit
