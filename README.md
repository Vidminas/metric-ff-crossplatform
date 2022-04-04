# Metric-FF

Website: https://fai.cs.uni-saarland.de/hoffmann/metric-ff.html

This directory contains the C implementation of Metric-FF, as it was
used in the 3rd international planning competition. Build the planner
by typing

make

Which produces an executable named

ff

Usage should be self-explanatory. Running ff without any parameters
prints out a brief help information about the parameters that are
applicable, which basically come down to specifying the domain and
problem files.

Have fun,

Joerg Hoffmann

## Pre-requisites

You will need Flex, Bison, make, and a C compiler (tested working with gcc and clang). Adjust the `makefile` as needed, by editing the `CC` variable to `gcc` or `clang`.

### Windows

On Windows, get Flex and Bison from: https://sourceforge.net/projects/winflexbison/files/latest/download
and extract `win_flex.exe`, `win_bison.exe` and the `data/` folder into the current working directory.
Then modify the

You will also need `make`. This comes pre-installed on most Linux/Mac distributions, but needs special set-up on Windows. The easiest way to get it is to install [Chocolatey](https://chocolatey.org/install) and then install `make` via `choco install make`. Use [Git Bash](https://gitforwindows.org/) instead of CMD/PowerShell.

## Building

Simply run `make` in the project directory.

Run `make clean` to delete the intermediate files created during compilation.
