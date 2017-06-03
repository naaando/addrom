# addrom

*A mirror of <http://git.fifth.space/addrom/>*

*I don't maintain this code, neither provide support, it's here just for redistributing purposes, as allowed by MIT License*

Simple tool to add a rom entry to a PB3 list.dat.

addrom lets you add a rom entry into a Pandora's Box 3 list.dat rom file.
It reads an input file or starts from scratch, writes rom fields according the
file format, calculates the total number of entries and modifies that reference
in the file, and writes the resulting new file to the input file or another
output file.

Works only for Pandora's Box 3 520+20/540 in 1 (jamma).

## Installation

Edit config.mk for customizing compilation options and installation paths.

        make            (building)
        make install    (install, may need privileges, default in /usr/local)
        make clean      (cleaning)

## Usage

Read the manual page.

## File format

The file is composed of a header and a concatenation of rom entries
with the following fields:

        HEADER                 16B
            Header size         4B
            Number of games     4B
        ENTRY                 120B
            Chinese name       64B
            English name       32B
            ROM name           16B
            Magic number (?)    8B
        ENTRY...

The number of games field is calculated in the following manner:

        Field = (decimal number of games &lt;&lt; 32 &lt;&lt; 6) / 0x88888888

You can reverse the calculation with this:

        Decimal number of games = (field * 0x88888889) &gt;&gt; 32 &gt;&gt; 6

## Thanks

To Meng Xipeng &lt;mengxipeng@gmail.com&gt; for the instructions about the list.dat
file format.

To Maastaz Raïk ([Youtube channel](https://www.youtube.com/user/maastahraik))
for testing on real hardware the correctness of the generated list.dat files.
