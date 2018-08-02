# SimpleCount

A lightweight program for finding the ratio of something occurring over a span of minutes.

## Justification of Features

* **Running tally:** It's easy to lose track of how far along in a count you are.
* **Ratio calculation:** Counting things manually and then calculating events per minute can to be imprecise.
* **Fixed-point precision to 2 decimal places:** Numbers smaller than 1/100 of a minute are not displayed for legibility.

## Installation Instructions

### UNIX-like

1. `git clone` - Get a local copy of the repository.
2. `cd SimpleCopy` - Change working directory to the cloned repository.
3. `make` - Compile the project - Requires `g++` on your machine.
4. `./count` - Run the application.

### Windows

Basically the same as _UNIX-like,_ but compiling might require the use of an IDE.

## Usage instruction
Enter 1 to increase tally, 0 to decrease tally
ctrl+d outputs final results
NOTE: ctrl+c exits without output
