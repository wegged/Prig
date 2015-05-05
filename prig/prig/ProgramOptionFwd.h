﻿/* 
 * File: ProgramOptionFwd.h
 * 
 * Author: Akira Sugiura (urasandesu@gmail.com)
 * 
 * 
 * Copyright (c) 2014 Akira Sugiura
 *  
 *  This software is MIT License.
 *  
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */


#pragma once
#ifndef PRIG_PROGRAMOPTIONFWDFWD_H
#define PRIG_PROGRAMOPTIONFWDFWD_H

#ifndef PRIG_HELPCOMMANDFWD_H
#include <prig/HelpCommandFwd.h>
#endif

#ifndef PRIG_RUNNERCOMMANDFWD_H
#include <prig/RunnerCommandFwd.h>
#endif

#ifndef PRIG_STUBBERCOMMANDFWD_H
#include <prig/StubberCommandFwd.h>
#endif

#ifndef PRIG_DISASSEMBLERCOMMANDFWD_H
#include <prig/DisassemblerCommandFwd.h>
#endif

#ifndef PRIG_INSTALLERCOMMANDFWD_H
#include <prig/InstallerCommandFwd.h>
#endif

#ifndef PRIG_LISTERCOMMANDFWD_H
#include <prig/ListerCommandFwd.h>
#endif

#ifndef PRIG_UPDATERCOMMANDFWD_H
#include <prig/UpdaterCommandFwd.h>
#endif

#ifndef PRIG_UNINSTALLERCOMMANDFWD_H
#include <prig/UninstallerCommandFwd.h>
#endif

namespace prig { 

    typedef boost::variant<
        boost::shared_ptr<HelpCommand>, 
        boost::shared_ptr<RunnerCommand>, 
        boost::shared_ptr<StubberCommand>, 
        boost::shared_ptr<DisassemblerCommand>, 
        boost::shared_ptr<InstallerCommand>, 
        boost::shared_ptr<ListerCommand>, 
        boost::shared_ptr<UpdaterCommand>, 
        boost::shared_ptr<UninstallerCommand>
    > Command;

    namespace ProgramOptionDetail {

        class ProgramOptionImpl;

    }   // namespace ProgramOptionDetail {

    struct ProgramOption;
    
}   // namespace prig { 

#endif  // PRIG_PROGRAMOPTIONFWDFWD_H

