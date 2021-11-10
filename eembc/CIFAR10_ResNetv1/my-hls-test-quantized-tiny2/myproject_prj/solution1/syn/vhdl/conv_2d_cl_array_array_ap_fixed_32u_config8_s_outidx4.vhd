-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_rom is 
    generic(
             DWIDTH     : integer := 5; 
             AWIDTH     : integer := 11; 
             MEM_SIZE    : integer := 2048
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 63=> "00000", 64 to 127=> "00001", 128 to 191=> "00010", 192 to 255=> "00011", 256 to 319=> "00100", 
    320 to 383=> "00101", 384 to 447=> "00110", 448 to 511=> "00111", 512 to 575=> "01000", 576 to 639=> "01001", 
    640 to 703=> "01010", 704 to 767=> "01011", 768 to 831=> "01100", 832 to 895=> "01101", 896 to 959=> "01110", 
    960 to 1023=> "01111", 1024 to 1087=> "10000", 1088 to 1151=> "10001", 1152 to 1215=> "10010", 1216 to 1279=> "10011", 
    1280 to 1343=> "10100", 1344 to 1407=> "10101", 1408 to 1471=> "10110", 1472 to 1535=> "10111", 1536 to 1599=> "11000", 
    1600 to 1663=> "11001", 1664 to 1727=> "11010", 1728 to 1791=> "11011", 1792 to 1855=> "11100", 1856 to 1919=> "11101", 
    1920 to 1983=> "11110", 1984 to 2047=> "11111" );


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

entity conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4 is
    generic (
        DataWidth : INTEGER := 5;
        AddressRange : INTEGER := 2048;
        AddressWidth : INTEGER := 11);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4 is
    component conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_rom_U :  component conv_2d_cl_array_array_ap_fixed_32u_config8_s_outidx4_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


