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


package com.garmin.fit;


public enum TimeMode {
   HOUR12((short)0),
   HOUR24((short)1),
   MILITARY((short)2),
   HOUR_12_WITH_SECONDS((short)3),
   HOUR_24_WITH_SECONDS((short)4),
   UTC((short)5),
    INVALID((short)255);

    protected short value;

    private TimeMode(short value) {
        this.value = value;
    }

   public static TimeMode getByValue(final Short value) {
      for (final TimeMode type : TimeMode.values()) {
         if (value == type.value)
            return type;
      }

      return TimeMode.INVALID;
   }

    /**
     * Retrieves the String Representation of the Value
     * @return The string representation of the value
     */
   public static String getStringFromValue( TimeMode value ) {
       return value.name();
   }

   public short getValue() {
      return value;
   }


}
