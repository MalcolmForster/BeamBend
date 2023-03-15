# BeamBend
 This is a cmd program written in C++ for simple beam analysis

## How it works
The user is prompted to either create a new beam, or open a previously saved one.
There are multiple main factors for a beam to be created.
- Beam name or ID
- Beam geometry (including length, and perhaps shape i.e. is tapers off?)
- Beam cross section (select from a list and fill in the dimensions accordingly)

When the beam file is opened by BeamBend (shorted to bb from here onwards), the user is then given multiple options that they can use to edit the beam.

The user can add, edit or remove the following points and their values
- Beam support types and locations
- Point loads
- Distributed loads
- Moments

Upon the user entering the information desired for the beam the user can then type in the CALC command and the bbView file with then generate the graphs and results for the specific beam.