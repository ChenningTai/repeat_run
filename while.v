module EVEN_PARITY(I, PE);

input [8:1]I;
output reg PE;

integer j;

always @(I)
	begin
	PE = 1'b0;
	j = 1;
	
	while(j<9)
		begin
			PE = PE ^ I[j];
			j = j + 1;
		end
	end
endmodule
