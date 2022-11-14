#!/bin/bash
./spl ./spl_progs/OS.spl
echo "OS Startup Compiled"
./spl ./spl_progs/OS2.spl
echo "OS Startup Sec Compiled"
./spl ./spl_progs/MOD7.spl
echo "Boot Module Compiled"
./spl ./spl_progs/timer.spl
echo "Timer Compiled"
./spl ./spl_progs/MOD5.spl
echo "Scheduler Compiled"
./spl ./spl_progs/INT4.spl
echo "INT 4 Compiled"
./spl ./spl_progs/INT5.spl
echo "INT 5 Compiled"
./spl ./spl_progs/INT6.spl
echo "INT 6 Compiled"
./spl ./spl_progs/INT7.spl
echo "INT 7 Compiled"
./spl ./spl_progs/INT8.spl
echo "INT 8 Fork Compiled"
./spl ./spl_progs/INT9.spl
echo "INT 9 Compiled"
./spl ./spl_progs/INT10.spl
echo "INT 10 Compiled"
./spl ./spl_progs/INT11.spl
echo "INT 11 Compiled"
./spl ./spl_progs/INT12.spl
echo "INT 12 Logout Compiled"
./spl ./spl_progs/INT13.spl
echo "INT 13 Compiled"
./spl ./spl_progs/INT14.spl
echo "INT 14 Compiled"
./spl ./spl_progs/INT15.spl
echo "INT 15 Shutdown Compiled"
./spl ./spl_progs/INT16.spl
echo "INT 16 Compiled"
./spl ./spl_progs/INT17.spl
echo "INT 17 Login Compiled"
./spl ./spl_progs/console_interrupt.spl
echo "Console Interupt Compiled"
./spl ./spl_progs/disk_interrupt.spl
echo "Disk Interupt Compiled"
./spl ./spl_progs/MOD0.spl
echo "Module 0 Resource Manager Compiled"
./spl ./spl_progs/MOD1.spl
echo "Module 1 Process Manager Compiled"
./spl ./spl_progs/MOD2.spl
echo "Module 2 Memory Manager Compiled"
./spl ./spl_progs/MOD3.spl
echo "Module 3 File Manager Compiled"
./spl ./spl_progs/MOD4.spl
echo "Module 4 Device Manager Compiled"
./spl ./spl_progs/MOD6.spl
echo "Module 6 Compiled"
./spl ./spl_progs/MOD8.spl
echo "Module 8 Compiled"
./spl ./spl_progs/exhandler.spl
echo "Exception Handler Compiled"
