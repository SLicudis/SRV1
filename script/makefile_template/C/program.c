void out(int data){
    int tmp = data;
    asm volatile(
        "li t1, 0x4000\n"      // Load I/O address into t1
        "sw %0, 0(t1)\n"       // Store the value of data into the I/O address
        :
        : "r"(data)            // Input operand for the assembly (data)
        : "t1"                 // Clobbered register
    );
}

void end_loop(){
    asm volatile(
        "loop:"
        "j loop"
    );
}

void main(){
    int x = 1;

    for(int i = 0; i < 10; i++){
        x = x * 3;
        out(x); //
    }

    end_loop();
}
