-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_rom is 
    generic(
             DWIDTH     : integer := 5; 
             AWIDTH     : integer := 14; 
             MEM_SIZE    : integer := 16384
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 511=> "00000", 512 to 1023=> "00001", 1024 to 1535=> "00010", 1536 to 2047=> "00011", 2048 to 2559=> "00100", 
    2560 to 3071=> "00101", 3072 to 3583=> "00110", 3584 to 4095=> "00111", 4096 to 4607=> "01000", 4608 to 5119=> "01001", 
    5120 to 5631=> "01010", 5632 to 6143=> "01011", 6144 to 6655=> "01100", 6656 to 7167=> "01101", 7168 to 7679=> "01110", 
    7680 to 8191=> "01111", 8192 to 8703=> "10000", 8704 to 9215=> "10001", 9216 to 9727=> "10010", 9728 to 10239=> "10011", 
    10240 to 10751=> "10100", 10752 to 11263=> "10101", 11264 to 11775=> "10110", 11776 to 12287=> "10111", 12288 to 12799=> "11000", 
    12800 to 13311=> "11001", 13312 to 13823=> "11010", 13824 to 14335=> "11011", 14336 to 14847=> "11100", 14848 to 15359=> "11101", 
    15360 to 15871=> "11110", 15872 to 16383=> "11111" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2 is
    generic (
        DataWidth : INTEGER := 5;
        AddressRange : INTEGER := 16384;
        AddressWidth : INTEGER := 14);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2 is
    component conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_rom_U :  component conv_2d_cl_array_array_ap_fixed_32u_config11_s_outidx2_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


