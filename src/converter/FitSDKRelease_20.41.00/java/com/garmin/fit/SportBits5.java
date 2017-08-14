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

import java.util.HashMap;
import java.util.Map;

public class SportBits5 {
    public static final short WATER_SKIING = 0x01;
    public static final short KAYAKING = 0x02;
    public static final short RAFTING = 0x04;
    public static final short WINDSURFING = 0x08;
    public static final short KITESURFING = 0x10;
    public static final short TACTICAL = 0x20;
    public static final short JUMPMASTER = 0x40;
    public static final short BOXING = 0x80;
    public static final short INVALID = Fit.UINT8Z_INVALID;

    private static final Map<Short, String> stringMap;

    static {
        stringMap = new HashMap<Short, String>();
        stringMap.put(WATER_SKIING, "WATER_SKIING");
        stringMap.put(KAYAKING, "KAYAKING");
        stringMap.put(RAFTING, "RAFTING");
        stringMap.put(WINDSURFING, "WINDSURFING");
        stringMap.put(KITESURFING, "KITESURFING");
        stringMap.put(TACTICAL, "TACTICAL");
        stringMap.put(JUMPMASTER, "JUMPMASTER");
        stringMap.put(BOXING, "BOXING");
    }


    /**
     * Retrieves the String Representation of the Value
     * @return The string representation of the value, or empty if unknown
     */
    public static String getStringFromValue( Short value ) {
        if( stringMap.containsKey( value ) ) {
            return stringMap.get( value );
        }

        return "";
    }

    /**
     * Retrieves a value given a string representation
     * @return The value or INVALID if unkwown
     */
    public static Short getValueFromString( String value ) {
        for( Map.Entry<Short, String> entry : stringMap.entrySet() ) {
            if( entry.getValue().equals( value ) ) {
                return entry.getKey();
            }
        }

        return INVALID;
    }

}
