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


#import <Foundation/Foundation.h>
#import "FitMesgDefinition.h"
#import "FitFieldDefinition.h"

#include "fit.hpp"

@interface FitMesgDefinition ()

@end

@implementation FitMesgDefinition

- (FIT_UINT8) Write:(FILE *) file forMesgDefn:(const fit::MesgDefinition *)mesgDefinition
{
    int mesgSize = 6;
    FIT_UINT8 byte;
    FIT_UINT8 arch;
    FIT_UINT16 mesgNum;
    std::vector<fit::FieldDefinition> fields = mesgDefinition->GetFields();

    // Message definition record header with local message number.
    byte = (FIT_HDR_TYPE_DEF_BIT) | (mesgDefinition->GetLocalNum() & FIT_HDR_TYPE_MASK);
    fwrite(&byte, 1, 1, file);
    byte = 0; // Reserved
    fwrite(&byte, 1, 1, file);
    arch = fit::GetArch();
    fwrite(&arch, 1, 1, file);
    //Get Message number
    mesgNum = mesgDefinition->GetNum();
    if (arch)
    {  // Big Endian
        byte = (FIT_UINT8)(mesgNum >> 8);
        fwrite(&byte, 1, 1, file);
        byte = (FIT_UINT8)mesgNum;
        fwrite(&byte, 1, 1, file);
    }
    else
    {
        byte = (FIT_UINT8)mesgNum;
        fwrite(&byte, 1, 1, file);
        byte = (FIT_UINT8)(mesgNum >> 8);
        fwrite(&byte, 1, 1, file);
    }
    byte = (FIT_UINT8)fields.size();
    fwrite(&byte, 1, 1, file);

    for (FIT_UINT8 i=0; i<fields.size(); i++)
    {
        FitFieldDefinition *ffd = [[FitFieldDefinition alloc] init];
        int fieldSize = [ffd Write:file forMesgDefn:&fields[i]];

        if (fieldSize == 0)
            return 0;

        mesgSize += fieldSize;
    }

    return mesgSize;

}

@end
