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


public enum BodyLocation {
   LEFT_LEG((short)0),
   LEFT_CALF((short)1),
   LEFT_SHIN((short)2),
   LEFT_HAMSTRING((short)3),
   LEFT_QUAD((short)4),
   LEFT_GLUTE((short)5),
   RIGHT_LEG((short)6),
   RIGHT_CALF((short)7),
   RIGHT_SHIN((short)8),
   RIGHT_HAMSTRING((short)9),
   RIGHT_QUAD((short)10),
   RIGHT_GLUTE((short)11),
   TORSO_BACK((short)12),
   LEFT_LOWER_BACK((short)13),
   LEFT_UPPER_BACK((short)14),
   RIGHT_LOWER_BACK((short)15),
   RIGHT_UPPER_BACK((short)16),
   TORSO_FRONT((short)17),
   LEFT_ABDOMEN((short)18),
   LEFT_CHEST((short)19),
   RIGHT_ABDOMEN((short)20),
   RIGHT_CHEST((short)21),
   LEFT_ARM((short)22),
   LEFT_SHOULDER((short)23),
   LEFT_BICEP((short)24),
   LEFT_TRICEP((short)25),
   LEFT_BRACHIORADIALIS((short)26),
   LEFT_FOREARM_EXTENSORS((short)27),
   RIGHT_ARM((short)28),
   RIGHT_SHOULDER((short)29),
   RIGHT_BICEP((short)30),
   RIGHT_TRICEP((short)31),
   RIGHT_BRACHIORADIALIS((short)32),
   RIGHT_FOREARM_EXTENSORS((short)33),
   NECK((short)34),
   THROAT((short)35),
   WAIST_MID_BACK((short)36),
   WAIST_FRONT((short)37),
   WAIST_LEFT((short)38),
   WAIST_RIGHT((short)39),
    INVALID((short)255);

    protected short value;

    private BodyLocation(short value) {
        this.value = value;
    }

   public static BodyLocation getByValue(final Short value) {
      for (final BodyLocation type : BodyLocation.values()) {
         if (value == type.value)
            return type;
      }

      return BodyLocation.INVALID;
   }

    /**
     * Retrieves the String Representation of the Value
     * @return The string representation of the value
     */
   public static String getStringFromValue( BodyLocation value ) {
       return value.name();
   }

   public short getValue() {
      return value;
   }


}
