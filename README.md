# SimpleCount

A lightweight program for finding the ratio of something occurring over a span of minutes.

## Justification of Features

* **Running tally:** it's easy to lose track of how far along in a count you are.
* **Ratio calculation:** counting things manually and then calculating events per minute can to be imprecise.
* **Fixed-point precision to 2 decimal places:** numbers smaller than 1/100 of a minute are not displayed for legibility.

## Installation Instructions

### UNIX-like

1. `git clone` - get a local copy of the repository.
2. `cd SimpleCopy` - change working directory to the cloned repository.
3. `make` - compile the project, assuming `g++` is available on your machine.
4. `./count` - run the application.

### Windows

Basically the same as _UNIX-like,_ but compiling might require the use of an IDE.
