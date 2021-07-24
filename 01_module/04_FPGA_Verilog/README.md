# verilog
## macos
```bash=
brew install icarus-verilog
```

## ubuntu
```bash=
apt-get install verilog
```

```bash=
iverilog -o hello hello.v
vvp hello
```

With testbench
```bash=
$ iverilog -o mysimple simple_tb.v simple.v
$ vvp mysimple
or
$ ./mysimple
```
The output .vcd file can be opened and viewed by Gtkwave

Ref:
http://www.asic-world.com/verilog/veritut.html

https://www.hdlworks.com/hdl_corner/verilog_ref/


