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



#if !defined(FIT_MESG_BROADCAST_PLUGIN_HPP)
#define FIT_MESG_BROADCAST_PLUGIN_HPP

#include "fit.hpp"
#include "fit_mesg.hpp"

namespace fit
{

class MesgBroadcastPlugin
{
public:
    virtual ~MesgBroadcastPlugin() { /* Empty destructor */ };
    virtual void OnBroadcast(std::vector<Mesg>& mesgs) = 0;
    virtual void OnIncomingMesg(const Mesg& mesg) = 0;
};

} // namespace fit

#endif // defined(FIT_MESG_BROADCAST_PLUGIN_HPP)
