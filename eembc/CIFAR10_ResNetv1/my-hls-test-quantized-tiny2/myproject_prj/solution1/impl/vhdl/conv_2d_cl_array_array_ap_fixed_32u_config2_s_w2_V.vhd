-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_rom is 
    generic(
             DWIDTH     : integer := 8; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 96
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11011000", 1 => "10000000", 2 => "01001111", 3 => "11001110", 
    4 => "01111111", 5 => "00001011", 6 => "01010111", 7 => "00011111", 
    8 => "10000000", 9 => "11111000", 10 => "10100011", 11 => "11010000", 
    12 => "10111111", 13 => "00011000", 14 => "10110011", 15 => "10000000", 
    16 => "11011100", 17 to 18=> "01111111", 19 to 20=> "10000000", 21 => "11111011", 
    22 => "01111111", 23 => "00010111", 24 => "10111000", 25 => "01010011", 
    26 => "01111111", 27 => "10000000", 28 => "10010011", 29 => "01111111", 
    30 => "10000000", 31 => "01111111", 32 => "01100001", 33 => "01111111", 
    34 => "10000000", 35 => "00010110", 36 => "11000011", 37 => "10000101", 
    38 => "00100010", 39 => "10000000", 40 => "00111010", 41 => "00100001", 
    42 => "01111111", 43 => "10000000", 44 => "10011111", 45 => "10000000", 
    46 => "01111111", 47 => "10000000", 48 => "11000001", 49 => "10011101", 
    50 => "00111110", 51 => "10011010", 52 => "11101100", 53 => "00100101", 
    54 => "01110011", 55 => "10000000", 56 => "10011000", 57 => "10101110", 
    58 => "10000000", 59 to 60=> "01111111", 61 => "01101110", 62 => "10101010", 
    63 => "10000000", 64 => "00011100", 65 => "01111111", 66 => "11000100", 
    67 => "01111111", 68 => "10000000", 69 => "11111111", 70 => "01111111", 
    71 => "10000000", 72 => "01111111", 73 => "00010011", 74 => "11110101", 
    75 => "00011111", 76 => "10111100", 77 to 78=> "01111111", 79 => "10000000", 
    80 => "11011100", 81 => "00010101", 82 => "10000000", 83 => "00000010", 
    84 => "11001110", 85 => "11010111", 86 => "01111111", 87 => "01101101", 
    88 => "10000000", 89 => "01111111", 90 => "10000000", 91 => "01111111", 
    92 => "00000000", 93 => "10000000", 94 => "00000110", 95 => "01111111" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

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

entity conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 96;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V is
    component conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_rom_U :  component conv_2d_cl_array_array_ap_fixed_32u_config2_s_w2_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


