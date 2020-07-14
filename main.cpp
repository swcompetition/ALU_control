#include "ALU_control.h"

int main() {
    bool alu_op[2] = { 0,1 };
    string function = "101010";

    ALU_control control;
    control.check_ALU_control_bit(alu_op, function);
    cout << control.get_ALU_control_bit() << endl;
}