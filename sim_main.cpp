
#include <verilated.h>          // Defines common routines
//# include <iostream>             // Need std::cout
#include <Vwhile.h>               // From Verilating "top.v"

Vwhile *top;                      // Instantiation of module

vluint64_t main_time = 0;       // Current simulation time
        // This is a 64-bit integer to reduce wrap over issues and
        // allow modulus.  You can also use a double, if you wish.

double sc_time_stamp () {       // Called by $time in Verilog
    return main_time;           // converts to double, to match
                                // what SystemC does
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);   // Remember args

    top = new Vwhile;             // Create instance

    // top->reset_l = 0;           // Set some inputs

    while (!Verilated::gotFinish()) {
        if (main_time >= 0 && main_time < 5) {
            top->I = 0;
}
        if (main_time >= 5 && main_time < 10) {
            top->I = 1;
}
        if (main_time >= 10 && main_time < 15) {
            top->I = 3;
}
        if (main_time >= 15 && main_time < 20) {
            top->I = 7;
}
        if (main_time >= 20 && main_time < 25) {
            top->I = 15;
}
        if (main_time >= 25 && main_time < 30) {
            top->I = 31;
}
        if (main_time >= 30 && main_time < 35) {
            top->I = 63;
}
        if (main_time >= 35 && main_time < 40) {
            top->I = 127;
}
        if (main_time >= 40 && main_time < 45) {
            top->I = 255;
}
        if (main_time >= 45 && main_time < 50) {
            top->I = 511;
}
        if (main_time >= 50 && main_time < 55) {
            top->I = 1023;
}
        if (main_time >= 55 && main_time < 60) {
            top->I = 2047;
}

        top->eval();            // Evaluate model
        printf("%d\n",top->PE);       // Read a output
        main_time++;            // Time passes...
        if (main_time >= 60){
            int main_time_int = main_time;
            printf("%d\n", main_time);
            break;
        }
    }
    top->final();               // Done simulating
    //    // (Though this example doesn't get here)
     delete top;
}

