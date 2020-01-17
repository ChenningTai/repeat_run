module test_EVEN_PARITY();
reg I;//input¥Îreg
wire PE; //output¥Îwire

HW1 uut (
    .I(I),//¬A¸¹¤ºªº¬O¯u¹ê¦WºÙ
    .PE(PE)
    );
initial begin
    // $sdf_annotate("HW1.sdf",my_alu);
    // $fsdbDumpfile("HW1.fsdb"); 
    // $fsdbDumpvars; 
    // $dumpfile("HW1.vcd");
    // $dumpvars;
    // cinfile = $fopen("data_in.txt", "r");
    // while(!$feof(cinfile)) begin
    //     cnt = $fscanf(cinfile, "%d %d %d %d", rin[0], rin[1], rin[2], rin[3]);
    //     $display("%d %d %d %d", rin[0], rin[1], rin[2], rin[3]);
    //     #5 A=rin[0];B=rin[1];C=rin[2];D=rin[3];
    // end
    I = 8'b00000000;
    #5 I = 
end
endmodule