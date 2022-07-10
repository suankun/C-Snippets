# Diff Tool Task

This is a skeleton for a group task to implement
**a utility program for comparing files**.

<br>

## Skeleton Contents
  - [`main.c`](src/main.c) with an example `main()` function
    _(this kind of structure will make your life much easier later)_;
  - [`include/`](include/) with some headers suggesting modules
    that you may want to implement in `src/`;
  - [`tests/`](tests/) with sample input files & expected output,
    divided into solution stages _(more on this later)_;
  - [`run_tests.py`](run_tests.py) so you don't spend more time
    in the terminal than in your editor _(usage below)_.
  - [`Makefile`](bld/Makefile) to build the project _(see below)_.

### Changing the skeleton
You are expected to make _informed_ changes to the provided files and
the directory structure; meaning you should understand the reasons
for the initial contents first, and then adjust them to your needs.

### Building with make
A (slightly hack-y) makefile is provided in the skeleton, which allows
you to easily build the project, as long as it consists of one or more
C source files (`.c`) placed _directly_ in `src/` with headers (`.h`)
in `include/`.

  - Go to `bld/` (with `cd bld`);
  - Run `mingw32-make.exe` (Windows), or `make` (Linux) to _build_;
  - Run `mingw32-make.exe clean`, or `make clean`
    to delete artefacts of a previous build (only when necessary).

_You are free to modify the makefile (e.g. by adding extra compiler
options in `CFLAGS`), to write your own, or to decide on a different
way of building your project._


### Usage of `run_tests.py`
After building your project (resulting in an executable in `bld/`),
run the script, passing the number of the stage you want to test.

_For each test in the stage, `[id PASS]` will be printed if the program
gave exactly the expected output, or otherwise `[id FAIL]` and both the
expected and actual output received from the program._

**Run the script** with
  - `.\run_tests.py 0` on Windows, or
  - `./run_tests.py 0` on Linux.

_**Note**: the script expects to be run from the project's root directory
(aka where it is in the skeleton), and relies on `bld/difftool.out` or
`bld/difftool.exe` and the original `tests/` directory structure._

----

<br>

## Solution Stages
###### _Not all diffs are created equal._
You are **strongly** encouraged to implement the program
in increasing levels of functionality and sophistication.

The `tests/` directory assumes the following suggestion:

### Stage-0
Check files for strict equality. Meaning _any_ difference
is considered a negative, and _no_ difference - a positive.
#### Suggested output:
"`Files are identical.`" or "`Files are different.`"

### Stage-1
Count the number of non-identical lines. For each line,
compare only its counterpart (so don't take added or deleted
lines into account).
#### Suggested output:
"`Files are identical.`", "`1 line differs.`", or "`15 lines differ.`"

### Stage-2
Print the lines of each file that differ. If one file is
longer than the other, also show the extra lines.
#### Suggested output:
`Left  3: hello`  
`Right 3: hi`  
`Right 4: there`

