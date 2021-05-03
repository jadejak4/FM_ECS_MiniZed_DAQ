`timescale 1ns/1ns 
module blink (clk, LED, reset);

input clk;
output LED;
input reset;
reg LED_status;
integer counter;
initial 
begin
LED_status <= 1'b1;
end

always @ (posedge clk)
begin
counter=counter+1;
if(!reset)
begin 
LED_status <= !LED_status;
counter=0;
end

if(counter==20000000)
begin
LED_status <= !LED_status;
counter=0;
end
end

assign LED = LED_status;

endmodule  
